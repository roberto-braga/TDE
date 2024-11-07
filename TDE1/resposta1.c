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

    float metrica;
    printf("Qual a metrica? \n");  
    scanf("%f", &metrica);

    int contador = 0;  

    for (i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].valor < metrica) {
            contador++;
        }
    }

    printf("O numero de produtos abaixo da metrica eh: %d\n", contador);

    return 0;  
}
