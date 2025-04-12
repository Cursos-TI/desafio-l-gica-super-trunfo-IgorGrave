#include <stdio.h>

int main() {
    // Declaração de variáveis da Carta 1
    char pais[20];
    int populacao;
    float area;
    float pib;
    int pontostur;
    float densidadedem;

    // Declaração de variáveis da Carta 2
    char pais2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;
    float densidadedem2;

    // Variáveis de interação, resultados e para armazenar valores dos atributos escolhidos
    int atributo1, atributo2;
    int resultado1, resultado2;
    // Variáveis para armazenar os valores do atributo escolhido em cada carta
    double valor1Card1 = 0, valor1Card2 = 0;
    double valor2Card1 = 0, valor2Card2 = 0;
    // Variáveis para a soma dos dois atributos de cada carta
    double somaCarta1 = 0, somaCarta2 = 0;
    
    // Entrada dos dados da Carta 1
    printf("*** Bem-vindo ao Super Trunfo! ***\n");
    printf("Informe as informações da Carta 1:\n");
    printf("Nome do País: ");
    scanf("%s", pais);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontostur);

    // Entrada dos dados da Carta 2
    printf("\nInforme as informações da Carta 2:\n");
    printf("Nome do País: ");
    scanf("%s", pais2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontostur2);

    // Cálculo da densidade demográfica
    densidadedem = populacao / area;
    densidadedem2 = populacao2 / area2;

    // Impressão dos dados de cada carta
    printf("\n--- Dados da Carta 1 ---\n");
    printf("País: %s\n", pais);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontostur);
    printf("Densidade Demográfica: %.2f\n", densidadedem);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontostur2);
    printf("Densidade Demográfica: %.2f\n", densidadedem2);

    // Escolha dos dois atributos para comparação
    printf("\nSelecione DOIS atributos para comparar (números de 1 a 5):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &atributo2);

    // Impede que sejam escolhidos os mesmos atributos
    if (atributo1 == atributo2) {
        printf("\nVocê não pode escolher os mesmos atributos para comparar!\n");
        return 1;
    }

    // Comparação do primeiro atributo armazenando os valores
    if (atributo1 == 1) {
        // População
        resultado1 = (populacao > populacao2) ? 1 : ((populacao < populacao2) ? 2 : 0);
        valor1Card1 = populacao;
        valor1Card2 = populacao2;
        printf("\nComparação do atributo: População\n");
        printf("Carta 1: %d   |   Carta 2: %d\n", populacao, populacao2);
    } else if (atributo1 == 2) {
        // Área
        resultado1 = (area > area2) ? 1 : ((area < area2) ? 2 : 0);
        valor1Card1 = area;
        valor1Card2 = area2;
        printf("\nComparação do atributo: Área\n");
        printf("Carta 1: %.2f   |   Carta 2: %.2f\n", area, area2);
    } else if (atributo1 == 3) {
        // PIB
        resultado1 = (pib > pib2) ? 1 : ((pib < pib2) ? 2 : 0);
        valor1Card1 = pib;
        valor1Card2 = pib2;
        printf("\nComparação do atributo: PIB\n");
        printf("Carta 1: %.2f   |   Carta 2: %.2f\n", pib, pib2);
    } else if (atributo1 == 4) {
        // Pontos Turísticos
        resultado1 = (pontostur > pontostur2) ? 1 : ((pontostur < pontostur2) ? 2 : 0);
        valor1Card1 = pontostur;
        valor1Card2 = pontostur2;
        printf("\nComparação do atributo: Pontos Turísticos\n");
        printf("Carta 1: %d   |   Carta 2: %d\n", pontostur, pontostur2);
    } else if (atributo1 == 5) {
        // Densidade Demográfica
        resultado1 = (densidadedem > densidadedem2) ? 1 : ((densidadedem < densidadedem2) ? 2 : 0);
        valor1Card1 = densidadedem;
        valor1Card2 = densidadedem2;
        printf("\nComparação do atributo: Densidade Demográfica\n");
        printf("Carta 1: %.2f   |   Carta 2: %.2f\n", densidadedem, densidadedem2);
    } else {
        printf("\nAtributo inválido para a primeira escolha!\n");
        return 1;
    }

    // Comparação do segundo atributo e armazenando os valores
    if (atributo2 == 1) {
        // População
        resultado2 = (populacao > populacao2) ? 1 : ((populacao < populacao2) ? 2 : 0);
        valor2Card1 = populacao;
        valor2Card2 = populacao2;
        printf("\nComparação do atributo: População\n");
        printf("Carta 1: %d   |   Carta 2: %d\n", populacao, populacao2);
    } else if (atributo2 == 2) {
        // Área
        resultado2 = (area > area2) ? 1 : ((area < area2) ? 2 : 0);
        valor2Card1 = area;
        valor2Card2 = area2;
        printf("\nComparação do atributo: Área\n");
        printf("Carta 1: %.2f   |   Carta 2: %.2f\n", area, area2);
    } else if (atributo2 == 3) {
        // PIB
        resultado2 = (pib > pib2) ? 1 : ((pib < pib2) ? 2 : 0);
        valor2Card1 = pib;
        valor2Card2 = pib2;
        printf("\nComparação do atributo: PIB\n");
        printf("Carta 1: %.2f   |   Carta 2: %.2f\n", pib, pib2);
    } else if (atributo2 == 4) {
        // Pontos Turísticos
        resultado2 = (pontostur > pontostur2) ? 1 : ((pontostur < pontostur2) ? 2 : 0);
        valor2Card1 = pontostur;
        valor2Card2 = pontostur2;
        printf("\nComparação do atributo: Pontos Turísticos\n");
        printf("Carta 1: %d   |   Carta 2: %d\n", pontostur, pontostur2);
    } else if (atributo2 == 5) {
        // Densidade Demográfica
        resultado2 = (densidadedem > densidadedem2) ? 1 : ((densidadedem < densidadedem2) ? 2 : 0);
        valor2Card1 = densidadedem;
        valor2Card2 = densidadedem2;
        printf("\nComparação do atributo: Densidade Demográfica\n");
        printf("Carta 1: %.2f   |   Carta 2: %.2f\n", densidadedem, densidadedem2);
    } else {
        printf("\nAtributo inválido para a segunda escolha!\n");
        return 1;
    }

    // Cálculo da soma dos dois atributos para cada carta
    somaCarta1 = valor1Card1 + valor2Card1;
    somaCarta2 = valor1Card2 + valor2Card2;

    // Impressão dos resultados das comparações dos atributos escolhidos
    printf("\n--- Resultados das Comparações ---\n");
    // Resultado do primeiro atributo
    if (resultado1 == 1 || resultado1 == 2) {
        char *vencedor = (resultado1 == 1) ? pais : pais2;
        double valorVencedor = (resultado1 == 1) ? valor1Card1 : valor1Card2;
        char *perdedor = (resultado1 == 1) ? pais2 : pais;
        double valorPerdedor = (resultado1 == 1) ? valor1Card2 : valor1Card1;
        
        printf("Primeiro atributo:\n");
        printf("Vencedor: %s - Valor: %.2f\n", vencedor, valorVencedor);
        printf("País perdedor: %s - Valor: %.2f\n", perdedor, valorPerdedor);
    } else {
        printf("Primeiro atributo:\nEmpate:\n");
        printf("%s - Valor: %.2f\n", pais, valor1Card1);
        printf("%s - Valor: %.2f\n", pais2, valor1Card2);
    }
    
    // Resultado do segundo atributo
    if (resultado2 == 1 || resultado2 == 2) {
        char *vencedor = (resultado2 == 1) ? pais : pais2;
        double valorVencedor = (resultado2 == 1) ? valor2Card1 : valor2Card2;
        char *perdedor = (resultado2 == 1) ? pais2 : pais;
        double valorPerdedor = (resultado2 == 1) ? valor2Card2 : valor2Card1;
        
        printf("\nSegundo atributo:\n");
        printf("Vencedor: %s - Valor: %.2f\n", vencedor, valorVencedor);
        printf("Pís perdedor: %s - Valor: %.2f\n", perdedor, valorPerdedor);
    } else {
        printf("\nSegundo atributo:\nEmpate:\n");
        printf("%s - Valor: %.2f\n", pais, valor2Card1);
        printf("%s - Valor: %.2f\n", pais2, valor2Card2);
    }

    // Impressão da soma dos dois atributos para cada carta
    printf("\n--- Soma dos Dois Atributos em Cada Carta ---\n");
    printf("Carta 1 (%s): Soma = %.2f\n", pais, somaCarta1);
    printf("Carta 2 (%s): Soma = %.2f\n", pais2, somaCarta2);

    // Comparação da soma para exibir o vencedor do valor da soma
    if (somaCarta1 > somaCarta2)
        printf("Carta 1 (%s) venceu com soma %.2f maior que %.2f da Carta 2 (%s).\n", pais, somaCarta1, somaCarta2, pais2);
    else if (somaCarta1 < somaCarta2)
        printf("Carta 2 (%s) venceu com soma %.2f maior que %.2f Carta 1 (%s).\n", pais2, somaCarta2, somaCarta1, pais);
    else
        printf("Empate! Ambas as cartas possuem soma igual de %.2f.\n", somaCarta1);

    return 0;
}






