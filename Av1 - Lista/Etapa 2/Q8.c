#include <iostream>

void converter(int num){
  int bin,	  /* numero dado convertido para base 2    */
  aux,	  /* auxiliar                              */
  dig,	  /* guardara cada um dos digitos binarios */
  pot;        /* potencia de 10                        */  
  
  /* inicializacoes */
  aux = num;
  bin = 0;
  pot = 1;
  
  while (aux > 0) {
    dig = aux % 2;          /* proximo digito binario menos significativo  */
    aux = aux / 2;          /* remove esse digito do que resta             */
    bin = bin + dig * pot;  /* adiciona o digito como o mais significativo */
    pot = pot * 10;
  }

  printf("O numero %d escrito na base binaria: %d\n", num, bin);
}


int main() {
  int num;
  printf("Digite um numero natural: ");
  scanf("%d", &num);  /* numero dado (na base decimal) */
  converter(num);
  
  return 0;
}
