#include <stdio.h>
int main(){
    int var =10 ,*ptr;
    char c_var ='a',*c_ptr;
    float f_var = 4.54,*f_ptr;

    ptr =&var;
    c_ptr= &c_var;
    f_ptr =&f_var;

    printf("Address of var=%u\n",ptr);
    printf("Address of c_var=%u\n",c_ptr);
    printf("Address of f_var=%u\n\n",f_ptr);

    ptr++;
    c_ptr++;
    f_ptr++;

    printf("After increment address in ptr=%u\n",ptr);
    printf("After increment address in c_ptr=%u\n",c_ptr);
    printf("After increment address in f_ptr=%u\n\n",f_ptr);

    ptr = ptr+2;
    c_ptr = c_ptr+2;
    f_ptr = f_ptr+2;

    printf("After addition address in ptr=%u\n",ptr);
    printf("After addition address in c_ptr=%u\n",c_ptr);
    printf("After addition address in f_ptr=%u\n\n",f_ptr);

    printf("value of ptr=%d\n",var);
    printf("value of c_ptr=%c\n",c_var);
    printf("value of f_ptr=%.2f\n\n",f_var);
     return 0;
}