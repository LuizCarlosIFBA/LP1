#include <stdio.h>

float soma (float a, float b);
float subtracao (float a, float b);
float multiplicacao (float a, float b);
float divisao (float a, float b);


int main() {

  float a, b;
  char s;

  printf("Informe o valor de a : ");
  scanf("%f", &a);
  printf("Informe um simbolo +, -, *, / \n");
  scanf(" %c", &s);
  printf("Informe o valor de b : ");
  scanf("%f", &b);
  
  if (s == '+')
    printf("r = %f", soma(a, b) );
  else
  {
    if (s == '-')
      printf("r = %f", subtracao(a, b));
    else
    {
      if (s == '*')
         printf("r = %f", multiplicacao(a, b));
      else
      {
        if (s == '/')
          printf("r = %0.2f", divisao(a, b));
        else
          printf("Operacao invalida ");
      }
    }
  }

  
  
}


float soma (float a, float b)
{
  return a + b;
}

float subtracao (float a, float b)
{
  return a - b;
}

float multiplicacao (float a, float b)
{
  return a * b;
}

float divisao (float a, float b)
{
  return a / b;
}

