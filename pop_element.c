#include<stdio.h>
#define MAX 4
int stack_arr[MAX];
int top=-1;
void push(int data){
    if(top==MAX-1){
        printf("stack overflow");
        return ;
    }
    top=top+1;
    stack_arr[top]=data;
}
int pop(){
    
    int value;
    value=stack_arr[top];
    top=top-1;
    return value;

}
int main(){
    int data;
    push(1);
    push(3);
    push(5);
    push(7);
    data=pop();
    printf("%d",data);

}