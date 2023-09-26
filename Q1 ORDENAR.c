/*Enunciado:Q1
ORDENAR – Crie uma aplicação que solicite do usuário 3 valores inteiros quaisquer em qualquer ordem,
os valores deverão ser apresentados ordenados.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

// Função para trocar dois valores inteiros
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valores[3];

    // Solicitar ao usuário os três valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &valores[0]);

    printf("Digite o segundo valor: ");
    scanf("%d", &valores[1]);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valores[2]);

    // Aplicar o algoritmo de ordenação de bolha
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (valores[j] > valores[j + 1]) {
                trocar(&valores[j], &valores[j + 1]);
            }
        }
    }

    // Apresentar os valores ordenados
    printf("Valores ordenados: %d, %d, %d\n", valores[0], valores[1], valores[2]);

    return 0;
}
