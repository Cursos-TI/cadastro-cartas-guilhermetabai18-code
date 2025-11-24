#include <stdio.h>

int main(){

    // Área para definir variáveis para amrmazenar as propriedades das cidades N1

        char estado, estado2, codigo[20], código2[20], nomecidade[20], nomecidade2[20];
        int população, população2, pontosTuristicos, pontosTuristicos2;
        float pib, pib2, área, área2;

    // Entrada de dados para carta N1

        printf("Digite uma letra de 'A á H' para representar o estado: \n");
        scanf(" %c", &estado);

        printf("Digite o código da carta N1 'A letra do estado seguido de um numero': \n");
        scanf(" %s", &codigo);

        printf("Digite o nome da cidade: \n");
        scanf(" %s", &nomecidade);

        printf("População total da cidade: \n");
        scanf(" %d", &população);

        printf("Digite a área em km²: \n");
        scanf(" %f", &área);

        printf("Digite o PIB da cidade:R$ \n");
        scanf(" %f", &pib);

        printf("Digite a quantidade de pontos turisticos que existem na cidade: \n");
        scanf(" %d", &pontosTuristicos);

    // Entrada de dados ara a carta N2

        printf("Digite uma letra de 'A á H' para representar o estado: \n");
        scanf(" %c", &estado2);

        printf("Digite o código da carta N2 'A letra do estado seguido de um numero': \n");
        scanf(" %s", &código2);

        printf("Digite o nome da cidade: \n");
        scanf(" %s", &nomecidade2);

        printf("População total da cidade: \n");
        scanf(" %d", &população2);

        printf("Digite a área em km²: \n");
        scanf(" %f", &área2);

        printf("Digite o PIB da cidade:R$ \n");
        scanf(" %f", &pib2);

        printf("Digite a quantidade de pontos turisticos que existem na cidade: \n");
        scanf(" %d", &pontosTuristicos2);

    // Área para a exibição de dados das cidades

        printf("\nCarta N1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da cidade: %s\n", nomecidade);
        printf("População: %d\n", população);
        printf("Área total: %.3fkm²\n", área);
        printf("PIB: R$%.6f\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

     // Exibição dos dados da carta N2

        printf("\nCarta N2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", código2);
        printf("Nome da cidade: %s\n", nomecidade2);
        printf("População: %d\n", população2);
        printf("Área total: %.3fkm²\n", área2);
        printf("PIB: R$%.6f\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
return 0;
}
