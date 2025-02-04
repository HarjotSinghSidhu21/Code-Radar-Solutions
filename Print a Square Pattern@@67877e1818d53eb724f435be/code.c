#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if (i==j){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}