#include <stdio.h>

int main(){
    int um, divisiveis, primo;
    primo = 1;

    printf("Insira o numero para verificar:");
    scanf("%d", &um);
  
    for (divisiveis = 2; divisiveis <um; divisiveis++){
        if (um % divisiveis == 0){
        primo = 0;
        break;
        }}
    
     if (primo==1){
    printf("%d é primo", um);
    } else {
    printf("%d não é primo", um);
    }

return 0;
}