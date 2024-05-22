//青蛙跳台阶
#include <stdio.h>
int fn(int n){
    if(n<=2){
        return n;
    }
    else {
        return fn(n-1)+fn(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int ret = fn(n);
    printf("%d",ret);
    return 0;
}