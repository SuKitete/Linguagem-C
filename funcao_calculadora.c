#include<stdio.h>

float soma(float n1, float n2){
return n1+n2;
}

float subtracao(float n1, float n2){
return n1-n2;
}

float multiplicacao(float n1, float n2){
return n1*n2;
}

float divisao(float n1, float n2){
return n1/n2;
}

int main(){

    float v1, v2;
    int operador;

    printf("ESCOLHA UMA OPERACAO\n");
    printf("1-SOMA\n");
    printf("2-SUBTRACAO\n");
    printf("3-MULTIPLICACAO\n");
    printf("4-DIVISAO\n");
    scanf("%d", &operador);
    printf("Digite o primeiro numero: ");
    scanf("%f", &v1);
    printf("Digite o segundo numero: ");
    scanf("%f", &v2);    

    switch (operador)
    {
    case 1:
        printf("%.2f", soma(v1,v2));
        break;
    case 2:
        printf("%.2f", subtracao(v1,v2));
        break;
    case 3:
        printf("%.2f", multiplicacao(v1,v2));
        break;
    case 4:
        printf("%.2f", divisao(v1,v2));
        break;
        default: printf("%.2f", multiplicacao(0,0));
        break;                              
    }

    return 0;
}