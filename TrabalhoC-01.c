#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Declara��o de tipo de dados
struct dados {
	char nome[40];
	float salario;
};
int main() {
	setlocale(LC_ALL, "Portuguese"); // Deixa o programa em Portugu�s BR
	// Fun��o Ponteiro

	struct dados func, * p_func;
	p_func = &func;
	printf("Matricula do Aluno: 3415162\n");
	printf("Digite o nome do funcion�rio: ");
	fgets(func.nome, 39, stdin);
	printf("Digite o sal�rio do funcion�rio: ");
	scanf_s("%f", &func.salario);

	// Imprime na tela os Dados do Funcion�rio
	printf("\n***** Dados do Funcion�rio *****\n\n");

	// Verifica abaixo os valores de cada sal�rio para calcular sua respectiva al�quota
	if (p_func->salario > 4664.68) {
		printf("O nome do funcion�rio �: %s", func.nome);
		printf("O sal�rio do funcion�rio �: R$ %.2f\n", func.salario);
		printf("A al�quota � de: 27,50%%\n");
		printf("O valor a ser deduzido do sal�rio � de: R$ %.2f\n", p_func->salario * 0.275);
	}
	else if (p_func->salario > 3751.05) {
		printf("O nome do funcion�rio �: %s", func.nome);
		printf("O sal�rio do funcion�rio � de: R$ %.2f\n", func.salario);
		printf("A al�quota � de: 22,50%%\n");
		printf("O valor a ser deduzido do sal�rio � de: R$ %.2f\n", p_func->salario * 0.225);
	}
	else if (p_func->salario > 2826.55) {
		printf("O nome do funcion�rio �: %s", func.nome);
		printf("O sal�rio do funcion�rio �: R$ %.2f\n", func.salario);
		printf("A al�quota � de: 15,00%%\n");
		printf("O valor a ser deduzido do sal�rio � de: R$ %.2f\n", p_func->salario * 0.150);
	}
	else if (p_func->salario > 1903.99) {
		printf("O nome do funcion�rio �: %s", func.nome);
		printf("O sal�rio do funcion�rio �: R$ %.2f\n", func.salario);
		printf("A al�quota � de: 7,50%%\n");
		printf("O valor a ser deduzido do sal�rio � de: R$ %.2f\n", p_func->salario * 0.075);
	}
	else {
		printf("O nome do funcion�rio �: %s", func.nome);
		printf("O sal�rio do funcion�rio �: %.2f\n", p_func->salario);
		printf("A al�quota �: Isento \n");
		printf("O valor a ser deduzido do sal�rio � de: R$ 0,00");
	}
	return 0;
}