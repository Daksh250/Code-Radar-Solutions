#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if (ch=="a"||ch=="e"||ch=="i"ch=="o"||ch=="u"||ch=="A"||ch=="E"||ch=="I"||ch=="O"||ch=="U"){
        printf("Vowel");

    }
    else{
        printf("Consonant");
    }
    


}