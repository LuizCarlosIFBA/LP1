#include <stdio.h>

/*Notas acima da média*/
int acima(float media, float vet[]){
  int cont = 0;
  for(int j=0;j<10;j++){
     if(vet[j]>media){
       cont++;
     }
  } 
  return cont;
}

/*Validador de nota*/
int testaNota(float nota){
  if(nota>=0 && nota<=10){
    return 1;
  }else return 0;
}

main(void) {
  float vet[10];
  float soma = 0;
  int i = 0;
  float nota;
  for(i=0;i<10;i++){
    printf("Escreva a %d º nota\n",i+1);
    scanf("%f",&nota);

    while(testaNota(nota)==0){
       printf("Escreva novamente a %d º nota\n",i+1);
       printf("Só é permitido de 0 até 10\n");
       scanf("%f",&nota);
    }

    vet[i]=nota;  
    soma += vet[i];
  }

  float media = soma/i;
  printf("A média é %f \n",media);
  printf("Existem %d notas acima da média",acima(media,vet));
}
