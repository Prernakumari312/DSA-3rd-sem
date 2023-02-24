#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

void print_data(struct node *head)
{
    struct node*ptr=NULL;
    if(head==NULL){
        printf("linked list is empty");

    }
    ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=34;
    head->next=NULL;
    
     struct node* current=NULL;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=67;
    current->next=NULL;
    head->next=current;

    struct node*current2=NULL;
    current2=(struct node*)malloc(sizeof (struct node));
    current2->data=56;
    current2->next=NULL;
    head->next->next=current2;

    print_data(head);


}