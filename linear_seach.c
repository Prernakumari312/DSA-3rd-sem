#include<stdio.h>
int main(){
    int a[5]={10,20,15,18,24};
    int i,item,loc;
    printf("enter the which we want to searh");
    scanf("%d",&item);
    for(i=0;i<5;i++){
        if(a[i]==item){
            loc=i;
            break;
        }
    }
    if(i==5)
    printf("item not found");
    else
    printf("item is found %d",loc);
    return 0;
}