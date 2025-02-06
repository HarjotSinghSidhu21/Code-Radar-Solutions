#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    printf("%d %d",&a,&b);
    printf("%d",a>>b);
    return 0;
}