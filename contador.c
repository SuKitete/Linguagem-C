#include<stdio.h>
#include<windows.h>

int main(){

    int numero, contador = 0;

    printf("Entre com um numero para contar: ");
    scanf("%d", &numero);

    while(contador <= numero){
        printf("%d ", contador);
        contador = contador + 1;
        Sleep (1000);
    }

    return 0;
}