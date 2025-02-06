#include <stdio.h>
int main(){
    int num1,num2;
    char c;
    scanf("%d %d %c",&num1,&num2,&c);
    switch(c){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            if(num2==0){
                printf("error");
            }
            else{
                printf("%d",num1/num2);
                break;
            }
    }
}