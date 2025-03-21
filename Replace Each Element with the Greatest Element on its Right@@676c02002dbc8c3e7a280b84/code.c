#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max_right=arr[N-1];
    for(int i=N-2;i>=0;i--){
        int temp=arr[i];
        arr[i]=max_right;
        if(temp>max_right){
            max_right=temp;
        }
    }
    arr[N-1]=-1;
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}