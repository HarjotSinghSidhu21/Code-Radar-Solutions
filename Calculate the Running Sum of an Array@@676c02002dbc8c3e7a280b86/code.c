#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int temp[N];
    for(int i=0;i<N;i++){
        sum+=arr[i];
        arr[i]=sum;
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}