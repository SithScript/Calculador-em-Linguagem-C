#include <stdio.h>

int main() {

    float num1, num2;
    char op, stop = 's';

    while (stop != 'n') {

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("Digite a operacao desejada (+, -, *, /): ");
        scanf(" %c", &op);

        switch (op) {

            case '+':
                printf("Resultado: %.6f\n", num1 + num2);
                break;

            case '-':
                printf("Resultado: %.6f\n", num1 - num2);
                break;

            case '*':
                printf("Resultado: %.6f\n", num1 * num2);
                break;

            case '/':
                if (num2 == 0) {
                    printf("Erro: divisao por zero!\n");
                } else {
                    printf("Resultado: %.6f\n", num1 / num2);
                }
                break;

            default:
                printf("Operacao invalida!\n");
        }

        printf("Deseja fazer uma nova operacao? (s/n): ");
        scanf(" %c", &stop);
    }

    printf("Programa encerrado.\n");

    return 0;
}
