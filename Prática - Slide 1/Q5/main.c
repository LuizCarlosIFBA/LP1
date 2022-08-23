#include <stdio.h>

void main()
{
   double media, nota1, nota2, nota3, numerador, denominador;
   char nome[50];
   printf("Escreva o nome: ");
   scanf("%s",nome);
   fflush(stdin);
   printf("Escreva a primeira nota: ");
   scanf("%lg",&nota1);
   printf("Escreva a segunda nota: ");
   scanf("%lg",&nota2);
   printf("Escreva a terceira nota: ");
   scanf("%lg",&nota3);

   numerador = (nota1*2)+(nota2*4)+(nota2*4);
   denominador = 2+4+4;
   
   media = numerador/denominador; 
    
   printf("A media final de %s foi: %lg ",nome,media);
   
   if(media>=7 && media<=10){
        printf("APROVADO");        
   }else if(media>=5 && media<=7){
            printf("RECUPERAÇÃO");
         }else printf("REPROVADO");      
}

