#include <stdio.h>

void main()
{ 
  float nota;
  float soma=0;
  
  int cont = 0; 
  
  printf("Escreva a %d � nota ",cont+1);
  scanf("%f",&nota);

  while(nota!=-1){   
     cont++;
     soma += nota;
     printf("Escreva a %d � nota ",cont+1);
     scanf("%f",&nota);
  }

  printf("A media � : %f \n",soma/cont);

}

