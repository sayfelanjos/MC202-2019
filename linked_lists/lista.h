#ifndef LISTA_H
#define LISTA_H

typedef struct Node {
    int index;
    int freeMemory;
    struct Node *next;
    struct Node *prev;
} Node;

typedef Node *n_ptr;  //node pointer

n_ptr new_list();
n_ptr push(n_ptr list, int index, int freeMemory);
n_ptr memBlockAlloc(n_ptr list, int size);
n_ptr memBlockDealloc(n_ptr list, int adress, int remotionSize);
void freeMemBlock(n_ptr node);

#endif
