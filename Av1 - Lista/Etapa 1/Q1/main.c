#include <iostream>

float calcular_peso(float num) {
  if (num > 6) {
    return 5;
  } else {
    return 2.5;
  }
}

float calcular_denominador(float peso_a, float peso_b, float peso_c){
  return peso_a+peso_b+peso_c;
}

float calcular_numerador(float a, float b, float c, float peso_a, float peso_b, float peso_c){
  return (a*peso_a)+(b*peso_b)+(c*peso_c);
}

int main() {
  float a, b, c;

  printf("Leia A: ");
  scanf("%f", &a);
  printf("\nLeia B: ");
  scanf("%f", &b);
  printf("\nLeia C: ");
  scanf("%f", &c);

  float peso_a = calcular_peso(a);
  float peso_b = calcular_peso(b);
  float peso_c = calcular_peso(c);

  float numerador = calcular_numerador(a,b,c,peso_a,peso_b,peso_c);
  float denominador = calcular_denominador(peso_a,peso_b,peso_c);

  printf("\nO resultado é %f : ",numerador/denominador);
}
