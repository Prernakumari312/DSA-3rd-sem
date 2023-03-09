#include<stdio.h>
#include<stdlib.h>

struct node{
     struct node*prev;
     int data;
     struct node*next;
};
struct node*add_at_beg(struct node*head,int data){
    struct node*curr=(struct node*)malloc(sizeof(struct node));
    curr->prev=NULL;
    curr->data=data;
    curr->next=NULL;
    curr->next=head;
    head->prev=curr;
    head=curr;

    return head;
}

struct node*add_to_empty(struct node*head,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
struct node*add_at_end(struct node*head,int data){
    struct node*curr2,*tp;
    curr2=(struct node*)malloc(sizeof(struct node));
    curr2->prev=NULL;
    curr2->data=data;
    curr2->next=NULL;
     
     tp=head;
     while(tp->next!=NULL){
        tp=tp->next;
       
        

     }
     tp->next=curr2;
     curr2->prev=tp;
        return head;

}
struct node*add_at_pos(struct node* head,int data,int pos){
    struct node*newp=NULL;
    newp=add_to_empty(newp,data);
    struct node*temp=head;
    struct node*temp2=NULL;

    while(pos!=1){
        temp=temp->next;
        pos--;
    }

    temp2=temp->next;
    temp->next=newp;
    temp2->prev=newp;
    newp->next=temp2;
    newp->prev=temp;

    return head;
}
void print_data(struct node*head){
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node*head=NULL;
    head=add_to_empty(head,45);
    head=add_at_beg(head,56);
    head=add_at_end(head,78);
    head=add_at_pos(head,99,2);
    print_data(head);
    return 0;

}