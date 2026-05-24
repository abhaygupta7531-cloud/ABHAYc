#include <stdio.h>
int main(){
    int num ,i,COUNT = 0;
    int arr[5];
    int *ptr;
    ptr = arr;

    printf("Enter your number:\n");
    scanf("%d",&num);

    printf("Enter element of array:\n");
    for(i=0;i<5;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr =arr;
    for(i=0;i<5;i++){
       if(*ptr == num){
        COUNT++;
       }
       ptr++;
    }
       printf("occurrence %d",COUNT);
    return 0;
}