#include <stdio.h>
#define check(a) (a%2)? "odd":"even" 
int main(){
    printf("Number %d is %s\n",5,check(5));
    return 0;
}