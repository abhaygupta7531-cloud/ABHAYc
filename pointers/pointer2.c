#include <stdio.h>
int main(){
    int a,b,*ptr1,*ptr2;
    a = 10;
    b = 20;

    ptr1 = &a;
    ptr2 = &b;

     int temp;
     temp = *ptr1;
     *ptr1 = *ptr2;
     *ptr2 = temp;
     
     printf("After swaping two number:%d\n %d\n",a,b);



    return 0;
}