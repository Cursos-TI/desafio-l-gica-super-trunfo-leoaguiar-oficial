#include <stdio.h>

int main() {

   // Entrada de Dados
   
    // Primeira Carta

    char Estado1[3];         // Colocar um limite nas Siglas dos Estado ex: SP,RJ, etc...
    char Codigo1[10];        // Ajustar tamanho caso nescessário, palavra Código sem ´ para evitar algum tipo de erro de leitura
    char Cidade1[30];        // Nome da Cidade
    unsigned int Populacao1;          // População sem ~ para evitar algum tipo de erro de leitura
    int Turismo1;            // Turísmo sem o ´ para evitar algum tipo de erro de leitura
    float Area1;             // Área sem o ´para evitar akgum tipo de erro de leitura
    float PIB1;
    float Densidade1;
    float PIBPERCAPITA1;
    float SUPERPODER1; //Soma a População, área PIB, PIB per capita e densidade populacional invertidade para comparação e número de pontos turísticos

    // Segunda Carta

    char Estado2[3], Codigo2[10], Cidade2[30];
    unsigned int Populacao2;
    int Turismo2;
    float Area2, PIB2;
    float Densidade2, PIBPERCAPITA2;
    float SUPERPODER2; //Soma a População, área PIB, PIB per capita e densidade populacional invertidade (1 dividido por ela) para comparação e número de pontos turísticos

    // Primeira Carta

    printf(" *** Carta 01: ***\n");

    printf("Digite o Estado: \n");
    scanf("%2s", Estado1);  // %2s para garantir que leia apenas 2 caracteres

    printf("Digite o Código:\n");
    scanf("%9s", Codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a População: \n");
    scanf(" %d", &Populacao1);

    printf("Digite a Área: \n");
    scanf(" %f", &Area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    printf("Digite quantos Pontos de Turísticos tem: \n");
    scanf(" %d", &Turismo1);
  
      // Segunda Carta
    
    printf(" *** Carta 02: ***\n");

    printf("Digite o Estado: \n");
    scanf("%2s", Estado2);  // %2s para garantir que leia apenas 2 caracteres

    printf("Digite o Código:\n");
    scanf("%9s", Codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a População: \n");
    scanf(" %d", &Populacao2);

    printf("Digite a Área: \n");
    scanf(" %f", &Area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite quantos Pontos de Turísticos tem: \n");
    scanf(" %d", &Turismo2);

      // Saída de dados

      printf(" *** Carta 01: ***\n");
      printf("Estado: %s\n", Estado1);
      printf("Código: %s\n", Codigo1);
      printf("Nome da Cidade: %s\n", Cidade1);
      printf("População: %d\n", Populacao1);
      printf("Área: %.2f km²\n", Area1);
      printf("PIB: %.2f Bilhões de reais\n", PIB1);
      printf("Número de Pontos Turísticos %d\n", Turismo1);
      Densidade1 = (Populacao1 + Area1) / 2;
      printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
      PIBPERCAPITA1 = (PIB1 + Populacao1) / 2;
      printf("PIB PER CAPITA: R$%.2f Reais\n", PIBPERCAPITA1);
      Densidade1 = (1 / Densidade1); //1 dividido pela Densidade
      SUPERPODER1 = (Populacao1 + Area1 + PIB1 + Densidade1 + Turismo1); //Soma de quase todos os requisitos
      printf("SUPER PODER: %f \n", SUPERPODER1);

      printf(" *** Carta 02: ***\n");
      printf("Carta 02: \n");
      printf("Estado: %s\n", Estado2);
      printf("Código: %s\n", Codigo2);
      printf("Nome da Cidade: %s\n", Cidade2);
      printf("População: %d\n", Populacao2);
      printf("Área: %.2f km²\n", Area2);
      printf("PIB: %.2f Bilhões de reais\n", PIB2);
      printf("Número de Pontos Turísticos %d\n", Turismo2);
      Densidade2 = (Populacao2 + Area2) / 2;
      printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
      PIBPERCAPITA2 = (PIB2 + Populacao2) / 2;
      printf("PIB PER CAPITA: R$%.2f Reais\n", PIBPERCAPITA2);
      Densidade2 = (1 / Densidade2); //1 dividido pela Densidade
      SUPERPODER2 = (Populacao2 + Area2 + PIB2 + Densidade2 + Turismo2); //Soma de quase todos os requisitos
      printf("SUPER PODER: %f\n", SUPERPODER2);

      // Comparação de Cartas
      // Carta usada para comparação será Área;
      
      printf(" *** Comparação Área: ***\n");
      if ( Area1 > Area2){
        printf("Carta 1: %.2f\nCarta 2: %.2f\nResultado: Carta 1 (%s) venceu!\n", Area1, Area2, Cidade1);
      } else {
        printf("Carta 1: %.2f\nCarta 2: %.2f\nResultado: Carta 2 (%s) venceu!\n", Area1, Area2, Cidade1);
      }

      //Resultados

      printf(" *** RESULTADO: ***\n");
      printf("População: Carta 1 venceu (%d) \n", Populacao1 > Populacao2, (Populacao1 > Populacao2));
      printf("Área: Carta 1 venceu (%d) \n", Area1 > Area2, (Area1 > Area2));
      printf("PIB: Carta 1 venceu (%d) \n", PIB1 > PIB2, (PIB1 > PIB2));
      printf("Ponto Turistico: Carta 1 venceu (%d) \n", Turismo1 > Turismo2, (Turismo1 > Turismo2));
      printf("Densidade Populacional: Carta 2 venceu (%d) \n", Densidade1 < Densidade2, (Densidade1 < Densidade2));
      printf("PIB per Capita: Carta 1 venceu (%d) \n", PIBPERCAPITA1 > PIBPERCAPITA2, (PIBPERCAPITA1 > PIBPERCAPITA2));
      printf("Super Poder: Carta 1 venceu (%d) \n", SUPERPODER1 > SUPERPODER2, (SUPERPODER1 > SUPERPODER2));

    return 0;
}