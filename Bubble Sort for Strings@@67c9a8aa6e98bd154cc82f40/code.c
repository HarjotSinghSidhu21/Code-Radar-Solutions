void bubbleSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (strcmp(arr[j], arr[j + 1]) > 0) {  // Compare strings lexicographically
            char temp[100];  // Temporary array to hold a string
            strcpy(temp, arr[j]);  // Copy arr[j] to temp
            strcpy(arr[j], arr[j + 1]);  // Copy arr[j+1] to arr[j]
            strcpy(arr[j + 1], temp);  // Copy temp to arr[j+1]
            }
        }
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}
