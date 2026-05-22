#include <stdio.h>
#define RAM -40

int main(){
    #if RAM > 0
    printf("RAM IS KING");
    #else
    printf("Ram is a good person");
    #endif
    return 0;
}