#include <stdio.h>

#define TAM 9999

struct provas
{ char resposta[10];
  int nota = 0;
  int pontuacao;
};

struct provas Prova[TAM];


char gabarito[10] = {'a','a','b','c','a','a','b','b','a','a'};
 

/*Limpar memória*/
void flush_in()
{
   int ch;
   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

/*Calcular pontos*/
int calcularPontos(char resposta,int i)
{ 
  if(gabarito[i]==resposta){
      return 1;  
  }else return 0;
}

