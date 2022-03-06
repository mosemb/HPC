#include <stdio.h>
#include <stdlib.h>


typedef struct node{

    int number;
    struct node *next;

} node;


int main(void){

    // List of size
    node * list = NULL;

    // Add a new number to the list. 
    node *n = malloc(sizeof(node));

    if(n == NULL){
        return 1;
    }

    n->number =1;
    n->next = NULL;


    // Update the list to point to the new number 
    list = n;

    // Add number 
    node *n = malloc(sizeof(node));
    if(n == NULL){

        free(list);
        return 1;
    }

    n->number = 2;
    n->next = NULL;
    list->next = n;


    // Add number 
    node * n = malloc(sizeof(node));
    if(n==NULL){

        free(list->next); // First free the attachment with next
        free(list);  // The free the list memory
        return 1;

    }

    n->number = 3;
    n->next = NULL;
    list->next->next = n;


    for(node *tmp = list; tmp!=NULL; tmp=tmp->next){
        printf("%i \n", tmp->next);

    }


    while(list!=NULL){

        node * tmp = list->next;
        free(list);
        list = tmp;
    }

    return 0;


}