#include <stdio.h>

buscar(int num, int vet[]) {
  for (int i = 0; i < 10; i++) {
    if (num == vet[i]) {
      printf("Número pertence ao vetor\n");
      break;
    }
  }
}

main(void) {
  int vet[10];
 

  int busca_numero = 0;
  for (int i = 0; i < 10; i++) {
    printf("Escreva o %d º inteiro\n", i + 1);
    scanf("%d", &vet[i]);
  }

  printf("Escreva um número para realizar a busca: ");
  scanf("%d", &busca_numero);
  buscar(busca_numero,vet);
}
