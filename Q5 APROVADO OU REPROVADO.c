/*Enunciado:Q5
APROVADO/REPROVADO - Crie uma aplicação que deverá solicitar do usuário (aluno) três notas, sendo
que a primeira corresponderá a nota da avaliação 01, a segunda da avaliação 02 e a terceira referente
a entrega de um trabalho, com base nestas três notas, aplique os seguintes pesos para calcular a média:
30%, 40% e 30%. Com a média calculada verifique se o aluno foi aprovado ou reprovado conforme
orientações que seguem: a) Se a média estiver entre 0 e 4.99 - "Reprovado"; b) Se a média estiver entre
5.00 e 7.49 - "Aprovado"; c) Se a média estiver acima de 7.50 - "Parabéns, você foi aprovado com
excelência".
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Solicitar ao usuário as três notas
    printf("Digite a nota da Avaliação 01: ");
    scanf("%f", &nota1);

    printf("Digite a nota da Avaliação 02: ");
    scanf("%f", &nota2);

    printf("Digite a nota do Trabalho: ");
    scanf("%f", &nota3);

    // Calcular a média ponderada com os pesos especificados
    media = (0.3 * nota1) + (0.4 * nota2) + (0.3 * nota3);

    // Verificar a média e exibir a mensagem correspondente
    if (media >= 0 && media < 5.00) {
        printf("Reprovado.\n");
    } else if (media >= 5.00 && media < 7.50) {
        printf("Aprovado.\n");
    } else {
        printf("Parabéns, você foi aprovado com excelência.\n");
    }

    return 0;
}
