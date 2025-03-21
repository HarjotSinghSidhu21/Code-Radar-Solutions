#include<stdio.h>
int smallest(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int result=smallest(arr,N);
    printf("%d",result);

}
int smallest(int arr[],int N){
    for(int i=0;i<N;i++){
        while(arr[i]>0 && arr<=N && arr[arr[i]-1]!=arr[i]){
            int temp=arr[i];
            arr[i]=arr[arr[i]-1];
            arr[temp-1]=temp;
        }
    }
    for(int i=0;i<N;i++){
        if(arr[i]!=i+1){
            return i+1;
           }
    }
    return N+1;
}