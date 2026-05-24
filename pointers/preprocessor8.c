#include <stdio.h>
int main(){
    printf("Current time:%s\n",__TIME__);
    printf("Current Date:%s\n",__DATE__);
    printf("File name:%s\n",__FILE__);
    printf("abhay ki jai :%s\n",__STDC__);
    printf("Current line is :%d\n\n",__LINE__);
    return 0;
}