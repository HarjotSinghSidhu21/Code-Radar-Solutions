int isPrime(int num){
    int prime=1;
    if(num<2){
        return 0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
    if(prime){
       return 1;
    }
    else{
       return 0;
    }
}