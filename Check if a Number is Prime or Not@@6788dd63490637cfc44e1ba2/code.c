#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i=1;
    while (i<=n){
        if (num%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
        i++;
    }
}