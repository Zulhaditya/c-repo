#include <stdio.h>

int main(){
    int i, bit_a, bit_b;
    printf("perbandingan operator OR |\n");

    for (i=0; i < 4; i++)
    {
        bit_a = (i & 2) / 2; // ambil bit kedua
        bit_b = (i & 1); // ambil bit pertama
        printf("%d | %d = %d\n", bit_a, bit_b, bit_a | bit_b);
    }
    
    printf("\nperbandingan operator AND &\n");
    for ( i = 0; i < 4; i++)
    {
        bit_a = (i & 2) / 2; // ambil bit kedua
        bit_b = (i & 1); // ambil bit pertama
        printf("%d & %d = %d\n", bit_a, bit_b, bit_a & bit_b);
    }   
}