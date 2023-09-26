/*Enunciado:Q4
IMC - Crie uma aplicação para realizar o cálculo do IMC, a aplicação deverá solicitar do usuário o Peso
e a Altura, deverá então processar o Índice de Massa Corporal, e com esse valor exibir as mensagens
de acordo com a tabela de classificação de IMC (Pesquise como calcular o IMC).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicitar ao usuário o peso e a altura
    printf("Digite o seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    // Calcular o IMC
    imc = peso / (altura * altura);

    // Exibir o valor do IMC e a classificação correspondente
    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Classificação: Peso normal.\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Classificação: Sobrepeso.\n");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Classificação: Obesidade Grau I.\n");
    } else if (imc >= 35 && imc < 39.9) {
        printf("Classificação: Obesidade Grau II (severa).\n");
    } else {
        printf("Classificação: Obesidade Grau III (mórbida).\n");
    }

    return 0;
}
