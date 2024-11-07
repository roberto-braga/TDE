#include <stdio.h>

#define MAX_PRODUTOS 5
#define NOME_MAX 20

typedef struct {
    int id;
    char nome[NOME_MAX];
    float valor;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int i;
    float soma = 0.0;  

    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
        
        soma += produtos[i].valor;
    }

    float media = soma / MAX_PRODUTOS;

    printf("A media dos precos dos produtos eh: %.2f\n", media);

    printf("Produtos com preco acima da media:\n");
    for (i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].valor > media) {
            printf("ID: %d, Nome: %s, Valor: %.2f\n", produtos[i].id, produtos[i].nome, produtos[i].valor);
        }
    }

    return 0;
}
