#include <stdio.h>
#include <string.h>
void main(){
    char nome[50];
    float compra,venda;
    
    printf("Preço de compra: \n");
    scanf("%f",&compra);
    printf("Preço de venda: \n");
    scanf("%f",&venda);
    printf("Digite o nome: \n");
    scanf("%s",nome);
       
 
    float intervalo1 = compra*0.20;
    float intervalo2 = compra*0.30;
    float lucro = venda - compra;
    float vinteLucro = intervalo1/lucro;
    float trintaLucro = intervalo2/lucro;
    
    printf("Para ter menos de 20 porcento de lucro deve vender menos de %f produtos: \n",vinteLucro);
    printf("Para ter mais que 30 porcento de lucro deve vender mais de %f produtos \n",trintaLucro);
    printf("Para ter entre 20 porcento e 30 porcento de lucro deve ser maior ou igual a %f e  menor ou igual a %f \n",vinteLucro,trintaLucro);
    
}
