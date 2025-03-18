#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read size of array
    int arr[N];  // Declare the array
    int brr[N];  // Declare the array to store the rotated result

    // Input the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);  // Read the number of positions to rotate

    // Calculate the rotated array
    for (int i = 0; i < N; i++) {
        brr[i] = arr[(i + k) % N];
    }

    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d\n", brr[i]);  // Print the rotated array, not the original
    }

    return 0;
}
