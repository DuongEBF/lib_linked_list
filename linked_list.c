#include "linked_list.h"
#include <stdlib.h>
#include <stdbool.h>
Node_t* creatNode(int data){
    Node_t* temp = (Node_t*)malloc(1*sizeof(Node_t));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
//B->A(muon thay doi con tro cap 1 tro toi 1 dia chi khac thi can su dung con tro cap 2)
void pushHead(Node_t** head, int val){
    Node_t* new_node = creatNode(val);
    if(*head == NULL){
        *head = new_node;
    }
    else{
        new_node->next = *head;
        *head = new_node;
    }
}

//pos dem tu 0
//muon them vao vi tri pos thi phai xet thang pos - 1
bool pushAt(Node_t* head,int data,int pos){
    int i = 0;
    Node_t* pt = head;
    while(pt != NULL && i != pos-1){
        pt = pt->next;
        i++;
    }
    if(i != pos-1){
        return false;
    }
    else{
        Node_t* temp = creatNode(data);
        temp->next = pt->next;
        pt->next = temp;
    }
    return true;
}


void pushTail(Node_t *head, int data){
    Node_t* pt = head;
    Node_t* temp = creatNode(data);
    while(pt->next != NULL){
        pt = pt->next;
    }
    pt->next = temp;
}


void removeHead(Node_t** head){
    Node_t* temp = (*head)->next;
    free(*head);
    *head = temp;
}

void removeTail(Node_t* head){
    Node_t* pt = head;
    while(pt->next != NULL){
        pt = pt->next;
    }
    free(pt->next);
    pt->next = NULL;
}

bool removeNodeAt(Node_t* head, int pos){
    int i = 0;
    Node_t* pt = head;
    while(pt != NULL && i != pos - 1){
        pt = pt->next;
        i++;
    }
    if(i != pos - 1){
        return false;
    }
    else{
        Node_t* tempDel = pt->next; //tempdel la node can xoa
        pt->next = tempDel->next;
        free(tempDel);
    }
    return true;
}