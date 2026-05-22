#include<stdio.h>
#define PI 3.14
#define size 5

int main(){
    int i;
    int array[size]={2,4,5,6,2};

    for(i=0; i<size; i++){
        printf("size of array is :%d\n",array[i]);
    }printf("Value of PI is:%f\n",PI);
    return 0;
}