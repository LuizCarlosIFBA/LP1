#include <iostream>

int perfeito(int n){
    int i, soma = 0;

    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        return 1;//  perfeito
    else
        return 0;// não perfeito
}

int positivo(int n){
  if(n>0){
    return 1;
  }else return 0;
}

int main() {
  int numero;
  printf("Escreva um número \n");
  scanf("%d",&numero);
  
  while(positivo(numero)==0){
    printf("Escreva um número, porém dessa vez \nescolha um número positivo \n");
    scanf("%d",&numero);
  }

  if(perfeito(numero)==1){
      printf("Esse número é perfeito \n");
  }else printf("Esse número não é perfeito \n");
}
