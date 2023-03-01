#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
struct node*del_at_beg(struct node*head){
    if(head==NULL){
        printf("linked list do not eixst");
    }
    struct node*temp=head;
    head=head->next;
    free(temp);
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

    head=del_at_beg(head);
    print_data(head);
    return 0;


}