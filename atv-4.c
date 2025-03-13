#include <stdio.h>

int main(){
  float caridade, gorjeta, conta, total;
 
  scanf("%f" , &conta);
 
  scanf("%f" , &caridade);
  gorjeta = ((caridade/100) * conta);
 
  total = conta + gorjeta;
 
  printf("total: %.2f", total);
 

  return 0;
}