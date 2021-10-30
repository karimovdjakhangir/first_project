#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

void consolega_chiqar(int massiv[], int n){

    printf("n = %d\n", n);
    for(int i=0; i<n; i++){
        printf("massiv[%d] = %d\n", i, massiv[i]);
    }

}

// funksiya argumentiga massivlarni berish.

int main () {

    int massiv[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(massiv)/sizeof(massiv[0]);

    consolega_chiqar(massiv, n);

    return 0;
}