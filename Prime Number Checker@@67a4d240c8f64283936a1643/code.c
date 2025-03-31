int isPrime(int x){
    int count=0;
    for(int i=2;i<x;i++){
        if(x==2){
            count = 0;
            break;
        }
        if(x%i==0){
            count++;
            break;
        }
    }
    if(count){
        return 0;
    }else{
        return 1;
    }
}