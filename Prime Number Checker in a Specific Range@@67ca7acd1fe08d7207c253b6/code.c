int printPrimesInRange(int a,int b){
    int isPrime=0;
    for(int i=a;i<=b;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
            }
            else{
                printf("%d ",i);
            }
        }
    }
}