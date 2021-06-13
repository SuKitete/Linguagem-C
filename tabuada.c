#include<stdio.h>

int main(){

int num,mult=0, resposta;
while(resposta !=2){
	system("cls");
	printf("\nTabuada");
	printf("\nDigite o numero da Tabuada: ");
	scanf("%d", &num);
	
	for(mult=0; mult<=10; mult++) 
	{
		printf("\n%dX%d=%d", num, mult, mult*num);
	}
	printf("\nDigite 1 - Nova Tabuada: ");
	printf("\nDigite 2 - Sair");
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &resposta);

}
    
	return 0;
}

    