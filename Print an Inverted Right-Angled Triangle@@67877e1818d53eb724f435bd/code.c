#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i;
    int j;
    for(i=0;i<a;i++){
        for(j=a;j<a-i;j--){
            printf("* ");
        }
        printf(" ")
    }
}