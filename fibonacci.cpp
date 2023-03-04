#include <stdio.h>
#include <locale.h>
int main()
{
    int parametro;
    int fibonacci_1 = 0, fibonacci_2 = 1, fibonacci_aux = 0;
    int num_verif = 0;
    
    //inicializar linguagem da regi�o
    setlocale(LC_ALL, "Portuguese");
    
    printf("Sequ�ncia Fibonacci\n\nVamos verificar se o n�mero digitado pertence a sequ�ncia.\n\nInforme at� qual �ndice dever� ser contado: ");
    scanf("%i", &parametro);
    printf("Qual n�mero deseja verificar se pertence a sequ�ncia? ");
    scanf("%i", &num_verif);
    
    //verificando se o numero digitado n�o � igual aos dois primeiros n�meros da sequ�ncia
    if(num_verif == fibonacci_1 || num_verif == fibonacci_2){
    	printf("O n�mero digitado pertence a sequ�ncia fibonacci!");
	}
	
	/*fazendo o calculo da sequ�ncia de fibonacci a partir do terceiro termo e fazendo a verifica��o
	se o n�mero digitado � da sequ�ncia ou n�o*/
    for(int i = 2; i < parametro; i++){
    	
        fibonacci_aux = fibonacci_1 + fibonacci_2;
        fibonacci_1 = fibonacci_2;
        fibonacci_2 = fibonacci_aux;
        if(num_verif == fibonacci_aux){
        	num_verif = 1;
		}
		else{
			num_verif = 0;
		}
        printf("%i", fibonacci_aux);
    }
    
    //usando tomada de decis�o para printar o resultado da verifica��o
    if(num_verif == 1){
    	printf("O n�mero verificado pertence a sequ�ncia Fibonacci!");
	}else if(num_verif == 0){
		printf("O n�mero verificado n�o pertence a sequ�ncia Fibonacci!");
	}
    }
