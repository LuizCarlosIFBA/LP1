#include <iostream>
#include <ctime>

char letra(){
  srand(time(NULL));
 
  char ch = 'a' + rand() % 3;
  //std::cout << ch << std::endl;
  return ch;
}

long telefone(int i){
  return 719999999+(10*i);
}

long cpf(int i){
  return 11111111111+(5*i);
}
