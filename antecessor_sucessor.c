#include<stdio.h>

int main(){

int numero, decremento, incremento;
printf("Digite um numero: ");
scanf("%d", &numero);

decremento = --numero;
incremento = ++numero;
printf("O decremento e %d", decremento);
printf("\nO incremento e %d", ++incremento);

return 0;
}