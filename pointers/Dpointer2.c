#include<stdio.h>

int cube(int *ptr){
    printf("cube=%d",(*ptr)*(*ptr)*(*ptr));
}
int main(){
    int a;
    int *ptr;
    printf("Enter a number\n");
    scanf("%d",&a);
    cube(&a);
    return 0;
}