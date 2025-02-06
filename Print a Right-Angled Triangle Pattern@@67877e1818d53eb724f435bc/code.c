#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            printf("* ");
        }
        printf("/n");
    }
    return 0;
}