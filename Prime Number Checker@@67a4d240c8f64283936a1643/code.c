int isPrime(int x){
    int count;
    for(int i=2;i<x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count){
        return 0;
    }else{
        return 1;
    }
}