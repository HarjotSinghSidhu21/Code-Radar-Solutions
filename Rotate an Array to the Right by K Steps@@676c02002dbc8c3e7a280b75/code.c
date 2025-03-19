#include<stdio.h>
void rotateright(int arr[],int N,int K);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int K;
    scanf("%d",&K);


    return 0;
}
void rotateright(int arr[],int N,int K){
    K=K%N;
    int temp[N];
    for(int i=0;i<K;i++){
        temp[i]=arr[N-K+i];
    }
    for(int i=0;i<N-K;i++){
        temp[K+i]=arr[i];
    }
    for(int i=0;i<N;i++){
        arr[i]=temp[i];
    }
    }
void Printarray(int arr[],int N){
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }
}

