#include <stdio.h>
#include <limits.h>

#define STATUS_OK 0
#define STATUS_SAIR 1
#define STATUS_OPERADOR_INVALIDO 2
#define STATUS_INT_MAX 3

// FIXME Acho que esse é o magic_number errado. Qual era a resposta mesmo? e.e
#define MAGIC_NUMBER 41

// >>>>>>>>>> Impressões na tela >>>>>>>>>>

/**
 * Imprime cabeçalho da calculadora.
 */
void imprimir_cabecalho() {   
	// FIXME tem algo de errado nos espaçamentos
    printf("---------- EPiC Calculator -----------\n");
    printf("- Uso:                               -\n");
    printf("-      operando1 operacao operando2   -\n");
    printf("-                                    -\n");
    printf("- Operacoes:                           -\n");
    printf("-      +, -, *, /                    -\n");
    printf("-                                         -\n");
    printf("---------- EPiC Calculator -----------\n");
}

/**
 * Imprime prompt de input.
 */
void imprimir_entrada() {
    printf("\n");
    printf("[In ] ");
}

/**
 * Imprime prompt de output.
 */
void imprimir_saida(int a, char b, int c, int d) {
    printf("[Out] %d %c %d = %d\n", a, b, c, d);
}

/**
 * Imprime uma mensagem associada a um código numérico.
 * @param erro código do erro.
 */
void imprimir_erro(int erro) {
	// FIXME Nome de função incoerente
	// Quando erro = 1, não é uma mensagem de erro.
	// Tem um nome melhor pra essa função?
    switch (erro) {
        case STATUS_SAIR:
            printf("So Long, and Thanks for All the Fish...");
            break;
        case STATUS_OPERADOR_INVALIDO:
            printf("Operador desconhecido. Saindo...\n");
            break;
        case STATUS_INT_MAX:
            printf("A operação executada gerou o valor %d.\n" \
                    "Isso pode ser tanto o resultado da operacao,\n" \
                    "quanto o mal uso da funcao calcular(),\n" \
                    "que recebeu uma operacao ilegal.\n", -INT_MAX);
            break;
    }
}

// <<<<<<<<<< Impressões na tela <<<<<<<<<<

// >>>>>>>>>> Operações >>>>>>>>>>
int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a + b;
}

int div(int a, int b) {
    return a / b;
}
// <<<<<<<<<< Operações <<<<<<<<<<

// >>>>>>>>>> Validações >>>>>>>>>>
/**
 * Testa se op é uma operação válida/conhecida.
 * @param a o primeiro operando
 * @param b o segundo operando
 * @param op a operação
 * @see calcular()
 * @return 0 se op é válido, 1 caso contrário
 */
int operacao_valida(int a, int b, char op)  {
    // TODO o que fazer se op == '/' e b == 0?
    switch (op) {
        case '+':
            return 0;
        case '-':
            return 0;
        case '*':
            return 0;
        case '/':
            return 0;
        default:
            return 1;
    }
}
// <<<<<<<<<< Validações <<<<<<<<<<

// >>>>>>>>>> Lógica >>>>>>>>>>

/**
 * Calcula efetivamente a operação op.
 * Espera-se que op seja uma operação válida.
 * @param a o primeiro operando
 * @param b o segundo operando
 * @param op a operação
 * @see operacao_valida()
 * @return O valor de "a op b" caso op seja reconhecido, ou -INT_MAX caso contrário
 */
int calcular(int a, int b, char op)  {
    switch (op) {
        case '+':
            return soma(a, b);
        case '-':
            return sub(a, b);
        case '*':
            return mult(a, b);
        case '/':
            return div(a, b);

        default:
			// impossível de acontecer, considerando que
			// operacao_valida(a, b, op) foi testada antes
            return -INT_MAX;
    }
}

/**
 * Lê entrada, valida operação, calcula resultado e o printa caso nenhum erro
 * tenha sido gerado no processo.
 * @see operacao_valida()
 * @see calcular()
 * @see imprimir_saida()
 * @return Código de status gerado a partir do processamento do último input
 */
int processar_entrada_e_saida() {
    int n1, n2;    
    char op;
    int resultado;
    
    scanf("%d %c %d", &n1, &op, &n2);
    
    resultado = operacao_valida(n1, n2, op);

    if (resultado != STATUS_OK) {
		return resultado;
	}

    resultado = calcular(n1, n2, op);

    if (resultado == MAGIC_NUMBER) {
        return STATUS_SAIR;
    }
    else if (resultado == -INT_MAX) {
        return STATUS_INT_MAX;
    }
    else {
        imprimir_saida(n1, op, n2, resultado);
    }
 
    return 0;
}

/**
 * Gerencia toda a lógica da calculadora.
 * Responsável por manter a execução da calculadora ativa enquanto o
 * status do processamento da entrada não for 1
 * @see imprimir_cabecalho()
 * @see imprimir_entrada()
 * @see imprimir_erro()
 * @see processar_entrada_e_saida()
 */
void rodar_calc() {
    int status = STATUS_OK;

    imprimir_cabecalho();

    do {
        imprimir_entrada();

        status = processar_entrada_e_saida();
        
        if (status != STATUS_OK) {
            imprimir_erro(status);
        }

    } while (status != STATUS_SAIR);
}
// <<<<<<<<<< Lógica <<<<<<<<<<

int main() {
    rodar_calc();    

    return 0;
}
