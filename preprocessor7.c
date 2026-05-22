#include<stdio.h>
#define SQUARE(x) ((x)*(x))
#define CUBE(x) ((x)*SQUARE(x))

int main(){
    int num;

    printf("Enter number:\n");
    scanf("%d",&num);

    printf("cube is :%d",CUBE(num));
    return 0;
}