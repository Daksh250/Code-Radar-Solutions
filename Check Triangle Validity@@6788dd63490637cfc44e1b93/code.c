#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=(a*a)+(b*b);
    int y=(c*c);
    int e=(a*a)+(c*c);
    int f=(b*b);
    int g=(b*b)+(c*c);
    int m=(a*a);
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