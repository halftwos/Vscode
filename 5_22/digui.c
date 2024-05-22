# include <stdio.h>
//递归求n的阶乘
int fn(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n*fn(n-1);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int ret = fn(n);
    printf("%d",ret);
    return 0;
}