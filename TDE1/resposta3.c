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

    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }

    int id_busca;
    printf("Informe o ID do produto que deseja atualizar: ");
    scanf("%d", &id_busca);

    int encontrado = 0; 
    for (i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].id == id_busca) {
            encontrado = 1; 
            printf("Produto encontrado!\n");
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Valor atual: %.2f\n", produtos[i].valor);

            
            float novo_valor;
            printf("Digite o novo valor para o produto: ");
            scanf("%f", &novo_valor);
            produtos[i].valor = novo_valor; 

            printf("Valor atualizado com sucesso!\n");
            printf("Novo valor: %.2f\n", produtos[i].valor);
            break; 
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d não encontrado.\n", id_busca);
    }

    return 0;
}
