int isPrime(int a){
    if(a<=1){
        return 0;
    }
    if(a<=3){
        return 1;
    }
    if(a%2==0 || a%3==0){
        return 0;
    }
    for(int i=5; i*i<=a; i+=6){
        return 0;
    }
    return 1;
}