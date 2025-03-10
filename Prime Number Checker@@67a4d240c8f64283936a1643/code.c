void isPrime(int num);
void isPrime(int num){
    int prime=1;
    for(int i=2;i<n;i++){
        if(num%i==0){
            prime=0;
        }
    }
    if(prime==1){
        printf("1");
    }
    else{
        printf("0");
    }

}