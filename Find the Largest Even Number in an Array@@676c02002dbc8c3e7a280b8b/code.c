#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
    }
    if(largest==INT_MIN){
        printf("-1");
    }
    else{
    printf("%d",largest);
    }
}