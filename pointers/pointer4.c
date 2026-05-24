#include<stdio.h>
int main(){
    int sum=0;
    float avg;
    int array[5]={1,2,3,4,5};
    int i ,*ptr;
    ptr=array;

    for(i=0;i<5;i++){
        sum = sum + *ptr;
        ptr++;
    }

    avg=sum/5;
    printf("average of array is\n %.2f ",avg);
    
    return 0;
}