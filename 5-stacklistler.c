#include <stdio.h>
#include <stdlib.h>
struct stack
{
int data;
struct stack *next;
};



int top = -1;




struct stack *push(struct stack *top, int val)
{
struct stack *ptr;
ptr = (struct stack*)malloc(sizeof(struct stack));
ptr -> data = val;
if(top == NULL)
{
 ptr -> next = NULL;
 top = ptr;
}
else
{
 ptr -> next = top;
 top = ptr;
}
return top;
}




struct stack *display(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL)
printf("\n STACK IS EMPTY");
else
{
    while(ptr != NULL)
 {
 printf("\n %d", ptr -> data);
 ptr = ptr -> next;
 }
}
return top;
}





struct stack *pop(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL)
printf("\n STACK UNDERFLOW");
else
{
 top = top -> next;
 printf("\n The value being deleted is: %d", ptr -> data);
 free(ptr);
}
return top;
}




int peek(struct stack *top)
{
if(top==NULL)
return -1;
else
return top ->data;
}




int main(){
	struct stack *top= NULL;
	top = push(top,0);
    top = push(top,1);
    top = push(top,2);
    top = push(top,3);
    // top = pop(top);
    // top = peek(top);
    top = display(top);
}