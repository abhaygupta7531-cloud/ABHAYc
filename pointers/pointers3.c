#include<stdio.h>
int main(){
    int array[5] = {1,2,3,4,5};
    int i ,*ptr;
    ptr = &array[4];
    for(i=0; i<5; i++){
        printf("reverse order%d\n",*ptr);
        ptr--;
    }
    return 0;
}