#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() {
    // Fun��o de vari�veis/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    int continuar = 1; // variavel para mandar no loop
    
    // Cria��o de vari�veis/string
    while (continuar) // loop para continuar os registro
	{ 
	
    // CPF
    printf("Digite o CPF a ser cadastrado: "); // coleta a informa��o que o usu�rio digita
    scanf("%s", cpf); // %s refere-se a string
    
    strcpy(arquivo, cpf); // respons�vel por copiar os valores das strings
    
    FILE *file; // cria arquivo
    file = fopen(arquivo, "w"); // criar arquivo, a string "w" faz a fun��o de nomear o arquivo salvo
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, cpf); // salva o que o usu�rio escrever
    fclose(file); // fecha o arquivo
    
    // para colocar v�rgula
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, ","); // escreve uma v�rgula depois do que foi colocado pelo usu�rio
    fclose(file); // fechar o arquivo
    
    // NOME
    printf("Digite o NOME a ser cadastrado: "); // salva o que o usu�rio escrever
    scanf("%s", nome); // %s refere-se a string
    
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, nome); // salva o que o usu�rio escrever
    fclose(file); // fechar o arquivo
    
    // para colocar v�rgula
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, ","); // escreve uma v�rgula depois do que foi colocado pelo usu�rio
    fclose(file); // fechar o arquivo
    
    // SOBRENOME
    printf("Digite o SOBRENOME a ser cadastrado: "); // salva o que o usu�rio escrever
    scanf("%s", sobrenome); // %s refere-se a string
    
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, sobrenome); // salva o que o usu�rio escrever
    fclose(file); // fechar o arquivo
    
    // para colocar v�rgula
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, ","); // escreve uma v�rgula depois do que foi colocado pelo usu�rio
    fclose(file); // fechar o arquivo
    
    // CARGO
    printf("Digite o CARGO a ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a"); // abrir e atualizar
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, cargo); // salva o que o usu�rio escrever
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
    
    printf("Digite o CPF a ser consultado: "); // coleta a informa��o para ser consultada
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r"); // Abrir e consultar arquivo
    
    if (file == NULL) { // se n�o conseguir localizar o arquivo
        printf("N�o foi poss�vel localizar o CPF!\n");
        return 1;
    }
    
    while (fgets(conteudo, 200, file) != NULL) { // valida��o
        printf("Essas s�o as informa��es do usu�rio: ");
        printf("%s", conteudo);
        printf("\n\n");
    }
    fclose(file);
    system("pause"); // essa fun��o faz uma pausa assim n�o deixando ele voltar para o menu
    return 0;
}

int deletar() {
    // Deletar um arquivo
    char cpf[40]; 
    printf("Digite o CPF a ser deletado: "); // Coleta a informa��o que o usu�rio est� escrevendo
    scanf("%s", cpf); 
    
    if (remove(cpf) == 0) {
        printf("Arquivo deletado com sucesso!\n");
    } else {
        printf("Erro ao deletar o arquivo. Usu�rio n�o encontrado.\n");
    }
    
    system("pause");
    return 0;
}

int main() {
    int opcao = 0; // definindo vari�veis
    int laco = 1;
    
    while (laco) { // repeti��o
        system("cls"); // limpeza
        setlocale(LC_ALL, "portuguese"); // definir linguagem
        
        printf("### Cartorio da EBAC ### \n\n"); // in�cio de menu
        printf("Escolha a op��o desejada do menu:\n\n"); // texto do menu
        printf("\t1 - Registrar nomes \n"); // aparece op��o para o usu�rio escolher
        printf("\t2 - Consultar nomes\n"); // aparece op��o para o usu�rio escolher
        printf("\t3 - Deletar nomes\n"); // aparece op��o para o usu�rio escolher
        printf("\t4 - Sair do menu\n"); // sair do programa
        // fim de menu
        scanf("%d", &opcao); // selecionar op��o e armazenar
        
        system("cls"); // limpeza
        switch (opcao) { // op��es do menu
            case 1:
                registro(); // chamada de fun��es
                break;
            case 2:
                consulta(); // chamada de fun��es
                break;
            case 3:
                deletar(); // chamada de fun��es
                break;
            case 4:
                printf("Obrigado por utilizar o sistema\n"); // despedida
                laco = 0; // sair do loop
                break;
            default: // nenhuma das op��es desejadas
                printf("Essa op��o n�o est� dispon�vel!\n"); // fim de escolha
                system("pause"); // pausa no c�digo
                break;
        }
    }
    return 0;
}

