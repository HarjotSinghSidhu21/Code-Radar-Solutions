#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int brr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<N;i++){
        brr[i]=a[(i+k)%N];
    }
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}