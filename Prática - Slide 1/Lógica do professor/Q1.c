#include <stdio.h>

float gratificao (float salario)
{
  float a;
  a = salario*5/100;
  return a;
}

float imposto(float salario)
{
   float a;
   a = salario*7/100;
   return a;  
}

float porcentagem(float salario, int perc)
{
  float p;
  p = salario*perc/100;
  return p;
}


int main() {
  float sb, grat, imp, sr;

  printf("Informe o salario base \n");
  scanf("%f", &sb);
  
  //grat = sb*5/100;
  //grat = gratificao(sb);
  grat = porcentagem(sb, 5);
    
  //imp = sb*7/100;
  //imp = imposto(sb);
  imp = porcentagem(sb, 7);
  
  sr = sb + grat - imp;

  printf("Salario a receber %f", sr);
}
