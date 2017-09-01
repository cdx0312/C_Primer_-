//
// Created by cdx on 17-6-15.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"

//局部数据类型
typedef struct pair {
    Node * parent;
    Node * child;
} Pair;

//局部函数原型
static Node * MakeNode (const Item *pi);   //新建节点
static void AddNode(Node * new_node, Node * root);
static bool ToLeft (const Item * item1, const Item * item2);
static bool ToRight (const Item * item1, const Item * item2);
static Pair SeekItem (const Item * pi, const Tree * ptree);
static void DeleteNode (Node ** ptr);  //ptr为指针的指针
static void InOrder (const Node * root, void (* pfun)(Item item1));
static void DeleteAllNodes (Node * root);

//函数定义
void InitializeTree (Tree * ptree) {
    ptree->root = NULL;
    ptree->tree_size = 0;
}

bool TreeIsEmpty (const Tree * ptree) {
    if (ptree->root == NULL)
        return true;
    else
        return false;
}

bool TreeIsFull (const Tree * ptree) {
    if (ptree->tree_size == MAXITEMS)
        return true;
    else
        return false;
}

int TreeItemCount (const Tree * ptree) {
    return ptree->tree_size;
}

bool AddItem (const Item * pi, Tree * ptree) {
    Node * new_node;

    if (TreeIsFull(ptree)) {                                   //检查树是否已经满
        fprintf(stderr, "Tree is full\n");
        return false;
    }

    if (SeekItem(pi, ptree).child != NULL) {                    //检查项目是否已经存在
        fprintf(stderr, "Attempted to add duplicate item\n");
        return false;
    }

    new_node = MakeNode(pi);                                    //新建节点

    if (new_node == NULL) {
        fprintf(stderr, "Couldn't create node\n");
        return false;
    }

    ptree->tree_size++;                                         //添加到树上
    if (ptree->root == NULL)
        ptree->root = new_node;
    else
        AddNode(new_node, ptree->root);
}

bool InTree (const Item * pi, const Tree * ptree) {
    return (SeekItem(pi, ptree).child != NULL) ? true : false;
}

bool DeleteItem (const Item * pi, Tree * ptree) {
    Pair look;
    look = SeekItem(pi, ptree);
    if (look.child == NULL)
        return false;
    if (look.parent == NULL)
        DeleteNode(&ptree->root);
    else if (look.parent->left == look.child)
        DeleteNode(&look.parent->left);
    else
        DeleteNode(&look.parent->right);
    ptree->tree_size--;

    return true;
}

void Traverse (const Tree * ptree, void (*pfun)(Item item1)) {
    if (ptree != NULL)
        InOrder(ptree->root, pfun);
}

void DeleteAll (Tree * ptree) {
    if (ptree != NULL)
        DeleteAllNodes(ptree->root);
    ptree->root = NULL;
    ptree->tree_size = 0;
}


//局部函数
static Node * MakeNode (const Item * pi) {
    Node * new_node;

    new_node = (Node *)malloc(sizeof(Node));
    if (new_node != NULL) {
        new_node->item = *pi;
        new_node->left = NULL;
        new_node->right= NULL;
    }

    return new_node;
}

static void AddNode(Node * new_node, Node * root) {
    if (ToLeft(&new_node->item, &root->item)) {
        if (root->left == NULL)
            root->left = new_node;
        else
            AddNode(new_node,root->left);
    }
    else if (ToRight (&new_node->item, &root->item)) {
        if (root->right == NULL)
            root->right = new_node;
        else
            AddNode(new_node, root->right);
    }
    else {
        fprintf(stderr, "location error\n");
        exit(1);
    }
}

static bool ToLeft (const Item * item1, const Item * item2) {
    int comp1;

    if ((comp1 = strcmp(item1->petname, item1->petname)) < 0)
        return true;                                            //item1的宠物名字符串在item2的宠物名的字符串的前边,
    else if (comp1 == 0 && strcmp(item1->petkind, item2->petkind) < 0)
        return true;
    else
        return false;
}

static bool ToRight (const Item * item1, const Item * item2) {
    int comp1;

    if ((comp1 = strcmp(item1->petname, item1->petname)) > 0)
        return true;                                            //item1的宠物名字符串在item2的宠物名的字符串的前边,
    else if (comp1 == 0 && strcmp(item1->petkind, item2->petkind) > 0)
        return true;
    else
        return false;
}

static Pair SeekItem (const Item * pi, const Tree * ptree) {
    Pair look;
    look.parent = NULL;
    look.child = ptree->root;

    if (look.child == NULL)
        return look;
    while (look.child != NULL) {
        if (ToLeft(pi, &(look.child->item))) {
            look.parent = look.child;
            look.child = look.child->left;
        }
        else if (ToRight(pi, &(look.child->item))) {
            look.parent = look.child;
            look.child = look.child->right;
        } else
            break;
    }

    return look;
}

static void DeleteNode (Node ** ptr) {
    Node * temp;
    puts((*ptr)->item.petname);
    if ((*ptr)->left == NULL) {
        temp = *ptr;
        *ptr = (*ptr)->right;
        free(temp);
    }
    else if ((*ptr)->right == NULL) {
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
    }
    else {
        for (temp = (*ptr)->left; temp->right != NULL; temp = temp->right)
            continue;
    }
    temp->right = (*ptr)->right;
    temp = *ptr;
    *ptr = (*ptr)->left;
    free(temp);
}

static void InOrder (const Node * root, void (* pfun)(Item item1)) {
    if (root != NULL) {
        InOrder(root->left,pfun);
        (* pfun) (root->item);
        InOrder(root->right,pfun);
    }
}

static void DeleteAllNodes (Node * root){
    Node * pright;
    if (root != NULL) {
        pright = root->right;
        DeleteAllNodes(root->left);
        free(root);
        DeleteAllNodes(pright);
    }
}