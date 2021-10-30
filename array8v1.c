#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

// array8

int main () {
    int n, counter=0;

    srand(time(NULL));

    printf("n= ");
    scanf("%d", &n);

    long int massiv[n], toqlari[n];
    // long int massiv[] = {4, 5, 7, 8, 6, 9};
    
    printf("Massiv:");
    for(int i=0; i<n; i++){
        massiv[i] = rand()%11+1;
        printf(" %ld", massiv[i]);

    }

    printf("\nNatija:");
    for(int k=0; k<=n; k++){
        if(massiv[k]%2){
            toqlari[counter] = massiv[k];
            counter++;
            printf(" %ld", massiv[k]);
        }
    }

    printf("\nToqlari soni: %d\n", counter);

    return 0;
}