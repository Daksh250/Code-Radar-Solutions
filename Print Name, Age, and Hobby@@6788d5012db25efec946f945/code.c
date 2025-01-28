#include <stdio.h>
int main(){
    char name,hobby;
    int age;
    scanf("%c ",&name);
    scanf("%d", &age);
    scanf("%c", &hobby);
    printf("Name: %c \n", &name);
    printf("Age: %d \n",&age);
    printf("Hobby: %c \n",&hobby);
    return 0;
}