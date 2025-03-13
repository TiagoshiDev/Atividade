#include <stdio.h>

int main(){
  float cotacao , dolar , real;
  printf ("insira atual cotação do dólar:");
  scanf ("%f", &cotacao);
  
  printf ("insira valor em real para conversão:");
  scanf ("%f", &real);
  
  dolar = real * cotacao;
  
  printf ("dolar: %.2f" , dolar);
  
 return 0;
}