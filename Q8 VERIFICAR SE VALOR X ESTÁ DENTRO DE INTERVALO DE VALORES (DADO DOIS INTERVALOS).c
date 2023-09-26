/*Enunciado:Q8
VERIFICAR SE VALOR X ESTÁ DENTRO DE INTERVALO DE VALORES (DADO DOIS INTERVALOS) – Crie uma
aplicação que deverá solicitar 5 valores inteiros quaisquer, a aplicação deverá bloquear a execução
caso exista algum valor repetido entre os 4 primeiros valores, a aplicação deverá utilizar os 2 primeiros
valores e criar um intervalo de valores entre o menor e maior valor, a aplicação deverá realizar o
mesmo procedimento com o 3º e 4º valor fornecido, neste momento a aplicação deverá conter dois
intervalos de valores, por fim, a aplicação deverá verificar se o 5º está dentro do primeiro intervalo, se
está dentro do segundo intervalo, verificar se está dentro do ambos intervalos ou se não está dentro
de nenhum intervalo.
NOTAS:
N1 - Caso o 1º e 2º valor não estejam devidamente ordenados do menor para o maior, a aplicação
deverá ordená-los criando um intervalo.
N2 - O 5º valor poderá estar em várias situações diferentes, a aplicação deverá exibir mensagens
informando se o mesmo não se encontra dentro de nenhum dos intervalos, se está em ambos os
intervalos, se está somente no primeiro intervalo ou se está dentro apenas do segundo intervalo.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valores[5];

    // Solicitar ao usuário 5 valores inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Verificar e ordenar o primeiro intervalo (valores[0] e valores[1])
    if (valores[0] > valores[1]) {
        int temp = valores[0];
        valores[0] = valores[1];
        valores[1] = temp;
    }

    // Verificar e ordenar o segundo intervalo (valores[2] e valores[3])
    if (valores[2] > valores[3]) {
        int temp = valores[2];
        valores[2] = valores[3];
        valores[3] = temp;
    }

    // Verificar se o quinto valor está dentro dos intervalos
    int dentroPrimeiroIntervalo = (valores[4] >= valores[0] && valores[4] <= valores[1]);
    int dentroSegundoIntervalo = (valores[4] >= valores[2] && valores[4] <= valores[3]);

    // Exibir mensagens de acordo com a situação
    if (dentroPrimeiroIntervalo && dentroSegundoIntervalo) {
        printf("O valor %d está dentro de ambos os intervalos.\n", valores[4]);
    } else if (dentroPrimeiroIntervalo) {
        printf("O valor %d está dentro do primeiro intervalo.\n", valores[4]);
    } else if (dentroSegundoIntervalo) {
        printf("O valor %d está dentro do segundo intervalo.\n", valores[4]);
    } else {
        printf("O valor %d não está dentro de nenhum dos intervalos.\n", valores[4]);
    }

    return 0;
}

