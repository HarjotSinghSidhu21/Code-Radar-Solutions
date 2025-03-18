#include<string.h>
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
            smallestidx=j;
        }
    }
    char temp[100];
    strcpy(temp,arr[i]);
    strcpy(arr[i],arr[smallestidx]);
    strcpy(arr[smallestidx],temp);
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}
