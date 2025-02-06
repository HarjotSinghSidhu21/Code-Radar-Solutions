#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int lsb=a &1;
    if(lsb==0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}