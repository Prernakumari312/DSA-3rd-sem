#include<stdio.h>

#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
void count_of_node(struct node *head){
    int count =0;
    if(head==NULL){
        printf("linked list is empty");

    }

    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;

    }
    printf("%d",count);
}

int main(){
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;

    struct node*current=NULL;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=5;
    current->next=NULL;
    head->next=current;

    struct node* current2=NULL;
    current2=(struct node*)malloc(sizeof(struct node));
    current2->data=78;
    current2->next=NULL;
    //current->next=current2;
     head->next->next=current2;
    count_of_node(head);
    return 0;
}