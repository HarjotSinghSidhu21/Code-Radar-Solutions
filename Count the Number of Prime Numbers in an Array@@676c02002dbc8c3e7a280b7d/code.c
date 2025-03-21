#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int isPrime=1;
    for(int i=0;i<N;i++){
        for(int j=2;i<N;i++){
        if(i%j==0){
            isPrime=0;
        }
        else{
            count+=1;
        }
        }
    }
    printf("%d",count);
    return 0;
}