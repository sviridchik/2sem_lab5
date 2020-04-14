
#include <stdlib.h>
#include "stack.h"
#include <stdio.h>


void push(struct node **head, int value){
    struct node *tmp = malloc(sizeof(struct node));
    if(tmp == NULL){
        exit(-1);
    }
    tmp->next = *head;
    tmp->value = value;
    *head = tmp;
}

int pop( struct node **head){
    struct node *away;
    int value;
    if(*head == NULL){
        exit(-2);
    }

    away = *head;
    *head = (*head)->next;
    value = away->value;
    free(away);
    return value;


}


int peek(struct node *head) {
    if (head == NULL) {
        exit(-3);
    }
    return head->value;
}

void out_stack(struct node *head){
    while (head){
        printf("%d  ", head->value);
        head = head->next;
    }
}

int size(struct node *head){
    int s = 0;
    while (head){
        s++;
        head = head->next;
    }
    return s;
}

int not_exists(struct node *head, int val){
    while (head){
        if(head->value == val){
            return 0;
        }
        head = head->next;
    }
    return 1;
}


