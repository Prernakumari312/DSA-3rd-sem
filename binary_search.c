#include<stdio.h>
int main(){
    int i,n,beg,end,mid,item,a[100];
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the element of the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter the item to be searched");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while((beg<=end)&&(a[mid]!=item))
    {
        if(item<a[mid]){
            end=mid-1;
        
        }
        else{
            beg=mid+1;
            mid=(beg+end)/2;
        }
    }
    if(a[mid]==item)
    printf("item found %d",mid);
    else
    printf("item not found");
    return 0;
}