#include <stdio.h>

int main(){
    int n, cont, soma, aux, i;
    
    printf("Digite um numero\n");
    scanf("%d", &n);
    aux = 0;

    for(i=1; i<n; i++)
    {
        if (n%i==0)
        {
            aux += i;
        }        
    }
    if (aux == n)
    {
      printf("NUMERO PERFEITO\n");
    }else printf("NÃO PERFEITO\n");
     
}
