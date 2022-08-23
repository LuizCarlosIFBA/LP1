#include <stdio.h>

void main()
{ 
  int i=0;
  int a,b;
  printf("Escreva o valor de A: ");
  scanf("%d",&a);
  printf("Escreva o valor de B: ");
  scanf("%d",&b);
  
  int maior = a;
  int menor = a;
  if(b>maior){
     maior = b;
  }else if(b<menor){
            menor = b;        
        }

  for(int i=menor;i<=maior;i++){
    printf(" %d, ",i);
  }  
}

