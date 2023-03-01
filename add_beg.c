#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
void print_data(struct node*head){
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
        
    }
}
struct node* add_at_beg(struct node*head){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=6;
    temp->next=NULL;
    temp->next =head;
    head=temp;
    return head;
}
int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->next=NULL;

    struct node*tail=(struct node*)malloc(sizeof(struct node));
    tail->data=7;
    tail->next=NULL;
     
     head->next=tail;

     head=add_at_beg(head);
     print_data(head);

    return 0;

}