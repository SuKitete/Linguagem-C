#include<stdio.h>
int somar(int valor){
    if(valor != 0){
        return valor + somar(valor - 1);
    } else{
        return valor;
    }
}
int main(){
    int n, resultado;
    printf("\nDigite um numero inteito positivo: ");
    scanf("%d", &n);
    resultado = somar(n);
    printf("\nResutado da soma = %d", resultado);

    return 0;
}