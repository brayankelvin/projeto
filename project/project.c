<<<<<<< HEAD
#include <stdio.h> //biblioteca de comunica�ao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espa�o de memoria 
#include <locale.h> //biblioteca de aloca�oes de texto por regiao 

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repeti��o 
	{
	  
	    system("cls");
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	
	    if (opcao==1)//inicio de escolha 
	{
		printf ("Voc� escolheu o registro de nomes!\n");
		system("pause");
	}
	 
	    if (opcao==2)
	{
		printf ("Voc� escolheu consulta de nomes!\n");
		system("pause");
	}
	
	    if (opcao==3)
	{
		printf ("Voc� escolheu deletar nomes!\n");
		system("pause");
	}
	
	    if (opcao>=4 || opcao <=0) 
	{
		printf ("Essa op�ao nao est� disponivel!\n");//fim de escolha
		system("pause");
	}
}
	}
=======
#include <stdio.h> //biblioteca de comunica�ao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espa�o de memoria 
#include <locale.h> //biblioteca de aloca�oes de texto por regiao 

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repeti��o 
	{
	  
	    system("cls");
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	
	    if (opcao==1)//inicio de escolha 
	{
		printf ("Voc� escolheu o registro de nomes!\n");
		system("pause");
	}
	 
	    if (opcao==2)
	{
		printf ("Voc� escolheu consulta de nomes!\n");
		system("pause");
	}
	
	    if (opcao==3)
	{
		printf ("Voc� escolheu deletar nomes!\n");
		system("pause");
	}
	
	    if (opcao>=4 || opcao <=0) 
	{
		printf ("Essa op�ao nao est� disponivel!\n");//fim de escolha
		system("pause");
	}
}
	}
>>>>>>> 1f274af (subiu)
