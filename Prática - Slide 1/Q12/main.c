#include <stdio.h>

void main()
{ 
  float nota;
  float soma=0;
  float menor, maior;

  int cont = 0; 
  
  printf("Escreva a %d � nota ",cont+1);
  scanf("%f",&nota);

  while(nota!=-1){   
    if (cont == 1) {
        maior = nota;
        menor = maior;
    }else if (nota > maior) {
            maior = nota;
          }
     else if (nota < menor) {
            menor = nota;
          }
        
     cont++;
      
     soma += nota;
     printf("Escreva a %d � nota ",cont+1);
     scanf("%f",&nota);
     
  }

  printf("A media � : %f \n",soma/cont);
  printf("O menor valor � %f e o maior valor � %f",menor,maior); 
}

