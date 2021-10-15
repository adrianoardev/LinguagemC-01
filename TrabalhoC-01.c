#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de tipo de dados
struct dados {
	char nome[40];
	float salario;
};
int main() {
	setlocale(LC_ALL, "Portuguese"); // Deixa o programa em Português BR
	// Função Ponteiro

	struct dados func, * p_func;
	p_func = &func;
	printf("Matricula do Aluno: 3415162\n");
	printf("Digite o nome do funcionário: ");
	fgets(func.nome, 39, stdin);
	printf("Digite o salário do funcionário: ");
	scanf_s("%f", &func.salario);

	// Imprime na tela os Dados do Funcionário
	printf("\n***** Dados do Funcionário *****\n\n");

	// Verifica abaixo os valores de cada salário para calcular sua respectiva alíquota
	if (p_func->salario > 4664.68) {
		printf("O nome do funcionário é: %s", func.nome);
		printf("O salário do funcionário é: R$ %.2f\n", func.salario);
		printf("A alíquota é de: 27,50%%\n");
		printf("O valor a ser deduzido do salário é de: R$ %.2f\n", p_func->salario * 0.275);
	}
	else if (p_func->salario > 3751.05) {
		printf("O nome do funcionário é: %s", func.nome);
		printf("O salário do funcionário é de: R$ %.2f\n", func.salario);
		printf("A alíquota é de: 22,50%%\n");
		printf("O valor a ser deduzido do salário é de: R$ %.2f\n", p_func->salario * 0.225);
	}
	else if (p_func->salario > 2826.55) {
		printf("O nome do funcionário é: %s", func.nome);
		printf("O salário do funcionário é: R$ %.2f\n", func.salario);
		printf("A alíquota é de: 15,00%%\n");
		printf("O valor a ser deduzido do salário é de: R$ %.2f\n", p_func->salario * 0.150);
	}
	else if (p_func->salario > 1903.99) {
		printf("O nome do funcionário é: %s", func.nome);
		printf("O salário do funcionário é: R$ %.2f\n", func.salario);
		printf("A alíquota é de: 7,50%%\n");
		printf("O valor a ser deduzido do salário é de: R$ %.2f\n", p_func->salario * 0.075);
	}
	else {
		printf("O nome do funcionário é: %s", func.nome);
		printf("O salário do funcionário é: %.2f\n", p_func->salario);
		printf("A alíquota é: Isento \n");
		printf("O valor a ser deduzido do salário é de: R$ 0,00");
	}
	return 0;
}
