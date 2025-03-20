#include <stdio.h>

int main() {
int numero, soma = 0, digito;

printf("Digite um número inteiro positivo: ");
scanf("%d", &numero);

if (numero < 0) {
printf("Por favor, insira um número positivo.\n");
return 1;
}

while (numero > 0) {
digito = numero % 10; 
soma += digito; 
numero /= 10; 
}

printf("A soma dos dígitos é: %d\n", soma);

return 0;
}