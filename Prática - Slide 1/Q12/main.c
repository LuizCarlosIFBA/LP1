#include <stdio.h>

void main()
{ 
  float nota;
  float soma=0;
  float menor, maior;

  int cont = 0; 
  
  printf("Escreva a %d º nota ",cont+1);
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
     printf("Escreva a %d º nota ",cont+1);
     scanf("%f",&nota);
     
  }

  printf("A media é : %f \n",soma/cont);
  printf("O menor valor é %f e o maior valor é %f",menor,maior); 
}

