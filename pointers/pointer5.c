#include<stdio.h>
int main(){
    int num;
    int arr[5];
    int i,*ptr;
    ptr = arr;
    printf("Enter element found\n");
    scanf("%d",&num);

    printf("Enter array element\n");
    for(i=0;i<5;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&arr[0];
    for(i=0;i<5;i++){
        if(num == *ptr){
            printf("Element found  at index %d",i);
            break;
        }
        ptr++;
    }

    return 0;
}