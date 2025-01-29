#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=(int)pow(a,2)+(int)pow(b,2);
    int y=(int)pow(c,2);
    int e=(int)pow(a,2)+(int)pow(c,2);
    int f=(int)pow(b,2);
    int g=(int)pow(b,2)+(int)pow(c,2);
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