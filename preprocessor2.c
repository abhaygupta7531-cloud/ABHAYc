#include<stdio.h>
#define RAJU 100
int main(){
    #if defined RAJU 
    printf("RAJU is defined.So,this line will be added in this C file\n");
    #else
    printf("RAJU id not defined\n");
    #endif
    return 0;
}