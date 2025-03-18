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
        brr[i]=arr[(i+k)%N];
    }
    for(int i=0;i<N;i++){
        printf("%d\n",brr[i]);
    }
    return 0;
}