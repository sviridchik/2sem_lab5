#include <time.h>
#include "stack.h"
#include "myfile.h"
#include <stdio.h>



int task1() {
    int i;
    /*int f1=1;
    int f2 = 1;*/
/*//    srand(time(NULL));*/
    int border1 = get_rand_range_int(2,10);
    int border2 = get_rand_range_int(2,10);
    int previous1 = 0;
    int previous2 = 0;
   /* printf("%d %d",border1,border2);*/
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *res = NULL;
    for (i = 0; i<border1; i++){
        previous1 = get_rand_range_int(1+previous1,3+previous1);
        push(&first,get_rand_range_int(1+previous1,3+previous1));
    }
    for (i = 0; i<border2; i++){
        previous2 = get_rand_range_int(1+previous2,3+previous2);
        push(&second,get_rand_range_int(1+previous2,3+previous2));
    }
    /*push(&first,12);

    push(&first,12);

    push(&second,12);*/
    printf("\n");
    printf("first: ");
    out_stack(first);
    printf("\n");
    printf("second: ");
    out_stack(second);
    printf("\n");

    /*printf("%d",not_exists(first,13));*/
/*//    while (first || second){
//        if(first){
//            if(not_exists(res,peek(first))){
//                push(&res,pop(&first));
//            } else{pop(&first);}
//        }
//        if(second){
//            if(not_exists(res,peek(second))){
//                push(&res,pop(&second));
//            } else{pop(&second);}
//        }
//    }*/
    while (first || second){
        if(first && !second){
            if(not_exists(res,peek(first))){
                push(&res,pop(&first));
            } else{pop(&first);}
        }
        if(second && !first){
            if(not_exists(res,peek(second))){
                push(&res,pop(&second));
            } else{pop(&second);}
        }
        if (first && second){
            if(not_exists(res,peek(first)) && not_exists(res,peek(second))){
            if (peek(first)>peek(second)){
                push(&res,pop(&first));
            } else{
                push(&res,pop(&second));
            }
            }else{
                if(!not_exists(res,peek(first))){
                    pop(&first);
                }
                if(!not_exists(res,peek(second))){
                    pop(&second);
                }
            }
        }
    }


    printf("\n");
    printf("res: ");
    out_stack(res);


    return 0;
}