#include <stdio.h>
int main(){
    int i,j;
    int num=1;
    printf("enter a number:\n");
scanf("%d",&j);
    for(i=1;i<=j;i++){
        num=num*i;
    }
    printf("%d",num);
    return 0;
}