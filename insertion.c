#include<stdio.h>
#include<stdlib.h>

struct node{
     struct node*prev;
     int data;
     struct node*next;
};

struct node*add_to_empty(struct node*head)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=8;
    temp->next=NULL;
    head=temp;
    return head;
}
int main(){
    struct node*head=NULL;
    head=add_to_empty(head);
    printf("%d",head->data);
    return 0;

}