#include<stdio.h>
int main(){
    int n;
    int x=65;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for(int j=n; j<n-i; j++){
            printf("%c", x+1);
        }
        printf("\n");

    }
   
    
}