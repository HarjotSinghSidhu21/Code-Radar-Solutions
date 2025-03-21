#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int temp[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        int sum=0;
        int num=abs(arr[i])
        while(num>0){
            int digit=num%10;
            sum+=digit;
            num/=10;
        }
    temp[i]=sum;
    }
    for(int i=0;i<N;i++){
        printf("%d ",temp[i]);
    
    }
    return 0;
}