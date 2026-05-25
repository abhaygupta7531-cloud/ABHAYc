#include<stdio.h>
#include<string.h>
int main(){
    char ch1[]="Abhay gupta";
    char ch2[20];

    strcpy(ch2,ch1);
    puts(ch1);

    strrev(ch1);
    puts(ch1);

    return 0;


}