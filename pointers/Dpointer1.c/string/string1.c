#include<stdio.h>
#include<string.h>

int main(){
    char ch1[20]="Hello ";
    char ch2[]="Abhay";

    
    strcat(ch1,ch2);
    puts(ch1);

    return 0;
}