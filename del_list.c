#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
 struct node*del_list(struct node*head){
    if(head==NULL){
        printf("linked list is empty");
        return 0;

    }
    struct node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        free(head);
        head=temp;
    }
    return head;

 }

 int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->next=NULL;

    struct node*curr=(struct node*)malloc(sizeof(struct node));
    curr->data=8;
    curr->next=NULL;
    head->next=curr;

    struct node*curr1=(struct node*)malloc(sizeof(struct node));
    curr1->data=9;
    curr1->next=NULL;
    head->next->next=curr1;

    head=del_list(head);
    if(head==NULL){
        printf("deleted");
    }

    return 0;


 }