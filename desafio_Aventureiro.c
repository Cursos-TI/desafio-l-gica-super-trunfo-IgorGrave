#include <stdio.h>

int main(){

    //declaração de variaveis carta 1
    char pais[20];
    int populacao;
    float area;
    float pib;
    int pontostur;
    float densidadedem = (float)populacao/area;
    //declaração de variaveis carta 2
    char pais2[20];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontostur2;
    float densidadedem2;
    //variavel do menu de interação
    int atributo;



    //Leitura de entrada da carta 1
    printf("*** Bem vindo ao Super Trunfo! ***\n");
    printf("selecione as informação da carta 1!");

    printf("\n \nNome do País: \n");
    scanf(" %s", pais);

    printf("tamanho da População: \n");
    scanf("%d", &populacao);

    printf("tamanho da Área: \n");
    scanf(" %f", &area);

    printf("tamanho do PIB: \n");
    scanf(" %f", &pib);

    printf("Quantidade de Pontos turísticos: \n");
    scanf("%d", &pontostur);


    //Leitura de entrada da carta 2
    printf("\n \nselecione as informação da carta 2!");
    printf("\n \nNome do País: \n");
    scanf(" %s", pais2);

    printf("tamanho da População: \n");
    scanf("%d", &populacao2);

    printf("tamanho da Área: \n");
    scanf(" %f", &area2);

    printf("tamanho do PIB: \n");
    scanf(" %f", &pib2);

    printf("Quantidade de Pontos turísticos: \n");
    scanf("%d", &pontostur2);

    densidadedem = populacao/area;
    densidadedem2 = populacao2/area2;

    printf("\n \nSelecione qual atributo deseja comparar: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Ponto Turístico \n");
    printf("5 - Densidade Demografica \n");
    scanf("%d", &atributo);

    switch (atributo){
    case 1:
        if( populacao > populacao2 ){
            printf("\n *** População *** \n");
            printf(" %s - %d x %d - %s ", pais, populacao, populacao2, pais2);
            printf("\n### Carta 1 venceu! ela tem mais numero de Habitantes ###\n\n");
        } else if(populacao2 > populacao){
            printf("\n *** População *** \n");
            printf(" %s - %d x %d - %s ", pais, populacao, populacao2, pais2);
            printf("\n### Carta 2 venceu! ela tem mais numero de Habitantes ###\n\n");
        } else{
            printf("\n### Empate! ###\n\n");
        }
    
    break;
    
    case 2: 
        if( area > area2 ){
            printf("\n *** Área *** \n");
            printf(" %s - %.3f x %.3f - %s ", pais, area, area2, pais2);
            printf("\n### Carta 1 venceu! ela tem uma Área maior! ###\n\n");
        } else if( area2 > area){
            printf("\n *** Área *** \n");
            printf(" %s - %.3f x %.3f - %s ", pais, area, area2, pais2);
            printf("\n### Carta 2 venceu! ela tem uma Área maior! ###\n\n");
        } else{
            printf("\n### Empate! ###\n\n");
        }
    
    break;

    case 3:
        if( pib > pib2 ){
            printf("\n *** PIB *** \n");
            printf(" %s - %.2f x %.2f - %s ", pais, pib, pib2, pais2);
            printf("\n### Carta 1 venceu! ela tem um PIB maior! ###\n\n");
        } else if( pib2 > pib ){
            printf("\n *** PIB *** \n");
            printf(" %s - %.2f x %.2f - %s ", pais, pib, pib2, pais2);
            printf("\n### Carta 2 venceu! ela tem um PIB maior! ###\n\n");
        } else{
            printf("\n### Empate! ###\n\n");
        }

    break;

    case 4:
        if( pontostur > pontostur2 ){
            printf("\n *** Pontos Turísticos *** \n");
            printf(" %s - %d x %d - %s ", pais, pontostur, pontostur2, pais2);
            printf("\n### Carta 1 venceu! ela tem mais Pontos Turísticos! ###\n\n");
        } else if( pontostur2 > pontostur ){
            printf("\n *** Pontos Turísticos *** \n");
            printf(" %s - %d x %d - %s ", pais, pontostur, pontostur2, pais2);
            printf("\n### Carta 2 venceu! ela tem mais Pontos Turísticos! ###\n\n");
        } else{
            printf("\n### Empate! ###\n\n");
        }

    break;

    case 5:
        if( densidadedem < densidadedem2 ){
            printf("\n *** Densidade Demográfica *** \n");
            printf(" %s - %.2f x %.2f - %s ", pais, densidadedem, densidadedem2, pais2);
            printf("\n### Carta 1 venceu! ela tem uma densidade demografica menor! ###\n\n");
        } else if( densidadedem2 < densidadedem ){
            printf("\n *** Densidade Demográfica *** \n");
            printf(" %s - %.2f x %.2f - %s ", pais, densidadedem, densidadedem2, pais2);
            printf("\n### Carta 2 venceu! ela tem uma densidade demografica menor! ###\n\n");
        } else{
            printf("\n### Empate! ###\n\n");
        }

    break;
        
    default:
        printf("\nNão é uma opção valída!\n");
        break;
    }

    return 0;
}