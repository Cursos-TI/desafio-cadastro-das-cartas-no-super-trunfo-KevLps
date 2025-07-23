#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 char estado [10], estado1 [10];
        char cidade[20], cidade1 [20];
        int  codigo, codigo1;
        double area, area1, populacao, populacao1;
        float pib, pib1;
        int turismo, turismo1;

        // A seguir, serão solicitados os dados das cartas: 

        printf ("Informe a letra para o estado esolhido: \n");
        scanf ("%c", &estado);

        printf ("Informe o código de 1 a 4 para a carta: \n");
        scanf ("%d", &codigo);

        printf ("Informe o nome da cidade: \n");
        scanf ("%s", &cidade);

        printf ("Informe o número de habitantes na cidade: \n");
        scanf ("%e", &populacao);

        printf ("informe a área da cidade: \n");
        scanf ("%f", &area);

        printf ("Informe o PIB da cidade: \n");
        scanf ("%f", &pib);

        printf ("Informe a quantidade de pontos turisticos: \n");
        scanf ("%d", &turismo);

        // Após os dados serem coletados, será informada carta descrita pelo usuário: 
         
    

        printf ("Informe os dados da segunda carta: \n");

        printf ("Informe a letra para o estado esolhido: \n");
        scanf ("%c", &estado1);

        printf ("Informe o código de 1 a 4 para a carta: \n");
        scanf ("%d", &codigo1);

        printf ("Informe o nome da cidade: \n");
        scanf ("%s", &cidade1);

        printf ("Informe o número de habitantes na cidade: \n");
        scanf ("%e", &populacao1);

        printf ("informe a área da cidade: \n");
        scanf ("%f", &area1);

        printf ("Informe o PIB da cidade: \n");
        scanf ("%f", &pib1);

        printf ("Informe a quantidade de pontos turisticos: \n");
        scanf ("%d", &turismo1);

         printf ("Carta 1: \n");
        printf ("Estado: %c\n", estado); 
        printf ("Código: %d\n", codigo);
        printf ("Nome da cidade: %s\n", cidade); 
        printf ("População: %e\n", populacao);
        printf ("Área: %f km^2\n", area);
        printf ("PIB: %f bilhões de reais\n", pib);
        printf ("Número de pontos turistiscos: %d\n", turismo);

        printf ("Carta 2: \n");
        printf ("Estado: %c\n", estado1); 
        printf ("Código: %d\n", codigo1);
        printf ("Nome da cidade: %s\n", cidade1); 
        printf ("População: %e\n", populacao1);
        printf ("Área: %f km^2\n", area1);
        printf ("PIB: %f bilhões de reais\n", pib1);
        printf ("Número de pontos turistiscos: %d\n", turismo1);

    return 0;
    
}
