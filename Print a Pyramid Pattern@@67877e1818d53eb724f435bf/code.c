#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<2*i+1; j++){
            printf(" ");
        }
        for (int k=0; k<=i; k++){
            printf("*");
        }
        for (int k=0; k<=i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}