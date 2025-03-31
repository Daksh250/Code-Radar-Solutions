int isPrime(int n){
    if(n<=1){
        return 0;
    }
    
    for(int i=2; i*i<=n; i++){
        if(i%n==0){
            return 0;

        }
        
    }
    return 1;
}