<<<<<<< HEAD
#include <stdio.h> //biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de alocaçao de espaço de memoria 
#include <locale.h> //biblioteca de alocaçoes de texto por regiao 

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repetiçâo 
	{
	  
	    system("cls");
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a opçâo desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	
	    if (opcao==1)//inicio de escolha 
	{
		printf ("Você escolheu o registro de nomes!\n");
		system("pause");
	}
	 
	    if (opcao==2)
	{
		printf ("Você escolheu consulta de nomes!\n");
		system("pause");
	}
	
	    if (opcao==3)
	{
		printf ("Você escolheu deletar nomes!\n");
		system("pause");
	}
	
	    if (opcao>=4 || opcao <=0) 
	{
		printf ("Essa opçao nao está disponivel!\n");//fim de escolha
		system("pause");
	}
}
	}
=======
#include <stdio.h> //biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de alocaçao de espaço de memoria 
#include <locale.h> //biblioteca de alocaçoes de texto por regiao 

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repetiçâo 
	{
	  
	    system("cls");
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a opçâo desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	
	    if (opcao==1)//inicio de escolha 
	{
		printf ("Você escolheu o registro de nomes!\n");
		system("pause");
	}
	 
	    if (opcao==2)
	{
		printf ("Você escolheu consulta de nomes!\n");
		system("pause");
	}
	
	    if (opcao==3)
	{
		printf ("Você escolheu deletar nomes!\n");
		system("pause");
	}
	
	    if (opcao>=4 || opcao <=0) 
	{
		printf ("Essa opçao nao está disponivel!\n");//fim de escolha
		system("pause");
	}
}
	}
>>>>>>> 1f274af (subiu)
