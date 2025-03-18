#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int brr[];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        brr[i]=a[(i+k)%n];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}