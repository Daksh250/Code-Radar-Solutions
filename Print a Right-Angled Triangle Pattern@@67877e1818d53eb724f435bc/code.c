#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for(i=0; i<n; i++){
        for(j=1; j=<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}