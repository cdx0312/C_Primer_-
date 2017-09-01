//二叉搜索树,树中不允许有相同的项目
// Created by cdx on 17-6-15.
//

#ifndef INC_17_7BINARY_SEARCH_TREE_TREE_H
#define INC_17_7BINARY_SEARCH_TREE_TREE_H

#include <stdbool.h>

//定义Item
typedef struct item {
    char petname[20];
    char petkind[20];
} Item;

#define MAXITEMS 10

typedef struct node {
    Item item;
    struct node * left;    //左节点指针
    struct node * right;   //右节点指针
} Node;

typedef struct tree {
    Node * root;           //指向根节点的指针
    int tree_size;         //树中项目个数
} Tree;

//函数原型
//操作: 把一个树初始化为空树
//操作前: ptree指向一个树
//操作后: 该树被初始化为空树
void InitializeTree (Tree * ptree);

//操作: 确定树是否为空
//操作前: ptree指向一个树
//操作后: 如果树为空返回true,否则返回false
bool TreeIsEmpty (const Tree * ptree);

//操作: 确定树是否已经满
//操作前: ptree指向一个树
//操作后: 如果树已满返回true,否则返回false
bool TreeIsFull (const Tree * ptree);

//操作: 确定树中项目的个数
//操作前: ptree指向一个树
//操作后: 返回树中项目的个数
int TreeItemCount (const Tree * ptree);

//操作: 向树中添加一个项目
//操作前: ptree指向一个树, pi是待添加的项目的地址
//操作后: 如果可能,函数把该项目添加到树中并返回true,否则返回false
bool AddItem (const Item * pi, Tree * ptree);

//操作: 在树中查找一个项目
//操作前: ptree指向一个已经初始化的树.pi指向一个项目
//操作后: 如果该项目在树中,返回true
bool InTree (const Item * pi, const Tree * ptree);

//操作: 从树中删除一个项目
//操作前: ptree指向一个树,pi指向待删除的项目
//操作后: 如果可能,从树中删除该项目并返回true,否则返回false
bool DeleteItem (const Item * pi, Tree * ptree);

//操作: 把一个函数作用于树中的每一个项目
//操作前: ptree指向一个树, pfun指向一个没有返回值的函数,该函数接受一个Item作为参数
//操作后: pfun指向的函数作用于树中的每一个项目一次
void Traverse (const Tree * ptree, void (* pfun)(Item item));

//操作: 从树中删除所有节点
//操作前: ptree指向一个树
//操作后: 该树为空树
void DeleteAll (Tree * ptree);

#endif //INC_17_7BINARY_SEARCH_TREE_TREE_H
