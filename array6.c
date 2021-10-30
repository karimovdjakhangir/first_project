//array5 Fibonacci
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
/// array6

int main () {
    int i, n, A, B;
        
    printf("n= ");
    scanf("%d", &n);

    printf("A= ");
    scanf("%d", &A);

    printf("B= ");
    scanf("%d", &B);

    long int a[n];

    a[0] = A;
    a[1] = B;

    printf("a[0] = %ld\n", a[0]);
    printf("a[1] = %ld\n", a[1]);

    for(int k=2; k<=n; k++){
        a[k]=a[k-1]+a[k-2];
        printf("a[%d] = %ld\n", k, a[k]);
    }


    return 0;
}