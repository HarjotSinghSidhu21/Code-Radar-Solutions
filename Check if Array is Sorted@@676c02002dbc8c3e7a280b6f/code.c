#include<stdio.h>
int Ascending(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(Ascending(arr,N)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}
int Ascending(int arr[],int N){
    for(int i=0;i<N-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}