#include<stdio.h>
void rotate_once_right(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int K;
    scanf("%d",&K);
    rotate_right(arr,k,N);
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }

    return 0;
}

void rotate_once_right(int arr[],int N){
    int temp=arr[N-1];
    for(int i=(N-2);i>=0;i--){
        arr[i+1]=a[i];
    }
    arr[0]=temp;
}
void rotate_right(int arr[],int K,int N){
    for(int i=0;i<N;i++){
        rotate_once_right(arr,N);
    }
}

