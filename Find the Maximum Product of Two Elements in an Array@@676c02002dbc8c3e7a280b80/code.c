#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int product=arr[N-2]*arr[N-1];
    int product2=arr[0]*arr[1];
    if(product>product2){
        printf("%d",product);
    }
    else{
        printf("%d",product2);
    }
    return 0;
}