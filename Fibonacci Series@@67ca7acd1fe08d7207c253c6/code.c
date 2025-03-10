void fibonacciSeries(int n){
    int a=0;
    int b=1;
    int next;
    if(n==1){
        printf("0");
    }
    printf("%d ",a);
    printf("%d ",b);
    for(int i=2;i<n;i++){
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
}