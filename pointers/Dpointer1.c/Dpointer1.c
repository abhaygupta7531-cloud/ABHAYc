#include<stdio.h>
int main(){
    int arr[5];
    int i,*p,**ptr;
    p=arr;

    printf("Enter the element of array :\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    ptr=&p;

    printf("Element of array is :\n");
    for(i=0;i<5;i++){
        printf("%d",**ptr);
        p++;
    }

    return 0;
}