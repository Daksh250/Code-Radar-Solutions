int isPrime(int x){
    if(x%x==0||x%1==0){
        return 1;
    }
    else{
        return 0;
    }
}