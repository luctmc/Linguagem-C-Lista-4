/*Enunciado:Q6
ORDENAR COM BLOQUEIO DE VALORES REPETIDOS - Crie uma aplicação que deverá solicitar do usuário
03 valores, assim que a aplicação contiver os três valores, ela deverá exibi-los em ordem crescente. A
aplicação não deverá permitir que sejam fornecidos valores repetidos.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valores[3];
    int i, j, temp;
    
    // Solicitar ao usuário três valores distintos
    for (i = 0; i < 3; i++) {
        int valor;
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        // Verificar se o valor já foi inserido
        int repetido = 0;
        for (j = 0; j < i; j++) {
            if (valores[j] == valor) {
                printf("Valor repetido! Insira um valor diferente.\n");
                i--; // Decrementa i para pedir o valor novamente
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            valores[i] = valor;
        }
    }

    // Ordenar os valores em ordem crescente usando o algoritmo de ordenação de bolha
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (valores[j] > valores[j + 1]) {
                temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }

    // Exibir os valores ordenados
    printf("Valores em ordem crescente: %d, %d, %d\n", valores[0], valores[1], valores[2]);

    return 0;
}
