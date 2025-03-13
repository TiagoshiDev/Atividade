#include <stdio.h>

int main(){
    
  float velocidade, distancia, tempo;
  int segundos, minutos, horas;
  
  printf ("quantos metros ate o destino?:");
  scanf ("%f", &distancia);
  printf ("qual a velocidade media (m/s)?:");
  scanf ("%f", &velocidade);
  
    if (velocidade <= 0) {
        printf("A velocidade deve ser maior que zero.");
        return 1;
    }
  
    tempo = distancia / velocidade; 
    horas = (int)(tempo / 3600);   
    minutos = (int)(tempo / 60); 
    segundos = (int)(tempo - (minutos * 60)); 
  
   printf("Tempo estimado: ");
    if (horas > 0) {
        printf("%d horas, %d minutos e %d segundos", horas, minutos, segundos);
    } else if (minutos > 0) {
        printf("%d minutos e %d segundos", minutos, segundos);
    } else {
        printf("%d segundos", segundos);
    }

return 0;
}