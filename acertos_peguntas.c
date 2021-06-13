#include<stdio.h>

int main(){

    char questao1;
    char questao2;
    char questao3;
    int acerto;

    acerto = 0;

printf("Escolha uma alternativa para a primeira pergunta\n");
printf("A\n");
printf("B\n");
printf("C\n");
printf("D\n");
printf("Resposta: ");
scanf("%c", &questao1);
fflush(stdin);

printf("Escolha uma alternativa para a segunda pergunta\n");
printf("A\n");
printf("B\n");
printf("C\n");
printf("D\n");
printf("Resposta: ");
scanf("%c", &questao2);
fflush(stdin);

printf("Escolha uma alternativa para a terceira pergunta\n");
printf("A\n");
printf("B\n");
printf("C\n");
printf("D\n");
printf("Resposta: ");
scanf("%c", &questao3);


if(questao1 == 'D'||questao1 == 'd'){
    printf("Questao 1 correta\n");
    acerto = acerto + 1;
}else{
    printf("Questao 1 incorreta\n");
}
if(questao2 == 'C'||questao2 == 'c'){
    printf("Questao 2 correta\n");
    acerto = acerto + 1;
}else{
    printf("Questao 2 incorreta\n");
}
if(questao3 == 'A'||questao3 == 'a'){
    printf("Questao 3 correta\n");
    acerto = acerto + 1;
}else{
    printf("Questao 3 incorreta\n");
}

printf("Quantidade de acertos: %d", acerto);



/*switch (questao1)
{
case 'D':
    printf("Questao 1 correta\n");
    acerto = acerto +1;
    break;
    case 'A':
    case 'B':
    case 'C':
    printf("Questao 1 incorreta\n");
    break;
}

switch (questao2)
{
case 'C':
    printf("Questao 2 correta\n");
    acerto = acerto +1;
    break;
    case 'A':
    case 'B':
    case 'D':
    printf("Questao 2 incorreta\n");
    break;
}

switch (questao3)
{
case 'A':
    printf("Questao 3 correta\n");
    acerto = acerto +1;
    break;
    case 'B':
    case 'C':
    case 'D':
    printf("Questao 3 incorreta\n");
    break;
}

printf("Quantidade de acertos: %d", acerto);
*/

return 0;
}