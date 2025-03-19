#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int minimum=arr[0];
    int maximum=arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(arr[i]>minimum){
            maximum=arr[i];
        }
    }
    printf("%d",minimum);
    printf("%d",maximum);
    return 0;   
}