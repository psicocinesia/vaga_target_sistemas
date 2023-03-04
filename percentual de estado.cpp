#include <stdio.h>
#include <locale.h>
int main(){
	
	float porcentagem = 0;
	float valortotal = 0;
	float estados[5] = {67836.43,36678.66,29229.88,27165.48,19849.53};
	
	//inicializar linguagem da região
	setlocale(LC_ALL, "Portuguese");
	
	//for para a soma dos faturamentos de cada estado
	for(int i = 0; i < 5; i++){
		
		valortotal += estados[i];
		
		
	}
	
	printf("\nValor total do mês: %.4f\n\n", valortotal);
	
	//validação do valor de cada estado e calculo de porcentagem
	for(int i = 0; i < 5; i++){
		
		if(i == 0){
			porcentagem = (estados[i] * 100) / valortotal;
			
			printf("O percentual de SP foi de: %%%.2f\n", porcentagem);
		}
		else if(i == 1){
			porcentagem = (estados[i] * 100) / valortotal;
			printf("O percentual de RJ foi de: %%%.2f\n", porcentagem);
		}
		else if(i == 2){
			porcentagem = (estados[i] * 100) / valortotal;
			printf("O percentual de MG foi de: %%%.2f\n", porcentagem);
		}
		else if(i == 3){
			porcentagem = (estados[i] * 100) / valortotal;
			printf("O percentual de ES foi de: %%%.2f\n", porcentagem);
		}
		else if(i == 4){
			porcentagem = (estados[i] * 100) / valortotal;
			printf("O percentual de Outros Estados foi de: %%%.2f", porcentagem);
		}
	}
	
	
}
