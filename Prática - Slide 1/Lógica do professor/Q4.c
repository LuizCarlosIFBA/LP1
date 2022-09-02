#include <iostream>

float notas[3];

float media(float n1, float n2, float n3)
{
  float m;
  m = (n1*2 + n2*4 + n3*4)/10;
  return m;
}

void situacao(float m)
{
 if (m >= 7)
    printf("Aprovado");
  else
  {
     if (m >= 5)
        printf("Recuperacao");
     else
        printf("Reprovado");
  }  
}

int main() {
  char nome[30];
  float n1,n2,n3, m;

  
  printf("Informe o nome do aluno : ");
  scanf("%s", &nome);
  printf("Informe a n1 : ");
  scanf("%f", &n1);
  printf("Informe a n2 : ");
  scanf("%f", &n2);
  printf("Informe n3 : ");
  scanf("%f", &n3);

  //m = (n1*2 + n2*4 + n3*4)/10;
  m = media(n1, n2, n3);

  printf("A media final de %s foi %f \n", nome, m);

  situacao(m);


  
}
