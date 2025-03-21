#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<N;i++){
        int isPrime=1;
        if(arr[i]<=1){
            isPrime=0;
        }
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
             isPrime=0;
            break;
        }
        
        }
        if(isPrime){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}