#include <stdio.h>

#define TAM 9999

struct alunos
{ 
  int numero;
  long telefone;
  long CPF;
};

struct alunos Aluno[TAM];

int nota_aluno[TAM];
//int frequencia[10]; 
int total_aprovados = 0;
int maior;
int indice_maior;
int nota_frequencia[11];


float percentual_aprovados(){
  int i;
  for(i=0;i<TAM;i++){
    if(nota_aluno[i]>=6){
      total_aprovados++;  
    }
  }
    
 // return ((total_aprovados*100.0)/TAM);
  return ((total_aprovados/TAM)*100); 
}


int frequencia_nota(int maior,int atual,int indice){
  if(atual>maior){
    maior = atual;
    indice_maior = indice;
  }   
  return maior;
}

