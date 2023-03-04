#include <stdio.h>
#include <locale.h>
int main()
{
    int parametro;
    int fibonacci_1 = 0, fibonacci_2 = 1, fibonacci_aux = 0;
    int num_verif = 0;
    
    //inicializar linguagem da região
    setlocale(LC_ALL, "Portuguese");
    
    printf("Sequência Fibonacci\n\nVamos verificar se o número digitado pertence a sequência.\n\nInforme até qual índice deverá ser contado: ");
    scanf("%i", &parametro);
    printf("Qual número deseja verificar se pertence a sequência? ");
    scanf("%i", &num_verif);
    
    //verificando se o numero digitado não é igual aos dois primeiros números da sequência
    if(num_verif == fibonacci_1 || num_verif == fibonacci_2){
    	printf("O número digitado pertence a sequência fibonacci!");
	}
	
	/*fazendo o calculo da sequência de fibonacci a partir do terceiro termo e fazendo a verificação
	se o número digitado é da sequência ou não*/
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
    
    //usando tomada de decisão para printar o resultado da verificação
    if(num_verif == 1){
    	printf("O número verificado pertence a sequência Fibonacci!");
	}else if(num_verif == 0){
		printf("O número verificado não pertence a sequência Fibonacci!");
	}
    }
