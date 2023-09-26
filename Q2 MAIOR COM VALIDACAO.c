/*Enunciado:Q2
MAIOR COM VALIDACAO - Crie uma aplicação que deverá solicitar do usuário dois valores numéricos
inteiros quaisquer, essa deverá exibir na tela o maior valor informado no entanto antes de verificar
qual o maior valor, a aplicação deverá validar se os valores são iguais, e caso sejam, deverá exibir uma
mensagem ao usuário informando que valores iguais não é permitido.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor1, valor2;

    // Solicitar ao usuário os dois valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    // Verificar se os valores são iguais
    if (valor1 == valor2) {
        printf("Valores iguais não são permitidos.\n");
    } else {
        // Encontrar o maior valor
        int maior;
        if (valor1 > valor2) {
            maior = valor1;
        } else {
            maior = valor2;
        }

        // Exibir o maior valor
        printf("O maior valor informado é: %d\n", maior);
    }

    return 0;
}

