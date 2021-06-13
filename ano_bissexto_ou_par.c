#include<stdio.h>

int main(){
  
  int numero;
  int escolha;

  printf("\nESCOLHA UMA OPCAO E DIGITE UM NUMERO\n\n");  
  printf("Escolha uma opcao\n");
  printf("1 - Saber se o numero e par ou impar\n");
  printf("2 - Saber se o numero corresponde a um ano bissexto\n");
  scanf("%d", &escolha);

  printf("Digite um numero: ");
  scanf("%d", &numero);

switch(escolha){
    case 1:
    if(numero % 2 == 0){
        printf("O numero eh par");
        break;
    }else{
        printf("O numero eh impar");
        break;
    }
    case 2:
    if(numero % 400 == 0){
        printf("Eh ano bissexto");
        break;
        }else if(numero % 4 == 0 && numero % 100 != 0){
        printf("Eh ano bissexto");
        break;
        }else{
        printf("Nao eh ano bissexto");
        break;
        }
default: printf("Alternativa invalida");
break;
}
   
return 0;
}