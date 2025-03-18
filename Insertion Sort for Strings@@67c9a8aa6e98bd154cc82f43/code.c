#include<string.h>
void insertionSort(char[][100],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && strcmp(arr[prev],curr)>0){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}