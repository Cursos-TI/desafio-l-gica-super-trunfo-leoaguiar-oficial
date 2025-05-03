#include <stdio.h>

int main() {
    // Menu Do SuperTrunfos
    int escolhaJogador, primeiroAtriubuto, segundoAtributo;
    int resultado1, resultado2;

    printf(" ||| CARTAS SUPER TRUNFOS |||\n");
    printf("| Escolha uma das opções abaixo⤵ |\n");
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("Selecione: ");
    scanf("%d", &escolhaJogador);

    // ======= Entrada de Dados =======

    // Primeira Carta
    char Estado1[10], Codigo1[10], Cidade1[30];
    unsigned int Populacao1;
    int Turismo1;
    float Area1, PIB1, Densidade1, PIBPERCAPITA1, SUPERPODER1;

    // Segunda Carta
    char Estado2[10], Codigo2[10], Cidade2[30];
    unsigned int Populacao2;
    int Turismo2;
    float Area2, PIB2, Densidade2, PIBPERCAPITA2, SUPERPODER2;

    // === Carta 1 ===
    printf(" *** Carta 01: ***\n");
    printf("Digite o Estado: \n");
    scanf("%10s", Estado1);

    printf("Digite o Código:\n");
    scanf("%9s", Codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a População: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite quantos Pontos de Turísticos tem: \n");
    scanf("%d", &Turismo1);

    // === Carta 2 ===
    printf(" *** Carta 02: ***\n");
    printf("Digite o Estado: \n");
    scanf("%10s", Estado2);

    printf("Digite o Código:\n");
    scanf("%9s", Codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite quantos Pontos de Turísticos tem: \n");
    scanf("%d", &Turismo2);

    // ======= Comparação de Cartas =======

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    scanf("%d", &primeiroAtriubuto);

    switch (primeiroAtriubuto) {
        case 1:
            printf("||| Você escolheu População! |||\n");
            printf("Cidade 1: %s - %d\n", Cidade1, Populacao1);
            printf("Cidade 2: %s - %d\n", Cidade2, Populacao2);
            resultado1 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("||| Você escolheu Área! |||\n");
            printf("Cidade 1: %s - %.2f km²\n", Cidade1, Area1);
            printf("Cidade 2: %s - %.2f km²\n", Cidade2, Area2);
            resultado1 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("||| Você escolheu PIB! |||\n");
            printf("Cidade 1: %s - %.2f\n", Cidade1, PIB1);
            printf("Cidade 2: %s - %.2f\n", Cidade2, PIB2);
            resultado1 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            printf("||| Você escolheu Pontos Turísticos! |||\n");
            printf("Cidade 1: %s - %d\n", Cidade1, Turismo1);
            printf("Cidade 2: %s - %d\n", Cidade2, Turismo2);
            resultado1 = Turismo1 > Turismo2 ? 1 : 0;
            break;
        case 5:
            printf("||| Você escolheu Densidade Populacional! |||\n");
            printf("Cidade 1: %s - %.2f\n", Cidade1, Densidade1);
            printf("Cidade 2: %s - %.2f\n", Cidade2, Densidade2);
            resultado1 = Densidade1 < Densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
    }

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtriubuto == segundoAtributo){
        printf("Você escolheu o mesmo atributo! O jogo será encerrado.\n");
        return 1;
      }

    switch (segundoAtributo) {
        case 1:
            printf("||| Você escolheu População! |||\n");
            printf("Cidade 1: %s - %d\n", Cidade1, Populacao1);
            printf("Cidade 2: %s - %d\n", Cidade2, Populacao2);
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("||| Você escolheu Área! |||\n");
            printf("Cidade 1: %s - %.2f km²\n", Cidade1, Area1);
            printf("Cidade 2: %s - %.2f km²\n", Cidade2, Area2);
            resultado2 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("||| Você escolheu PIB! |||\n");
            printf("Cidade 1: %s - %.2f\n", Cidade1, PIB1);
            printf("Cidade 2: %s - %.2f\n", Cidade2, PIB2);
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            printf("||| Você escolheu Pontos Turísticos! |||\n");
            printf("Cidade 1: %s - %d\n", Cidade1, Turismo1);
            printf("Cidade 2: %s - %d\n", Cidade2, Turismo2);
            resultado2 = Turismo1 > Turismo2 ? 1 : 0;
            break;
        case 5:
            printf("||| Você escolheu Densidade Populacional! |||\n");
            printf("Cidade 1: %s - %.2f\n", Cidade1, Densidade1);
            printf("Cidade 2: %s - %.2f\n", Cidade2, Densidade2);
            resultado2 = Densidade1 < Densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
    }

    // Resultado da Comparação
    if (resultado1 && resultado2) {
        printf("Carta 1 venceu!\n");
    } else if (resultado1 != resultado2) {
        printf("Empatou!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }

    // ======= Saída de Dados (Resumo) =======

    printf("\n *** CARTA 01 ***\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", Estado1, Codigo1, Cidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", Populacao1, Area1, PIB1);
    printf("Pontos Turísticos: %d\n", Turismo1);
    Densidade1 = (Populacao1 + Area1) / 2;
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    PIBPERCAPITA1 = (PIB1 + Populacao1) / 2;
    printf("PIB per capita: R$ %.2f\n", PIBPERCAPITA1);
    Densidade1 = 1 / Densidade1;
    SUPERPODER1 = Populacao1 + Area1 + PIB1 + Densidade1 + Turismo1;
    printf("Super Poder: %.2f\n", SUPERPODER1);

    printf("\n *** CARTA 02 ***\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", Estado2, Codigo2, Cidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", Populacao2, Area2, PIB2);
    printf("Pontos Turísticos: %d\n", Turismo2);
    Densidade2 = (Populacao2 + Area2) / 2;
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    PIBPERCAPITA2 = (PIB2 + Populacao2) / 2;
    printf("PIB per capita: R$ %.2f\n", PIBPERCAPITA2);
    Densidade2 = 1 / Densidade2;
    SUPERPODER2 = Populacao2 + Area2 + PIB2 + Densidade2 + Turismo2;
    printf("Super Poder: %.2f\n", SUPERPODER2);

    // Resultado Final
    printf("\n *** RESULTADO FINAL ***\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Turismo1 > Turismo2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade1 < Densidade2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", PIBPERCAPITA1 > PIBPERCAPITA2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SUPERPODER1 > SUPERPODER2);

    return 0;
}
