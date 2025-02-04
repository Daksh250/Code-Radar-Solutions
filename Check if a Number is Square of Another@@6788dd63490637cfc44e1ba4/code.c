#include <stdio.h>
#include <math.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int square2=pow(num2,2);
    if (num1==square2){
        printf("Yes");
    }
    else{
        printf("No");
    }
}