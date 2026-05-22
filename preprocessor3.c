#include<stdio.h>
#define RAHUL 100
int main(){
    #ifndef RAJ 
    {
        printf("RAj is not defined.So,now we are going to define here\n");
        #define RAJ 300
    }
    #else
    printf("RAJ is already defined in the program");
    #endif

return 0;
}