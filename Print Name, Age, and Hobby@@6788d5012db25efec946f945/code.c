#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    int b;
    char c[100];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s");
    printf("Age: %d");
    printf("Hobby: %s");
    return 0;
}