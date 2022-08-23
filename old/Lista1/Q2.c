#include <stdio.h>
#include <stdlib.h>

int i,n,fatorial; 

int main(){
    printf("Digite o número N:");
    scanf("%d", &n);
    fatorial = 1;
    for(i=2;i<=n;i++){
        fatorial = fatorial * i;
    }

    if(n>=0){
        printf("O fatorial de N = %d vale %d.\n", n, fatorial);
   }else{
            printf("Não existe fatorial de numero negativo\n");
        }

   return 0;
}
