#include <stdio.h>
#define MIN2(a,b) ((a<b)? a:b)
#define MIN3(a,b,c) MIN2(MIN2(a,b),c)

int main(){
    int x,y,z;

    printf("three number is\n");
    scanf("%d %d %d",&x,&y,&z);

    printf("Miniumun number=%d\n",MIN3(x,y,z));
    return 0;
}