//
// Created by cdx on 17-6-26.
//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "HashTable.h"

#define TABLE_SIZE (1024*1024)

struct kv {
    struct kv* next;
    char* key;
    void* value;
    void(*free_value)(void*);
};

struct HashTable {
    struct kv ** table;
};

static void init_kv(struct kv* kv) {
    kv->next = NULL;
    kv->key = NULL;
    kv->value = NULL;
    kv->free_value == NULL;
}

static void free_kv (struct kv* kv) {
    if (kv) {
        if (kv->free_value) {
            kv->free_value(kv->value);
        }
        free(kv->key);
        kv->key = NULL;
        free(kv);
    }
}

static unsigned int hash_33(char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash << 5) + hash + *key++;
    }
    return hash;
}

HashTable* hash_table_new() {
    HashTable* ht = malloc(sizeof(HashTable));
    if (ht == NULL) {
        hash_table_delete(ht);
        return NULL;
    }
    ht->table = malloc(sizeof(struct kv*) * TABLE_SIZE);
    if (ht->table == NULL) {
        hash_table_delete(ht);
        return NULL;
    }
    memset (ht->table, 0, sizeof(struct kv *) * TABLE_SIZE);
    return ht;
}

void hash_table_delete(HashTable * ht) {
    if (ht) {
        if (ht->table) {
            int i = 0;
            for (i = 0; i <  TABLE_SIZE; i++) {
                struct kv * p = ht->table[i];
                struct kv * q = NULL;
                while (p) {
                    q = p->next;
                    free_kv(p);
                    p = q;
                }
            }
            free(ht->table);
            ht->table = NULL;
        }
        free(ht);
    }
}

int hash_table_put2(HashTable* ht, char* key, void* value, void(*free_value)(void*)) {
    int i = hash_33(key) % TABLE_SIZE;
    struct kv* p = ht->table[i];
    struct kv* prev = p;

    while (p) {   //key值存在,则更新
        if (strcmp(p->key, key) == 0) {
            if (p->free_value) {
                p->free_value(p->value);
            }
            p->value = value;
            p->free_value = free_value;
            break;
        }
        prev = p;
        p = p->next;
    }

    if (p == NULL) {   // 没有存储,则添加他
        char* kstr = malloc(strlen(key) + 1);
        if (kstr == NULL)
            return -1;
        struct kv * kv = malloc(sizeof(kv));
        if (kv == NULL) {
            free(kstr);
            kstr = NULL;
            return -1;
        }
        init_kv(kv);
        kv->next = NULL;
        strcpy(kstr, key);
        kv->key = kstr;
        kv->value = value;
        kv->free_value = free_value;

        if (prev == NULL) {
            ht->table[i] = kv;
        } else {
            prev->next = kv;
        }
    }
    return 0;
}

void * hash_table_get(HashTable * ht, char * key) {

    int i = hash_33(key) % TABLE_SIZE;
    struct kv * p = ht->table[i];
    while (p) {
        if (strcmp(key, p->key) == 0)
            return p->value;
        p = p->next;
    }
}

void hash_table_tm(HashTable * ht, char * key) {
    int i = hash_33(key) % TABLE_SIZE;

    struct kv* p = ht->table[i];
    struct kv* prev = p;
    while (p) {
        if (strcmp(key, p->key)) {
            free_kv(p);
            if (p == prev)
                ht->table[i] = NULL;
            else
                prev->next = p->next;
        }
        prev = p;
        p = p->next;
    }
}







