int isPrime(int num){
    int prime=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
    if(prime){
        printf("1");
    }
    else{
        printf("0");
    }
}