// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int d=(a*a)+(b*b);
//     int e=(c*c);
//     int f=(a*a)+(c*c);
//     int g=(b*b);
//     int h=(b*b)+(c*c);
//     int i=(a*a);
//     if(d==e){
//         printf("Valid");

//     }
//     else if(f==g){
//         printf("Valid");

//     }
//     else if(h==i){
//         printf("Valid");
//     }
//     else{
//         printf("Invalid");
//     }
// }
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d ",&a,&b,&c);
    if(a+b>c && a+c>b && b+a>>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}