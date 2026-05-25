#include<stdio.h>
int multiply(int a,int b){
    return a*b;
}

int main (){
    int x,y,result;
    int (*ptr)(int,int);
    ptr = multiply;

    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);

    result = ptr(x,y);

    printf("Multiplication =%d",result);
    return 0;

}