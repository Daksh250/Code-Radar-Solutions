int isPrime(int x){
    int count=0;
        if(x==2){
            count = 0;
            break;
        }else if(x==1||x==0){
            count=1;
            break;
        }
    for(int i=2;i<x;i++){
        count=0;
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