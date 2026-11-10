#include <stdio.h>
#include <stdlib.h>
int senha;
int senhad;
bool acesso;
float valor = 500;
int op;
float dep;
float sac;
float mdep;
int cadastro(){
	printf("--Banco--\n");
	printf("Cadastre a sua senha de 4 numeros: ");
	scanf("%d", &senha);
	return senha;
}
bool senha_a(){
	do{
		printf("--Banco--\n");
		printf("Coloque a sua senha de 4 numeros: ");
		scanf("%d", &senhad);
	}while(senhad != senha);
	return acesso = true;
}
int main(){
	cadastro();
	senha_a();
	if(acesso == true) {
		do{
			printf("--Banco--\n");
			printf("Escolha entre Depositar, Sacar, Consultar Saldo e Estatísticas e Sair (1/2/3/4) respectivamente: ");
			scanf("%d", &op);
			switch(op){
				case 1:
					printf("Escolha o valor a depositar: ");
					scanf("%f", &dep);
					if(dep > 0){
					valor = valor + dep;
					if (dep > mdep) {
		                mdep = dep;
		            }
					printf("valor depositado com sucesso!");
					}
					else{
						printf("Valor digitado errado");
					}
					break;
				case 2:
					printf("Escolha o valor a sacar: ");
					if(dep > 0){
					valor = valor - sac;
					printf("valor depositado com sucesso!");
					}
					else{
						printf("Valor digitado errado");
					}
					break;
				case 3:
					printf("Seu saldo e: %.2f", valor);
					printf("Maior deposito: %.2f", mdep);
					break;
				default:
					printf("operacao inexistente");
					break;
			}
		}while(op != 4);
	}
	else{
		printf("acesso nao permitido");
	}
}
