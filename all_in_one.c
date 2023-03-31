#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;


int isfull(){
    if(top==MAX-1){
        return 1;
        
    }
    else
     return 0;

}

int isempty(){
    if(top==-1){
        return 1;

    }
    else
    return 0;

}
void push(int data){
    if(top==MAX-1)
    {
      printf("stack overflow");
      return ;

    }
    top=top+1;
    stack_arr[top]=data;
}

int pop(){
    int value;
    if(isempty())
    {
        printf("stack underflow");
        exit(1);
    }
    value =stack_arr[top];
    top=top-1;
    return value;
}

int peek()
{
    if(isempty())
    {
        printf("stack underflow");
        exit(1);
    }
    return stack_arr[top];
}

void print()
{
    int i;
    if(top==-1){
        printf(" stack underflow");
        return;
    }
    for(i=top;i>=0;i--){
        printf("%d",stack_arr[i]);
        printf("\n");
    }
}

int main(){
    int choice,data;
    while(1)
    {
        printf("\n");
        printf("1,Push\n");
        printf("2,pop\n");
        printf("3,print the top element \n");
        printf("4, print all the element of the stack \n");
        printf("5,quit\n");
        printf("please enter your choice");
        scanf("%d,&choice");

        switch(choice){
            case 1:
                  printf("enter the element to be pushed");
                  scanf("%d",&data);
                  push(data);
                  break;

            case 2:
                  data=pop();
                  printf("deleted elment is %d\n",data);
                  break;

            case 3:
                  printf("the top most element of the stack %d \n",peek());
                  break;

            case 4:
                print();
                break;

            case 5:
                exit(1);
            default:
               printf("wrong choice");



        }
    }
    return 0;
}