
#ifndef INC_2SEM_LAB5_STACK_H
#define INC_2SEM_LAB5_STACK_H


typedef struct node{
    int  value;
    struct node *next;
}node;
void push(struct node **head, int value);
int pop( struct node **head);
int peek(struct node *head);
void out_stack(struct node *head);
int size(struct node *head) ;
int not_exists(struct node *head, int val);
#endif 
