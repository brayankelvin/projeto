#include <stdio.h> //biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de alocaçao de espaço de memoria 
#include <locale.h> //biblioteca de alocaçoes de texto por regiao 
#include <string.h> //biblioteca responsavel por cuidar das string
int registro() 
       //Funçãa de variaveis/string 
{
	char arquivo[40];
	char cpf [40];
	char nome [40];
	char sobrenome[40];
	char cargo[40];
	
	  //Criaçâo de variaveis/string
	  
	        //CPF
	
	printf("Digite o CPF a ser cadastrado:  "); //coleta a informaçao que o usario digita 
	scanf("%s", cpf); //%srefere-seastring
	
	strcpy (arquivo, cpf);//responsalvel por copiar os valores das strin
	
	FILE *file;// cria arquivo
	file = fopen(arquivo, "w");//criar arquivo a string "w" ela faz a função da o nome para o arquivo salvado
	fprintf(file,cpf);// salva oque o usuario escrever
	fclose(file);//fecha o arquivo
	
	//para colocar virgula
	file = fopen(arquivo, "a");//abrir e atualizar
	fprintf(file,","); // escreve uma virgula depois do que foi  colocado  pelo usuarario
	fclose(file); // fechar o arquivo
	
	
	       //NOME
	       
	printf("Digite o NOME a ser cadastrado:  ");// salva oque o usuario escrever
	scanf("%s", nome);//%srefere-seastring
	
	file = fopen(arquivo, "a");//abrir e atualizar
	fprintf(file,nome);// salva oque o usuario escrever
	fclose(file); // fechar o arquivo
	
	//para colocar virgula
		file = fopen(arquivo, "a");//abrir e atualizar
	fprintf(file,",");// escreve uma virgula depois do que foi  colocado  pelo usuarario
	fclose(file); // fechar o arquivo
	
		       //SOBRENOME
		       
	printf("Digite o SOBRENOME a ser cadastrado:  ");// salva oque o usuario escrever
	scanf("%s", sobrenome);//%srefere-seastring
	
	file = fopen(arquivo, "a");//abrir e atualizar
	fprintf(file,sobrenome);// salva oque o usuario escrever
	fclose(file); // fechar o arquivo
		     
	//para colocar virgula
	file = fopen(arquivo, "a");//abrir e atualizar
	fprintf(file,",");// escreve uma virgula depois do que foi  colocado  pelo usuarario
	fclose(file); // fechar o arquivo
	
			   //CARGO
		       
	printf("Digite o CARGO a ser cadastrado:  ");
	scanf("%s", cargo);
	
    file = fopen(arquivo, "a");//abrir e atualizar
	fprintf(file,cargo); // salva oque o usuario escrever
	fclose(file); // fechar o arquivo
	
		       system("pause"); 
		       return 0;
}

int consulta()
{ 
                           //CONSULTADE NOMES
	setlocale(LC_ALL, "portuguese"); //definir linguegem
	char cpf[40];
	char conteudo[400];
	
     printf("Digite o CPF a ser consultado:  "); // coleta a informaçao para ser deletada 
     scanf("%s",cpf);
     
     FILE *file;
     file = fopen(cpf,"r"); //Abrir e consultar arquivo
     
     if(file == NULL) //se nao conseguir localizar o arquivo
     {
     	printf("Nao foi possivel localizar o cpf!.\n");
	 }
	 
	 while(fgets(conteudo, 200, file )!= NULL) //validaçao 
	 {
	 	printf(" Essas são as informacões do usuario:  ");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 }
	  system("pause"); // essa funaço faz uma pausa assim nao deixando ele voltar para o menu
	  return 0;
}
int deletar()
      //Deletar um arquivo
{
    char cpf[40]; 
	printf("Digite o CPF a ser deletado: "); // Coleta a informaçao que o usario esta escrevendo 
	scanf("%s",cpf); 
	
	remove(cpf);//deletar
	
	FILE *file; 
	file = fopen(cpf,"r"); //procurar arquivo 
	
	if(file == NULL); //procura o arquivo desejado
	
	 //se nao encontrar o aqruivo para ser deletado
	{
		printf ("Usuario nao encontrado:  "); // caso o usuario nao foi encontrado aparecerar esse texto
		system("pause");
		return 0;
		}	
}

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco==1;)//repetiçâo 
	{
	  
	    system("cls");// limpeza
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a opçâo desejada do menu:\n\n");//texto do menu
	    printf("\t1 - regristrar nomes \n");// aparece opçao para o usuario escolher
	    printf("\t2 - consultar nomes\n");// aparece opçao para o usuario escolher
	    printf("\t3 - deletar nomes\n");// aparece opçao para o usuario escolher
	    printf("\t4 - sair do menu\n");// sair do programa
	// fim de menu
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	    switch(opcao)//opçoes do menu
	    {
	    	case 1:
	    	registro(); //chamada de funçôes 
		case 2:
		  consulta();//chamada de funçôes 
		break;
		  case 3:
		  	deletar();//chamada de funçôes 
		break;
		  default://nem uma das opcões desejadas 
		  	printf ("Essa opçao nao está disponivel!\n");//fim de escolha
		system("pause"); //pausa no codigo
			break;
			case 4:
            printf("Obrigado por utilizar o sistema"); // despedida
            return 0; //fechar o programa
            break; 

				// fim da seleção
		}
	

}
	}
