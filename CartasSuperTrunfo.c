#include <stdio.h>

int main() {

    /* Olá!!!! Seja Bem vindo a programação de cartas do Super Trunfo (NOVATO).
       A seguir você verá 2 exemplos de cartas prontas, já programadas para auxiliar no processo.
       Após fique a vontade para criar as suas cartas e divirta-se!!!! */

    printf("SUPER TRUNFO NOVATO \n\n");
    printf("Novo commit\n");
    printf("EXEMPLOS DE CARTAS \n\n");

    // Carta 1 pronta
    char Estado1[50] = "Amazonas";
    char CodigodaCarta1[50] = "A01";
    char Nomedacidade1[50] = "Manaus";
    int Populacao1 = 289;
    float Area1 = 11401.0f;  
    float PIB1 = 44.5f;
    int PontosTuristicos1 = 34;

    printf("Carta 01 \n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", CodigodaCarta1);
    printf("Nome da Cidade: %s\n", Nomedacidade1);
    printf("População: %d mil Habitantes\n", Populacao1);
    printf("Área: %.2f Km2\n", Area1);
    printf("PIB: %.1f Bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n\n", PontosTuristicos1);

    // Carta 2 pronta
    char Estado2[50] = "Rio de Janeiro";
    char CodigodaCarta2[50] = "G02";
    char Nomedacidade2[50] = "Rio de Janeiro";
    int Populacao2 = 16;
    float Area2 = 43.696f;
    float PIB2 = 1.15f;
    int PontosTuristicos2 = 152;

    printf("Carta 02\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", CodigodaCarta2);
    printf("Nome da Cidade: %s\n", Nomedacidade2);
    printf("População: %d mil Habitantes\n", Populacao2);
    printf("Área: %.3f km2\n", Area2);
    printf("PIB: %.2f Trilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n\n", PontosTuristicos2);

    printf("Agora vamos dar continuidade e criar novas cartas?\n\n");

    // Carta 3 entrada do usuário
    printf("CARTA 3\n");

    char Estado3[50];
    char CodigodaCarta3[4];  
    char Nomedacidade3[50];
    int Populacao3;
    float Area3;
    float PIB3;
    int PontosTuristicos3;

    printf("Digite o seu Estado:\n");
    scanf(" %[^\n]", Estado3);

    printf("Digite o código da sua carta:\n");
    scanf(" %3s", CodigodaCarta3);

    printf("Digite o nome de uma cidade:\n");
    scanf(" %[^\n]", Nomedacidade3);

    printf("Digite a população (mil habitantes):\n");
    scanf("%i", &Populacao3);

    printf("Digite a extensão (Km2):\n");
    scanf("%f", &Area3);

    printf("Digite o PIB (milhões):\n");
    scanf("%f", &PIB3);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &PontosTuristicos3);

    printf("\nResumo da CARTA 3:\n");
    printf("Estado: %s\n", Estado3);
    printf("Código: %s\n", CodigodaCarta3);
    printf("Cidade: %s\n", Nomedacidade3);
    printf("População: %d mil habitantes\n", Populacao3);
    printf("Área: %.2f Km2\n", Area3);
    printf("PIB: %.2f milhões\n", PIB3);
    printf("Pontos Turísticos: %d\n\n", PontosTuristicos3);

    // Carta 4 entrada do usuário
    printf("CARTA 4\n");

    char Estado4[50];
    char CodigodaCarta4[4];
    char Nomedacidade4[50];
    int Populacao4;
    float Area4;
    float PIB4;
    int PontosTuristicos4;

    printf("Digite o seu Estado:\n");
    scanf(" %[^\n]", Estado4);

    printf("Digite o código da sua carta:\n");
    scanf(" %3s", CodigodaCarta4);

    printf("Digite o nome de uma cidade:\n");
    scanf(" %[^\n]", Nomedacidade4);

    printf("Digite a população (mil habitantes):\n");
    scanf("%i", &Populacao4);

    printf("Digite a extensão (Km2):\n");
    scanf("%f", &Area4);

    printf("Digite o PIB (milhões):\n");
    scanf("%f", &PIB4);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &PontosTuristicos4);

    printf("\nResumo da CARTA 4:\n");
    printf("Estado: %s\n", Estado4);
    printf("Código: %s\n", CodigodaCarta4);
    printf("Cidade: %s\n", Nomedacidade4);
    printf("População: %d mil habitantes\n", Populacao4);
    printf("Área: %.2f Km2\n", Area4);
    printf("PIB: %.2f milhões\n", PIB4);
    printf("Pontos Turísticos: %d\n\n", PontosTuristicos4);

        printf(" Parabéns!!! Você criou mais 2 cartas no jogo Super trunfo.\n");


    return 0;
}
 