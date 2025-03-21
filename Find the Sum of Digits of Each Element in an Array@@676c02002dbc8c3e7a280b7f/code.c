#include<stdio.h>
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
        while(arr[i]>0){
            int digit=arr[i]%10;
            sum+=digit;
            arr[i]/=10;
        }
    temp[i]=sum;
    }
    for(int i=0;i<N;i++){
        printf("%d",temp[i]);
    
    }
    return 0;
}