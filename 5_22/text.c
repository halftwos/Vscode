#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
 int i;
 for(i=0;i<sz-1;i++){
    int j;
    for(j=0;j<sz-1-i;j++){
        if(arr[j]>arr[j+1]){
int tmp= arr[j];
arr[j]=arr[j+1];
arr[j+1]=tmp;
    }
    }
 }
}
int main(){
    int arr[]={9,6,7,6,5,9,3,2,4,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    int i=0;
    for(i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}