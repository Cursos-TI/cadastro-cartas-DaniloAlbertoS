#include <stdio.h>

int main (){

    // criando variaveis
    char estado1, estado2;
    char codigo_carta1[20], codigo_carta2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, p_turisticos1, p_turisticos2;
    float area1, area2, pib1, pib2;

    // inserindo as informações com printf e coletando com scanf
    printf("=======================================================\n");
    printf("Ola seja bem vindo ao Super Trunfo\n");

    printf("Digite a inicial do estado de A a H: \n");
    scanf("%c",&estado1);

    printf("Digite o codigo da carta, um numero de 01 a 04: \n");
    scanf("%s", codigo_carta1);

    // limpando  o espaco do \n para a string abaixo
    getchar();

    printf("Digite o nome da cidade: \n");
        fgets(cidade1,50,stdin);
        cidade1[strcspn(cidade1, "\n")] = '\0'; // limpa o \n na memoria apos o fgets

    printf("Digite o numero da População: \n");
        scanf("%d",&populacao1);

    printf("Digite a área em Km²: \n");
        scanf("%f",&area1);

    printf("Digite o PIB do Estado: \n");
        scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turistícos na cidade: \n");
        scanf("%d", &p_turisticos1);

    // apresentando os dados na tela 
    printf("Segue os dados da carta1\n");

    printf("=======================================================\n");
    printf("Carta1: \n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %c%s \n",estado1,codigo_carta1); //aqui estou pegando o estado1 digitado com %c e juntando com o codigo da carta1%c ficando : %C%C
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f Km²\n",area1);
    printf("PIB: %.2f\n",pib1);
    printf("NUmero de Pontos Turisticos: %d \n",p_turisticos1);
    printf("=======================================================\n");

    getchar();

    // pegando dados da carta 2

    printf("Digite a inicial do estado de A a H: \n");
    scanf("%c",&estado2);

    printf("Digite o codigo da carta, um numero de 01 a 04: \n");
    scanf("%s", codigo_carta2);

    // limpando  o espaco do \n para a string abaixo
    getchar();

    printf("Digite o nome da cidade: \n");
        fgets(cidade2,50,stdin);
        cidade2[strcspn(cidade2, "\n")] ='\0'; // limpa o \n na memoria apos o fgets

    printf("Digite o numero da População: \n");
        scanf("%d",&populacao2);

    printf("Digite a área em Km²: \n");
        scanf("%f",&area2);

    printf("Digite o PIB do Estado: \n");
        scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turistícos na cidade: \n");
        scanf("%d", &p_turisticos2);

     // apresentando os dados na tela 
    printf("Segue os dados da carta2\n");

    printf("=======================================================\n");
    printf("Carta2: \n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %c%s \n",estado2,codigo_carta2); //aqui estou pegando o estado2 digitado com %c e juntando com o codigo da carta2%c ficando : %C%C
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f Km²\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("NUmero de Pontos Turisticos: %d \n",p_turisticos2);
    printf("=======================================================\n");
    
    return 0;
}
