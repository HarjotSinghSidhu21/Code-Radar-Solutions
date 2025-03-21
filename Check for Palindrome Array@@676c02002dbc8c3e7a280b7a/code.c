#include<stdio.h>
int isPalindrome(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(isPalindrome(arr,N)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
int isPalindrome(int arr[],int N){
    int start=0;
    int end=N-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}