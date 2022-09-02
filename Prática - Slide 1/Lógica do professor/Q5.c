#include <stidio.h>

int main() {
  
   char resp;
   char nome[10];
   float pc;
   float pv;

   printf("Deseja cadastrar uma mercadoria (s/n)? \n");
   scanf(" %c", &resp);

   while (resp == 's')
   {
     printf("Informe o nome : \n");
     scanf("%s", &nome);
     printf("Informe o preço de compra : \n");
     scanf("%f", &pc);
     printf("Informe o preço de venda : \n");
     scanf("%f", &pv);



      printf("Deseja cadastrar uma mercadoria (s/n)? \n");
      scanf(" %c", &resp);
   }



}
