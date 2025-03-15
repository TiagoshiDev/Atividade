#include <stdio.h>

int main(){
    
    int um, dois, tres;
  
    printf ("Insira o tamanho de cada lado do triângulo:");
    scanf ("%d %d %d", &um, &dois, &tres);
  
    if ((um + dois > tres) && (um + tres > dois) && (dois + tres > um)) {
        printf("O triângulo é válido");
    } else {
        printf("O triângulo não é válido");
    }

return 0;
}