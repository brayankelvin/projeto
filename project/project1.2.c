<<<<<<< HEAD
#include <stdio.h> //biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de alocaçao de espaço de memoria 
#include <locale.h> //biblioteca de alocaçoes de texto por regiao 

int registro()
{
printf ("Você escolheu  registro de nomes!\n");
		system("pause");	
}
int consulta()
{
printf ("Você escolheu consulta de nomes!\n");
		system("pause");
}
int deletar()
{
printf ("Você escolheu deletar nomes!\n");
		system("pause");	
}

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repetiçâo 
	{
	  
	    system("cls");// limpeza
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a opçâo desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	    switch(opcao)//opçoes do menu
	    {
	    	case 1:
	    	registro();
		break;
		case 2:
		  consulta();
		break;
		  case 3:
		  	deletar();
		break;
		  default://nem uma das opcões desejadas 
		  	printf ("Essa opçao nao está disponivel!\n");//fim de escolha
		system("pause");
			break;
		}
	

}
	}
=======
#include <stdio.h> //biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de alocaçao de espaço de memoria 
#include <locale.h> //biblioteca de alocaçoes de texto por regiao 

int registro()
{
printf ("Você escolheu  registro de nomes!\n");
		system("pause");	
}
int consulta()
{
printf ("Você escolheu consulta de nomes!\n");
		system("pause");
}
int deletar()
{
printf ("Você escolheu deletar nomes!\n");
		system("pause");	
}

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repetiçâo 
	{
	  
	    system("cls");// limpeza
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a opçâo desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	    switch(opcao)//opçoes do menu
	    {
	    	case 1:
	    	registro();
		break;
		case 2:
		  consulta();
		break;
		  case 3:
		  	deletar();
		break;
		  default://nem uma das opcões desejadas 
		  	printf ("Essa opçao nao está disponivel!\n");//fim de escolha
		system("pause");
			break;
		}
	

}
	}
>>>>>>> 1f274af (subiu)
