#include <stdio.h>
int main(){
    int a,b;
    scanf("%a %b",&a,&b);
    if(a>0 && b>0 || a<0 && b<0){
        printf("Same Sign");
    }
}