#include<stdio.h>

int main(){
    char ch;
    scanf("%d",&ch);
    if(ch>='a' && ch<='z'){
        if(ch=='a' || ch=='e' || ch=='i' || ch == 'o' || ch == 'u'){
            printf("vowel");
        }else{
            printf("Consonant");
        }
        }
    else if (ch >= '0' && ch <= '9'){
            printf(Digit);
        }
    else{
        printf("Special Character");
        }
