#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
int main() {
    
        char A[10], B[10]; //estados estão representados por letras A, B ... com até 10 carateres//
        char A01[10], B04[10]; //codigo da carta//
        char cidade1[10], cidade2[10]; //nome de cidade pode ter até 10 caracteres//
        int Populacao_A01, Populacao_B04; //será pedido o tamanho da população//
        float Area_A01, Area_B04; //em Km²//
        float PIB_A01, PIB_B04;
        int Numero_de_pontos_turisticos;
           
        //declaração de variáveis de cálculo de atributos// 

        float DensidadePopulacional_A01 = Populacao_A01 / Area_A01;
        float PIBpercapta_A01 = PIB_A01 / Populacao_A01;
        float DensidadePopulacional_B04 = Populacao_B04 / Area_B04;
        float PIBpercapta_B04 = PIB_B04 / Populacao_B04;


       
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    
    printf("CARTA 1 \n");

    printf("Digite o nome do Estado: \n"); //saída da interpelação do nome do estado//
    scanf("%s", &A, &B); //entrada do usuário com até 10 caracteres (variável char)//


    printf("Digite o código da sua carta: \n"); //saída da interpelação do código da carta//
    scanf("%s", &A01, &B04); //entrada do código da carta (variável char)//


    printf("Digite o nome da cidade: \n"); //saída da interpelação do nome da cidade//
    scanf("%s", &cidade1); //entrada do nome da cidade (variável char)//


    printf("Digite o tamanho da população da cidade: \n"); //saída da interpelação da população//
    scanf("%d", &Populacao_A01); //entrada do tamanho da população (variável inteira)


    printf("Digite o tamanho da área territorial: \n"); //saída da interpelação sobre a área//
    scanf("%f", &Area_A01); //entrada do tamanho da área (varilavel float)//


    printf("Digite o valor do PIB: \n"); //saída da interpelação do PIB//
    scanf("%f", &PIB_A01); //entrada do valor do PIB (variável float)


    printf("Digite o número de pontos turísticos do município: \n"); //saída da interpelação dos pontos turísticos//
    scanf("%d", &Numero_de_pontos_turisticos); //entrada do número de pontos turísticos
    printf("\n"); //comando para pular linha e melhorar a organização//
   

    printf("CARTA 2 \n");


    printf("Digite o nome do Estado: \n"); //início da sequência referente à carta 2 - repetiçao de códigos//
    scanf("%s", &B);


    printf("Digite o código da sua carta: \n");
    scanf("%s", &B04);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);


    printf("Digite o tamanho da população da cidade: \n");
    scanf("%d", &Populacao_B04);


    printf("Digite o tamanho da área territorial: \n");
    scanf("%f", &Area_B04);


    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB_B04);


    printf("Digite o número de pontos turísticos do município: \n");
    scanf("%d", &Numero_de_pontos_turisticos);
    printf("\n");

         DensidadePopulacional_A01 = Populacao_A01 / Area_A01;
         PIBpercapta_A01 = PIB_A01 / Populacao_A01;
         DensidadePopulacional_B04 = Populacao_B04 / Area_B04;
         PIBpercapta_B04 = PIB_B04 / Populacao_B04;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("carta 1:\n"); //impressão com saída "carta 1"//
    printf("Estado: %s\n", A); //impressão com saída do nome do estado//
    printf("Código: %s\n", A01); //impressão com saída do código da carta//
    printf("Nome da Cidade: %s\n", cidade1); //impressão com saída do nome da cidade//
    printf("População: %d\n", Populacao_A01); //impressão com saída da população//
    printf("Área: %f km²\n", Area_A01); //impressão com saída da área; acrescentei a unidade depois da variável para sais na impressão//
    printf("PIB: %f bilhões de reais\n", PIB_A01); //impressão com saída do valor do PIB; acrescentei a unidade depois da variável para sais na impressão//
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos); //impressão com saída dos pontos turísticos//
    printf("DensidadePopulacional: %e\n", DensidadePopulacional_A01);
    printf("PIBpercapta: %e\n", PIBpercapta_A01);
    printf("\n"); //comando para melhorar organização - pular linha//


    printf("carta 2:\n");
    printf("Estado: %s\n", B);
    printf("Código: %s\n", B04);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", Populacao_B04);
    printf("Área: %f km²\n", Area_B04);
    printf("PIB: %f bilhões de reais\n", PIB_B04);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos);
    printf("DensidadePopulacional: %f\n", DensidadePopulacional_B04);
    printf("PIBpercapta: %f\n", PIBpercapta_B04);
    printf("\n");
    printf("\n");

  


    return 0;
}
