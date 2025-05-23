#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

int  main(){
        char estado1[40], estado2[40]; 
        char codigo1[40], codigo2[10]; 
        char cidade1[20], cidade2[20]; 
        int populacao1, populacao2; 
        float area1, area2; 
        float PIB1, PIB2;
        int pontos_turisticos1, pontos_turisticos2;
        float densidade_demografica1;
        float densidade_demografica2;
        float PIBpercapta1;
        float PIBpercapta2;

           
        
       
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    
    printf("*** CARTA 1 ***\n\n\n");

    printf("Digite o nome do Estado: \n"); //saída da interpelação do nome do estado//
    scanf("%s", &estado1); //entrada do usuário com até 10 caracteres (variável char)//


    printf("Digite o código da sua carta: \n"); //saída da interpelação do código da carta//
    scanf("%s", &codigo1); //entrada do código da carta (variável char)//


    printf("Digite o nome da cidade: \n"); //saída da interpelação do nome da cidade//
    scanf("%s", &cidade1); //entrada do nome da cidade (variável char)//


    printf("Digite o tamanho da população da cidade: \n"); //saída da interpelação da população//
    scanf("%d", &populacao1); //entrada do tamanho da população (variável inteira)


    printf("Digite o tamanho da área territorial: \n"); //saída da interpelação sobre a área//
    scanf("%f", &area1); //entrada do tamanho da área (varilavel float)//


    printf("Digite o valor do PIB: \n"); //saída da interpelação do PIB//
    scanf("%f", &PIB1); //entrada do valor do PIB (variável float)


    printf("Digite o número de pontos turísticos do município: \n"); //saída da interpelação dos pontos turísticos//
    scanf("%d", &pontos_turisticos1); //entrada do número de pontos turísticos
    printf("\n\n"); //comando para pular linha e melhorar a organização//
 
    //declaração de variáveis para cálculo de atributos// 
    densidade_demografica1 = (float) populacao1 / area1;
    PIBpercapta1 = (float) PIB1 /  populacao1;


    printf("*** CARTA 2 ***\n\n\n");

    printf("Digite o nome do Estado: \n"); //início da sequência referente à carta 2 - repetiçao de códigos//
    scanf("%s", &estado2);


    printf("Digite o código da sua carta: \n");
    scanf("%s", &codigo2);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);


    printf("Digite o tamanho da população da cidade: \n");
    scanf("%d", &populacao2);


    printf("Digite o tamanho da área territorial: \n");
    scanf("%f", &area2);


    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB2);


    printf("Digite o número de pontos turísticos do município: \n");
    scanf("%d", &pontos_turisticos2);
    printf("\n\n");

    densidade_demografica2 = (float) populacao2 / area2;
    PIBpercapta2 = (float) PIB2 /  populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    printf("carta 1:\n"); //impressão com saída "carta 1"//
    printf("Estado: %s\n", estado1); //impressão com saída do nome do estado//
    printf("Código: %s\n", codigo1); //impressão com saída do código da carta//
    printf("Nome da Cidade: %s\n", cidade1); //impressão com saída do nome da cidade//
    printf("População: %d\n", populacao1); //impressão com saída da população//
    printf("Área: %.2f km²\n", area1); //impressão com saída da área; acrescentei a unidade depois da variável para sais na impressão//
    printf("PIB: %.2f bilhões de reais\n", PIB1); //impressão com saída do valor do PIB; acrescentei a unidade depois da variável para sais na impressão//
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); //impressão com saída dos pontos turísticos//
    printf("Densidade Populacional: %.2f hab/Km2\n", densidade_demografica1);
    printf("PIB per capta: %.2f reais\n", PIBpercapta1);
    printf("\n\n"); //comando para melhorar organização - pular linha//


    printf("carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_demografica2);
    printf("PIB per capta: %.2f\n", PIBpercapta2);
    printf("\n\n");
    
    //Determinar carta vencedora utilizando if e if-else

    printf("Carta 1 = %s: = %d\n ", cidade1, populacao1);
    printf("Carta 2 = %s: = %d\n ", cidade2, populacao2);

    if(populacao1 > populacao2) {
        printf("Carta 1 (%s) Venceu! \n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu! \n", cidade2);
    }

    return 0;
}
