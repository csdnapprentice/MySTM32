/*
 * Stack.h
 *
 *  Created on: Jul 25, 2024
 *      Author: 34914
 */
#include<stdlib.h>

#ifndef INC_STACK_H_
#define INC_STACK_H_
struct Stack{
    void ** item;
    int top;
    int maxSize;
};
void * myStackPop(struct Stack *s);
void myStackPush(struct Stack *s, void * i);
void myStackClear(struct Stack *s);
struct Stack* myStackInit(int maxSize);
int myStackChangeSize(struct Stack *s, int maxSize);
int myStackLength(struct Stack *s);
#endif /* INC_STACK_H_ */
