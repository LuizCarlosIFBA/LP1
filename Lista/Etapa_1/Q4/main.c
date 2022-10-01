#include <iostream>
#include<stdio.h>

float precentagem(float precoVenda, float precoCompra){
  return ((precoVenda/precoCompra)-1)*100;
}

int main() {
  char nome[61];
  float precoCompra = 0;
  float precoVenda = 0;

  int cont_20=0;
  int cont_30=0;
  int entreValores=0;

  float per;
  
  int continuar;
  do{
    per=0;
    printf("\nDigite o nome da mercadoria: ");
    scanf("%s",nome);
    printf("Digite o preco de compra: ");
    scanf("%f",&precoCompra);//Custo
    printf("Digite o preço de venda: ");
    scanf("%f",&precoVenda);

    per = precentagem(precoVenda,precoCompra);
    //printf("%f \n",per);
    if(per<20){
         cont_20++;
    }else if(per>30){
            cont_30++;
          }else entreValores++;
    
    printf("Deseja continuar?! 1 - sim, e qualquer número para não \n");
    scanf("%d",&continuar);    
  }while(continuar == 1);

  printf("Existem %d mercadorias com o lucro menor que 20% \n",cont_20);
  printf("Existem %d mercadorias com o lucro maior que 30%  \n",cont_30);
  printf("Existem %d mercadorias com o lucro 20% <= Lucro <= 30%  \n",entreValores);
}
