void fibonacciSeries(int n){
    int a=0;
    int b=1;
    int next;
    if(n>=1){
        printf("%d ",a);
    }
    if(n>=2){
        printf("%d ",b);
    }
    for(int i=2;i<n;i++){
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
}