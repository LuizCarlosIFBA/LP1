#include <iostream>
#include <stdio.h>

void numeroPalindromo(int num){
  int nn,r,inv;

  nn = num;
  inv = 0;
  while(num > 0){
    r = num%10;
    inv *= 10;
    inv += r;
    num = num/10;
  }
  if(inv == nn)
    printf("É palíndromo.\n");
  else
    printf("Não é palíndromo.\n");
 
}

void nomePalindromo(char nome[]){
    int TAM = sizeof(nome)/sizeof(int);
    int k = TAM;
    
    int cont_diferente = 0;
    for(int i=0;i<TAM/2;i++){
      if(nome[i]!=nome[k]){
        cont_diferente++; 
      }
      k--;
    }  

    if(cont_diferente==0){
      printf("É palindromo");
    }else printf("Não é palindromo");
}

int main(){
  int num = 818;
  char nome[] = {'O','V','O'};

  printf("%d \n",num);
  numeroPalindromo(num);
  printf("%s \n",nome);
  nomePalindromo(nome);
  
return 0;
}
