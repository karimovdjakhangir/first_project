//array5 Fibonacci
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
// array5

int main () {
    int i, n;
        
    printf(" chislo: ");
    scanf("%d", &n);

    int F[n];

    F[0] = 1;
    F[1] = 1;

    printf("F[0] = %d\n", F[0]);
    printf("F[1] = %d\n", F[1]);

    for(int i=2; i<=n; i++){
        F[i]=F[i-1]+F[i-2];
        printf("F[%d] = %d\n", i, F[i]);
    }
    

    return 0;
}