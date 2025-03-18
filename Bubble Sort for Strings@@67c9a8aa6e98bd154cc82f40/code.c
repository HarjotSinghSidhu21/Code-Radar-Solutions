void bubbleSort(char arr[n][100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(char arr[n][100],int n){
    for(int i=1;i<=n;i++){
        printf("%d",arr[i]);
    }
}
