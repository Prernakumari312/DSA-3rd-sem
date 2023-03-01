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
        printf("%d ",ptr->data);
        ptr=ptr->next;
        
    }

}

struct node*add_at_end(struct node*ptr,int data){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    ptr->next=temp;
    
    return temp;

}

int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->next=NULL;

    struct node*ptr=head;
    ptr=add_at_end(ptr,98);
    ptr=add_at_end(ptr,67);
    ptr=add_at_end(ptr,56);

    print_data(head);
}