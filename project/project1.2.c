<<<<<<< HEAD
#include <stdio.h> //biblioteca de comunica�ao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espa�o de memoria 
#include <locale.h> //biblioteca de aloca�oes de texto por regiao 

int registro()
{
printf ("Voc� escolheu  registro de nomes!\n");
		system("pause");	
}
int consulta()
{
printf ("Voc� escolheu consulta de nomes!\n");
		system("pause");
}
int deletar()
{
printf ("Voc� escolheu deletar nomes!\n");
		system("pause");	
}

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repeti��o 
	{
	  
	    system("cls");// limpeza
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	    switch(opcao)//op�oes do menu
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
		  default://nem uma das opc�es desejadas 
		  	printf ("Essa op�ao nao est� disponivel!\n");//fim de escolha
		system("pause");
			break;
		}
	

}
	}
=======
#include <stdio.h> //biblioteca de comunica�ao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espa�o de memoria 
#include <locale.h> //biblioteca de aloca�oes de texto por regiao 

int registro()
{
printf ("Voc� escolheu  registro de nomes!\n");
		system("pause");	
}
int consulta()
{
printf ("Voc� escolheu consulta de nomes!\n");
		system("pause");
}
int deletar()
{
printf ("Voc� escolheu deletar nomes!\n");
		system("pause");	
}

int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)//repeti��o 
	{
	  
	    system("cls");// limpeza
	    setlocale(LC_ALL, "portuguese"); //definir linguegem
	
	
        printf("###Cartorio da EBAC### \n\n"); // inicio de menu
    	printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - regristrar nomes \n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");// fim de menu
	
	    scanf("%d", &opcao); // selecionar opcao * armazenar 
	
	    system("cls"); //limpeza
	    switch(opcao)//op�oes do menu
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
		  default://nem uma das opc�es desejadas 
		  	printf ("Essa op�ao nao est� disponivel!\n");//fim de escolha
		system("pause");
			break;
		}
	

}
	}
>>>>>>> 1f274af (subiu)
