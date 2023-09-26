/*Enunciado:Q7
CONTAR PARES E ÍMPARES – Crie uma aplicação que deve solicitar do usuário 5 valores inteiros
quaisquer, a aplicação deverá apresentar duas mensagens de saída, a primeira deverá informar a
quantidade de números pares e ímpares fornecidos, a segunda deverá informar qual foi o tipo de
número (par/ímpar) mais fornecido.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valores[5];
    int pares = 0, impares = 0;

    // Solicitar ao usuário cinco valores inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Contar a quantidade de números pares e ímpares
    for (int i = 0; i < 5; i++) {
        if (valores[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    // Determinar qual tipo (par ou ímpar) foi mais fornecido
    if (pares > impares) {
        printf("Quantidade de números pares: %d\n", pares);
        printf("Quantidade de números ímpares: %d\n", impares);
        printf("O tipo mais fornecido foi: Par\n");
    } else if (impares > pares) {
        printf("Quantidade de números pares: %d\n", pares);
        printf("Quantidade de números ímpares: %d\n", impares);
        printf("O tipo mais fornecido foi: Ímpar\n");
    } else {
        printf("Quantidade de números pares: %d\n", pares);
        printf("Quantidade de números ímpares: %d\n", impares);
        printf("Houve um empate entre pares e ímpares.\n");
    }

    return 0;
}
