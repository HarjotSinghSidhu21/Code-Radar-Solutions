#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=i;j<=N;j++){
            printf(" ");
        }
        for(j=1;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}