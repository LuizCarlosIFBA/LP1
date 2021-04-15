#include<stdio.h> 
 

int main()
{
    // Declaração de variáveis
    double a, b, c;
    double acumula = 0;
    double deno = 0;
    // Entrada dos dados
    printf("Informe o valor de A:");
    scanf("%lf",&a);
    a > 6 ?(acumula=a*2.5):(acumula=a*5.0);
    a > 6 ?(deno=2.5):(deno=5); 
    printf("Informe o valor de B:");
    scanf("%lf",&b);
    b > 6 ?(acumula=+b*2.5):(acumula=+b*5); 
    b > 6 ?(deno=+2.5):(deno=+5); 
    printf("Informe o valor de c:");
    scanf("%lf", &c);
    c > 6 ?(acumula=+c*2.5):(acumula=+c*5); 
    c > 6 ?(deno=+2.5):(deno=+5); 
    // Exibe o resultado
    printf("\nA média ponderada e = %lf\n", acumula/deno);
 
    // Retorno da função main()
    return 0;
}
