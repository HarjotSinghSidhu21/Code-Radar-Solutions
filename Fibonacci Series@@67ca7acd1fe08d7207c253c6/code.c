void fibonacciSeries(int n){
    int a=0;
    int b=1;
    printf("%d ",a);
    printf("%d ",b);
    for(int i=2;i<n;i++){
        int c=fibonacciSeries(n-1)+fibonacciSeries(n-2);
        printf("%d",c);
    }
}