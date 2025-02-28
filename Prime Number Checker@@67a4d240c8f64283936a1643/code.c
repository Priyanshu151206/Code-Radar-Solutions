int isPrime(int num){
    int isPrime;
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++,
        }
    }
    if(count==2){
         isPrime=1;

    }else{
        isPrime=0;
    }
    return isPrime;
}