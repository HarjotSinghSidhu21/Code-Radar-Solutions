#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int A;
    scanf("%d",&A);
    if (A>=0 && A<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}