#include<stdio.h>
int main(){
    int n;
    int x=64;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        x=64;
        for(int j=0; j<n; j++){
            printf("%c", x+1);
        }
        printf("\n");

    }
   
    
}