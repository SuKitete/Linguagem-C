#include<stdio.h>

int main(){

    int voto, cand1=0, cand2=0, cand3=0, vencedor;
    float branco = 0, nulo = 0, porcen_nulo, porcen_branco;
    do{
        system("cls");
        printf("1.CANDIDATO A\n");
        printf("2.CANDIDATO B\n");
        printf("3.CANDIDATO C\n");
        printf("4.NULO\n");
        printf("5.BRANCO\n");
        printf("6.FINALIZAR\n");
        printf("Entre com o seu voto: ");
        scanf("%d", &voto);
        
        if(voto == 1){
            ++cand1;
        }
        if(voto == 2){
            ++cand2;
        }
        if(voto == 3){
            ++cand3;
        }
        if(voto == 4){
            ++nulo;
        }
        if(voto == 5){
            ++branco;
        } 
    }while(voto != 6);
   
    printf("Votos para o candidato A: %d\n", cand1);
    printf("Votos para o candidato B: %d\n", cand2);
    printf("Votos para o candidato C: %d\n", cand3);
    porcen_nulo = (nulo * 100) / (cand1+cand2+cand3+branco+nulo);
    porcen_branco = (branco * 100) / (cand1+cand2+cand3+branco+nulo);
    printf("Porcentagem de votos nulos: %.2f\n", porcen_nulo);
    printf("Porcentagem de votos brancos: %.2f\n", porcen_branco);

    vencedor = cand1;

    if(cand2 > vencedor){
        vencedor = cand2;    
    }
    if(cand3 > vencedor){
        vencedor = cand3; 
    }

    if(vencedor == cand1 && vencedor == cand2){
        printf("SEGUNDO TURNO");
    
        }else if(vencedor == cand1 && vencedor == cand3){
        printf("SEGUNDO TURNO");        

        }else if(vencedor == cand2 && vencedor == cand3){
        printf("SEGUNDO TURNO");
        
        }else{
        if(vencedor == cand1){
        printf("O candidato A venceu");
        }
        if(vencedor == cand2){
        printf("O candidato B venceu");
        }
        if(vencedor == cand3){
        printf("O candidato C venceu");
        }
    }
   
return 0;
}