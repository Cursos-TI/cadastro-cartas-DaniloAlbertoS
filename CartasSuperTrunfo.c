#include <stdio.h>
#include <string.h>

int main (){

    // criando variaveis
    char estado1, estado2;
    char codigo_carta1[20], codigo_carta2[20];
    char cidade1[50], cidade2[50];
    int p_turisticos1, p_turisticos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_carpita2;
    float superPoder1, superPoder2;

    // inserindo as informações com printf e coletando com scanf
    printf("=======================================================\n");
    printf("Ola seja bem vindo ao Super Trunfo\n");


    //-------- carta 1--------//
    printf("Digite a inicial do estado de A a H: \n");
    scanf(" %c",&estado1);// o espaco antes do %c limpa enter digitados antes.

    printf("Digite o codigo da carta, um numero de 01 a 04: \n");
    scanf(" %s", codigo_carta1);

    // limpando  o espaco do \n para a string abaixo
    getchar();

    printf("Digite o nome da cidade: \n");
        fgets(cidade1,50,stdin);
        cidade1[strcspn(cidade1, "\n")] = '\0'; // limpa o \n na memoria apos o fgets

    printf("Digite o numero da População: \n");
        scanf(" %lu",&populacao1);

    printf("Digite a área em Km²: \n");
        scanf(" %f",&area1);
        

    printf("Digite o PIB do Estado: \n");
        scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turistícos na cidade: \n");
        scanf(" %d", &p_turisticos1);

    // adicionando densidade populacional
    densidade1 = (float) populacao1 / area1;

    //adicionando pib per capita
    pib_per_capita1 = (float) populacao1 / pib1;

    // apresentando os dados na tela 
    printf("Segue os dados da carta1\n");

    printf("=======================================================\n");
    printf("Carta1: \n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %c%s \n",estado1,codigo_carta1); //aqui estou pegando o estado1 digitado com %c e juntando com o codigo da carta1%c ficando : %C%C
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n",populacao1);
    printf("Area: %.2f Km²\n",area1);
    printf("PIB: %.2f\n",pib1);
    printf("Numero de Pontos Turisticos: %d \n",p_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
     superPoder1 = (float)populacao1 + area1 + pib1 + (float) p_turisticos1
                    + pib_per_capita1 + densidade1;
    printf("SuperPoder: %f \n", superPoder1);
    printf("=======================================================\n");

    getchar();

    // pegando dados da carta 2

    printf("Digite a inicial do estado de A a H: \n");
    scanf(" %c",&estado2);

    printf("Digite o codigo da carta, um numero de 01 a 04: \n");
    scanf(" %s", codigo_carta2);

    // limpando  o espaco do \n para a string abaixo
    getchar();

    printf("Digite o nome da cidade: \n");
        fgets(cidade2,50,stdin);
        cidade2[strcspn(cidade2, "\n")] ='\0'; // limpa o \n na memoria apos o fgets

    printf("Digite o numero da População: \n");
        scanf(" %lu",&populacao2);

    printf("Digite a área em Km²: \n");
        scanf(" %f",&area2);

    printf("Digite o PIB do Estado: \n");
        scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turistícos na cidade: \n");
        scanf(" %d", &p_turisticos2);

     // adicionando densidade populacional
    densidade2 = (float) populacao2 / area2;

    //adicionando pib per capita
    pib_per_carpita2 = (float) populacao2 / pib2;

     // apresentando os dados na tela 
    printf("Segue os dados da carta2\n");

    printf("=======================================================\n");
    printf("Carta2: \n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %c%s \n",estado2,codigo_carta2); //aqui estou pegando o estado2 digitado com %c e juntando com o codigo da carta2%c ficando : %C%C
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n",populacao2);
    printf("Area: %.2f Km²\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("Numero de Pontos Turisticos: %d \n",p_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_carpita2);
   
    superPoder2 = (float)populacao2 + area2 + pib2 + (float) p_turisticos2
                    + pib_per_carpita2 + densidade2;
    printf("SuperPoder: %f \n", superPoder2);
    printf("=======================================================\n");


    printf("-----------Comparando as cartas-------------\n");

     int pontos1= 0, pontos2=0;
     int opcao;

    printf("Escolha uma das opcoes para comparar as cartas \n");
    printf("1- Populacao \n");
    printf("2- Area \n");
    printf("3- PIB \n");
    printf("4- Pontos turisticos \n");
    printf("5- Densidade Populacional \n");
    printf("6- PIB per Capita \n");
    printf("7- Super Poder \n");
    printf("Escolha: ");
    scanf(" %d", &opcao);

    // menu com switch

    switch (opcao)
    {
    case 1:
        printf("================================================================= \n");
        printf("Carta 1 - Cidade: %s X Carta 2 - Cidade: %s \n", cidade1, cidade2);
        printf("População da carta 1: %lu\n", populacao1);
        printf("População da carta 2: %lu \n", populacao2);
    
        if(populacao1 > populacao2){
        printf("Carta 1 ganhou \n");
        pontos1++; 
        }else if(populacao1 < populacao2){
        printf("carta 2 venceu \n");
        pontos2++;
        }else{
        printf("Deu empate!! \n");
        pontos1++;
        pontos2++;
        }
        printf("================================================================= \n");
        break;
    case 2:
        printf("Carta 1 - Cidade: %s X Carta 2 - Cidade: %s \n", cidade1, cidade2);
        printf("================================================================= \n");
        printf("Area da carta1: %.2f \n", area1);
         printf("Area da carta2: %.2f\n", area2);

        if(area1 > area2){
            printf("Carta 1 ganhou \n");
            pontos1++; 
        }else if(area1 < area2){
            printf("carta 2 venceu \n");
             pontos2++;
        }else{
            printf("Deu empate!! \n");
            pontos1++;
            pontos2++;
    }
        printf("================================================================= \n");
       
        break;
    case 3:
        printf("Carta 1 - Cidade: %s X Carta 2 - Cidade: %s \n", cidade1, cidade2);
        printf("================================================================= \n");
        printf("PIB da carta1: %.2f \n", pib1);
        printf("PIB da carta2: %.2f \n", pib2);

        if(pib1 > pib2){
            printf("Carta 1 ganhou \n");
            pontos1++; 
        }else if(pib1 < pib2){
            printf("carta 2 venceu \n");
             pontos2++;
         }else{
             printf("Deu empate!! \n");
            pontos1++;
             pontos2++;
    }
        printf("================================================================= \n");
        
        break;
    case 4:
        printf("Carta 1 - Cidade: %s X Carta 2 - Cidade: %s \n", cidade1, cidade2);
        printf("================================================================= \n");
        printf("Pontos Turisticos da carta1: %d \n", p_turisticos1);
        printf("Pontos turisticos da carta2: %d \n", p_turisticos2);

         if(p_turisticos1 > p_turisticos2){
             printf("Carta 1 ganhou \n");
             pontos1++; 
         }else if(p_turisticos1 < p_turisticos2){
             printf("carta 2 venceu \n");
             pontos2++;
         }else{
            printf("Deu empate!! \n");
            pontos1++;
            pontos2++;
    }
        printf("================================================================= \n");
      
        break;
    case 5:
        printf("Carta 1 - Cidade: %s X Carta 2 - Cidade: %s \n", cidade1, cidade2);
        printf("================================================================= \n");
        printf("Densidade da carta1: %.2f \n", densidade1);
        printf("Densidade da carta2: %.2f \n", densidade2);

        if(densidade1 < densidade2){
            printf("Carta 1 ganhou \n");
            pontos1++; 
        }else if(densidade1 > densidade2){
            printf("carta 2 venceu \n");
            pontos2++;
        }else{
            printf("Deu empate!! \n");
            pontos1++;
            pontos2++;
    }
        printf("================================================================= \n");
        
        break;
    case 6:
        printf("Carta 1 - Cidade: %s X Carta 2 - Cidade: %s \n", cidade1, cidade2);
        printf("================================================================= \n");
        printf("PIB Per Capita da carta1: %.2f \n", pib_per_capita1);
        printf("PIB Per Capita da carta2: %.2f \n", pib_per_carpita2);

        if(pib_per_capita1 > pib_per_carpita2){
            printf("Carta 1 ganhou \n");
            pontos1++; 
         }else if(pib_per_capita1 < pib_per_carpita2){
            printf("carta 2 venceu \n");
            pontos2++;
        }else{
            printf("Deu empate!! \n");
            pontos1++;
            pontos2++;
    }
        printf("================================================================= \n");
       
        break;
    case 7:
        printf("Carta 1 - Cidade: %s X Carta 2 - Cidade: %s \n", cidade1, cidade2);
        printf("================================================================= \n");
        printf("O superpoder da carta1: %.2f \n", superPoder1);
        printf("O superpoder da carta2: %.2f \n", superPoder2);

        if(superPoder1 > superPoder2){
            printf("Carta 1 ganhou \n");
            pontos1++; ;
        }else if(superPoder1 < superPoder2){
            printf("carta 2 venceu \n");
            pontos2++;
        }else{
            printf("Deu empate!! \n");
            pontos1++;
            pontos2++;
    }
        printf("================================================================= \n");
        
        break;
    
    default:
        printf("Opcao invalida. Encerrando  o jogo. \n");
        break;
    }

    if(pontos1 > pontos2){
        printf("A Grande vencedora foi a carta1! \n");
    }else if(pontos1 < pontos2){
        printf("A grande vencedora foi a carta2! \n");
    }else{
        printf("Deu empate entre as cartas \n");
    }
  
    return 0;
}
