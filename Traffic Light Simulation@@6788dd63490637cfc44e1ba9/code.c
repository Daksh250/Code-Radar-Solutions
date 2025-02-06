#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    if(s=='R'){
        printf("Stop");
    }
    else if(s=='G'){
        printf("Go");
    }
    else{
        printf("Slow Down");
    }
}