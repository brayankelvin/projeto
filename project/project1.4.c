#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço de memória 
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() {
    // Função de variáveis/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    int continuar = 1; // variavel para mandar no loop
    
    // Criação de variáveis/string
    while (continuar) // loop para continuar os registro
	{ 
	
    // CPF
    printf("Digite o CPF a ser cadastrado: "); // coleta a informação que o usuário digita
    scanf("%s", cpf); // %s refere-se a string
    
    strcpy(arquivo, cpf); // responsável por copiar os valores das strings
    
    FILE *file; // cria arquivo
    file = fopen(arquivo, "w"); // criar arquivo, a string "w" faz a função de nomear o arquivo salvo
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, cpf); // salva o que o usuário escrever
    fclose(file); // fecha o arquivo
    
    // para colocar vírgula
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, ","); // escreve uma vírgula depois do que foi colocado pelo usuário
    fclose(file); // fechar o arquivo
    
    // NOME
    printf("Digite o NOME a ser cadastrado: "); // salva o que o usuário escrever
    scanf("%s", nome); // %s refere-se a string
    
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, nome); // salva o que o usuário escrever
    fclose(file); // fechar o arquivo
    
    // para colocar vírgula
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, ","); // escreve uma vírgula depois do que foi colocado pelo usuário
    fclose(file); // fechar o arquivo
    
    // SOBRENOME
    printf("Digite o SOBRENOME a ser cadastrado: "); // salva o que o usuário escrever
    scanf("%s", sobrenome); // %s refere-se a string
    
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, sobrenome); // salva o que o usuário escrever
    fclose(file); // fechar o arquivo
    
    // para colocar vírgula
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, ","); // escreve uma vírgula depois do que foi colocado pelo usuário
    fclose(file); // fechar o arquivo
    
    // CARGO
    printf("Digite o CARGO a ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, cargo); // salva o que o usuário escrever
    fclose(file); // fechar o arquivo
    
    system("pause");
 
 //pergunta ao usuario se deseja continuar o registro 
      int escolha;
      printf("Deseja registrar outro usuario?\n1-SIM\n2-Voltar ao menu\n");
      scanf("%d", &escolha);
    if (escolha == 2) {
    	continuar = 0;// sair do loop,voltando menu principal 
    }
    system("cls");//limpa a tela do registro
}
}
int consulta() { 
    // CONSULTA DE NOMES
    setlocale(LC_ALL, "portuguese"); // definir linguagem
    char cpf[40];
    char conteudo[400];
    
    printf("Digite o CPF a ser consultado: "); // coleta a informação para ser consultada
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r"); // Abrir e consultar arquivo
    
    if (file == NULL) { // se não conseguir localizar o arquivo
        printf("Não foi possível localizar o CPF!\n");
        return 1;
    }
    
    while (fgets(conteudo, 200, file) != NULL) { // validação
        printf("Essas são as informações do usuário: ");
        printf("%s", conteudo);
        printf("\n\n");
    }
    fclose(file);
    system("pause"); // essa função faz uma pausa assim não deixando ele voltar para o menu
    return 0;
}

int deletar() {
    // Deletar um arquivo
    char cpf[40]; 
    printf("Digite o CPF a ser deletado: "); // Coleta a informação que o usuário está escrevendo
    scanf("%s", cpf); 
    
    if (remove(cpf) == 0) {
        printf("Arquivo deletado com sucesso!\n");
    } else {
        printf("Erro ao deletar o arquivo. Usuário não encontrado.\n");
    }
    
    system("pause");
    return 0;
}

int main() {
    int opcao = 0; // definindo variáveis
    int laco = 1;
    
    while (laco) { // repetição
        system("cls"); // limpeza
        setlocale(LC_ALL, "portuguese"); // definir linguagem
        
        printf("### Cartorio da EBAC ### \n\n"); // início de menu
        printf("Escolha a opção desejada do menu:\n\n"); // texto do menu
        printf("\t1 - Registrar nomes \n"); // aparece opção para o usuário escolher
        printf("\t2 - Consultar nomes\n"); // aparece opção para o usuário escolher
        printf("\t3 - Deletar nomes\n"); // aparece opção para o usuário escolher
        printf("\t4 - Sair do menu\n"); // sair do programa
        // fim de menu
        scanf("%d", &opcao); // selecionar opção e armazenar
        
        system("cls"); // limpeza
        switch (opcao) { // opções do menu
            case 1:
                registro(); // chamada de funções
                break;
            case 2:
                consulta(); // chamada de funções
                break;
            case 3:
                deletar(); // chamada de funções
                break;
            case 4:
                printf("Obrigado por utilizar o sistema\n"); // despedida
                laco = 0; // sair do loop
                break;
            default: // nenhuma das opções desejadas
                printf("Essa opção não está disponível!\n"); // fim de escolha
                system("pause"); // pausa no código
                break;
        }
    }
    return 0;
}

