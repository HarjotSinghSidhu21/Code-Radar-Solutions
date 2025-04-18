int isPrime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int a,int b){
    int foundPrime=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            foundPrime=1;
        }
    }
    if(!foundPrime){
        printf("No prime numbers");
    }
}