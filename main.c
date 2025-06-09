#include <stdio.h>
#include <stdint.h>
#include "linked_list.h"
#include <stdlib.h>
#include <stdbool.h>
void printf_all_node(Node_t* head){
    Node_t* pt = head;
    while(pt != NULL){
        printf("Data: %d\n", pt->data);
        pt = pt->next;
    }
}
int main(void){
    Node_t* head = NULL;
    head = creatNode(4); //1
    pushHead(&head, 5); //0
    pushAt(head, 3,2); //3
    pushAt(head, 2,2); //2
    pushTail(head, 6); //4
    pushTail(head, 9); //5
    removeNodeAt(head,3);
    printf_all_node(head);
    //5 4 2 3

/*    Node_t* second = (Node_t* )malloc(1*sizeof(Node_t));
    Node_t* third = (Node_t* )malloc(1*sizeof(Node_t));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;


    printf_all_node(head);
    free(third);
    free(second);
    free(head);*/
    return 0;
}