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
        if(arr[i]>largest){
            if(arr[i]%2==0){
                largest=arr[i];
            }
        }
    }
    printf("%d",largest);
    
}