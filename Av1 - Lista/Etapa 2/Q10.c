#include <iostream>

int fatorial_(int n){
  int fat;

  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

  return fat;
}


int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

void exibir_fibonacci(int numero){
  int fib[numero];
  
  for(int i = 0;i<numero;i++) {
    fib[i]=fibbonacci(i);            
  }

  printf("Sequência Fibonacci: ");            
  for(int j = 0;j<numero;j++) {
    printf("%d ",fib[j]);            
  }
}

void exibir_fatorial(int numero){  
  int fatorial[numero];
  int k = 0;
  for(int i=5;i>0;i--){
    fatorial[k]=fatorial_(i);
    k++;
  }

  printf("Fatorial: ");            
  int TAM = sizeof(fatorial)/sizeof(int);
  for(int j=0;j<TAM;j++){
    printf("%d ",fatorial[j]);
  }
}

int main() {
  exibir_fibonacci(5);
  printf("\n");
  exibir_fatorial(5);
  
  return 0;
}
