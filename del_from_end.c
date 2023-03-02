#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
struct node*del_at_end(struct node*head){
    if(head==NULL){
        printf("list is empty");

    }
    else if(head->next==NULL){
        free(head);
        head=NULL;

    }
    else{
        struct node*temp=head;
        struct node*temp2=head;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;

        }
        temp2->next=NULL;
        free(temp);
        temp=NULL;

        
    }
       return head;
    
}

void print_data(struct node*head){
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data=6;
    head->next=NULL;

    struct node*tail=(struct node*)malloc(sizeof(struct node));
    tail->data=7;
    tail->next=NULL;
    head->next=tail;

    head=del_at_end(head);
    print_data(head);
    return 0;


}