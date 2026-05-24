#include <stdio.h>
int main(){
    int a[3][3],i,j;
    int *ptr;
    ptr=&a[0][0];
    printf("Enter matrix element:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",ptr);
            ptr++;
        }
    }
    ptr=&a[0][0];
    printf("Matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",*ptr);
            ptr++;
        }
        printf("\n");
    }
    return 0;
}