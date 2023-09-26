/*Enunciado:Q3
CLASSIFICAR POR IDADE - Crie uma aplicação que deverá solicitar do usuário uma idade qualquer
(número inteiro), com base nessa idade, o sistema deverá exibir diferentes mensagens conforme a
tabela a seguir: a) Idade entre 0 e 10 anos - Olá criança, b) Idade entre 11 e 14 anos - Olá, você é um(a)
pré-adolescente; c) Idade entre 15 e 18 anos - Parabéns, você já pode ser um eleitor; d) Idade entre 19
e 21 anos - Hummm, você já é um adulto; e) Acima de 21 anos - Bem, agora já está na hora de sair de
casa e seguir sua vida...
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int idade;

    // Solicitar ao usuário a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Verificar a faixa etária e exibir a mensagem correspondente
    if (idade >= 0 && idade <= 10) {
        printf("Olá criança.\n");
    } else if (idade >= 11 && idade <= 14) {
        printf("Olá, você é um(a) pré-adolescente.\n");
    } else if (idade >= 15 && idade <= 18) {
        printf("Parabéns, você já pode ser um eleitor.\n");
    } else if (idade >= 19 && idade <= 21) {
        printf("Hummm, você já é um adulto.\n");
    } else if (idade > 21) {
        printf("Bem, agora já está na hora de sair de casa e seguir sua vida...\n");
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}


