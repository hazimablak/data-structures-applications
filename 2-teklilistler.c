#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	int pos;
	struct node *next;
};



//Başlangıçta listeyi oluşturma
struct node *create_ll(struct node *start)
{
struct node *new_node, *ptr;
int num;
printf("\n Enter -1 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num!=-1)
{
 new_node = (struct node*)malloc(sizeof(struct node));
 new_node -> data=num;
 if(start==NULL)
 {
 new_node -> next = NULL;
 start = new_node;
 }
 else
 {
 ptr=start;
 while(ptr->next!=NULL)
 ptr=ptr->next;
 ptr->next = new_node;
 new_node->next=NULL;
 }
 printf("\n Enter the data : ");
 scanf("%d", &num);
}
return start;
}



//Listeyi ekrana yazdırma
struct node *display(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr != NULL)
{
 printf("\t %d", ptr -> data);
 ptr = ptr -> next;
}
return start;
}



//Listenin başına eleman ekleme
struct node *insert_beg(struct node *start)
{
struct node *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
new_node -> next = start;
start = new_node;
return start;
}





//Listenin sonuna eleman ekleme
struct node *insert_end(struct node *start)
{
struct node *ptr, *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
new_node -> next = NULL;
ptr = start;
while(ptr -> next != NULL)
ptr = ptr -> next;
ptr -> next = new_node;
return start;
}




//Listede öncesine eleman ekleme
struct node *insert_before(struct node *start)
{
struct node *new_node, *ptr, *preptr;
int num, val;
printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the value before which the data has to be inserted : ");
scanf("%d", &val);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
ptr = start;
while(ptr -> data != val)
{
    preptr = ptr;
 ptr = ptr -> next;
}
preptr -> next = new_node;
new_node -> next = ptr;
return start;
}



//Listede sonrasına eleman ekleme
struct node *insert_after(struct node *start)
{
struct node *new_node, *ptr, *preptr;
int num, val;
printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the value after which the data has to be inserted : ");
scanf("%d", &val);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
ptr = start;
preptr = ptr;
while(preptr -> data != val)
{
 preptr = ptr;
 ptr = ptr -> next;
}
preptr -> next=new_node;
new_node -> next = ptr;
return start;
}




//Listenin başındaki elemanı silme
struct node *delete_beg(struct node *start)
{
struct node *ptr;
ptr = start;
start = start -> next;
free(ptr);
return start;
}




//Listenin sonundaki elemanını silme
struct node *delete_end(struct node *start)
{
struct node *ptr, *preptr;
ptr = start;
while(ptr -> next != NULL)
{
 preptr = ptr;
 ptr = ptr -> next;
}
preptr -> next = NULL;
free(ptr);
return start;
}




//Listede istenilen elemanı silme
struct node *delete_node(struct node *start)
{
struct node *ptr, *preptr;
int val;
printf("\n Enter the value of the node which has to be deleted : ");
scanf("%d", &val);
ptr = start;
if(ptr -> data == val)
{
 start = delete_beg(start);
 return start;
}
else
{
    while(ptr -> data != val)
 {
 preptr = ptr;
 ptr = ptr -> next;
 }
 preptr -> next = ptr -> next;
 free(ptr);
 return start;
}
}





//Listede sonraki elemanı silme
struct node *delete_after(struct node *start)
{
struct node *ptr, *preptr;
int val;
printf("\n Enter the value after which the node has to deleted : ");
scanf("%d", &val);
ptr = start;
preptr = ptr;
while(preptr -> data != val)
{
 preptr = ptr;
 ptr = ptr -> next;
}
preptr -> next=ptr -> next;
free(ptr);
return start;
}




// Listeyi tamamen silme
struct node *delete_list(struct node *start)
{
struct node *ptr;
if(start!=NULL){
 ptr=start;
 while(ptr != NULL)
 {
 printf("\n %d is to be deleted next", ptr -> data);
 start = delete_beg(ptr);
ptr = start;
 }
}
return start;
}




//Listeyi sıralama
struct node *sort_list(struct node *start)
{
struct node *ptr1, *ptr2;
int temp;
ptr1 = start;
while(ptr1 -> next != NULL)
{
 ptr2 = ptr1 -> next;
 while(ptr2 != NULL)
 {
 if(ptr1 -> data > ptr2 -> data)
 {
 temp = ptr1 -> data;
 ptr1 -> data = ptr2 -> data;
 ptr2 -> data = temp;
 }
 ptr2 = ptr2 -> next;
 }
 ptr1 = ptr1 -> next;
 }
return start; 
}




int main(){
	struct node *start= NULL;
	start = create_ll(start);
	printf("\n Birinci eleman = %d",start->data);
    printf("\n");
    // start=insert_beg(start);
    // start=insert_end(start);
    // start=insert_after(start);
    // start=insert_before(start);
    // start=delete_beg(start);
    // start=delete_end(start);
	// start=delete_after(start);
	// start==delete_node(start);
    // start=delete_list(start);
    // start=sort_list(start);
    start=display(start);
    printf("\n");
	return 0;
}