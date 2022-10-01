#include <iostream>

void converter_Tempo(int tempo_segundos){
   int horas, minutos, segundos;
   int resto = 0;
   
   horas = tempo_segundos/3600;
   resto = tempo_segundos%3600;
   minutos = resto/60;
   segundos = resto%60;
   
   printf("Tempo: %d hora(s): %d minuto(s): %d segundo(s)",horas,minutos,segundos);
}

void calcular_massa(float massa_i, float massa_f){
    int segundos = 0;
  
    while(massa_f >= 0.5){
        massa_f = massa_f / 2;
        segundos += 50;
    }

    converter_Tempo(segundos);
    printf("\nA massa final é %f g",massa_f);
}

int main() {
    float massa_f,massa_i;
    int tempo = 0;

    printf("Digite a massa do material em gramas: ");
    scanf("%f", &massa_i);
    massa_f=massa_i;
    calcular_massa(massa_i,massa_f);
    
  return 0;
}
