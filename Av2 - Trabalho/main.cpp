#include "aluno.h"
#include "prova.h"
#include "letraAleatoria.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir() {
  for (int i = 0; i < 9999; i++) {
    printf("\n%d º aluno\n\n", i + 1);
    printf("Número %d\n", Aluno[i].numero);
    printf("Nota da prova %d\n", Prova[i].nota);
    printf("CPF %ld\n", Aluno[i].CPF);
    printf("Telefone %ld\n", Aluno[i].telefone);
  }
  
  printf("\nMaior frequência %d\n",indice_maior);
  printf("Percentual de aprovação: %f porcento \n", percentual_aprovados());
}

int main() {
  int i = 0;
  char resposta;
  int atual;
  for (i = 0; i < 9999; i++) {
    /*printf("Escreva o numero do %dº aluno \n", i + 1);
    scanf("%i", &Aluno[i].numero);
    flush_in();*/

    Aluno[i].numero = i;
    Aluno[i].telefone = telefone(i);
    Aluno[i].CPF = cpf(i);
      
    for (int j = 0; j < 10; j++) {
      resposta = letra();
      Prova[i].resposta[j] = resposta;
      Prova[i].nota += calcularPontos(resposta, j);
    }  
    /*for (int j = 0; j < 10; j++) {
      printf("Resposta da Q%d \n", j + 1);
      scanf("%c", &resposta);
      Prova[i].resposta[j] = resposta;
      Prova[i].nota += calcularPontos(resposta, j);
      flush_in();
    }*/
    nota_aluno[i] = Prova[i].nota;
    nota_frequencia[nota_aluno[i]] += 1;

    atual = nota_frequencia[nota_aluno[i]];
    maior = frequencia_nota(maior,atual,nota_aluno[i]);
  }

  imprimir();
}

