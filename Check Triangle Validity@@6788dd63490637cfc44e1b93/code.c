#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=(a**2)+(b**2);
    int y=c**2;
    int e=(a**2)+(c**2);
    int f=b**2;
    int g=(b**2)+(c**2);
    int m=a**2;
    if (x==y){
        printf("Valid");
    }
    else if(e==f){
        printf("Valid");
    }
    else if(g==m){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}