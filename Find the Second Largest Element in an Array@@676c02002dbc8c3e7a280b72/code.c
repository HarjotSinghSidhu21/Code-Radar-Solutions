#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int second=INT_MIN;
    for(int i=1;i<N;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest){
            second=arr[i];
        }
    }
    if(second == INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",second);
    }
    return 0;
}