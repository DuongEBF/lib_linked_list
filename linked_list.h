#ifndef _LINKED_LIST
#define _LINKED_LIST
#include <stdbool.h>
typedef struct 
{
    int data;
    struct Node_t* next;
} Node_t;

Node_t* creatNode(int data);
void pushHead(Node_t** head, int val);
bool pushAt(Node_t* head,int data,int pos);
void pushTail(Node_t *head, int data);
void removeHead(Node_t** head);
void removeTail(Node_t* head);
bool removeNodeAt(Node_t* head, int pos);
#endif