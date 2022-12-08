#include <iostream>

#include<stdio.h>
#include<string.h>
#include<math.h>

void converParaBinario(char bin[]){
    long dec = 0;

    int i = 0;
    int s;
    s = strlen( bin );
    while( s-- ) {
        if( bin[s] == '0' || bin[s] == '1' ) {
            dec = dec + pow(2, i++) * (bin[s] - '0');
        }
    };
    printf("\nConvertido para decimal: %ld\n",dec);
}

int main()
{
    char bin[100];

    printf("Escreva um binário: ");
    fgets( bin, sizeof(bin), stdin);

    converParaBinario(bin); 
    return 0;
}
