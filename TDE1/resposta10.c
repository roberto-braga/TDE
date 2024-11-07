#include <stdio.h>

#define MAX_CLUBES 10

struct Clube {
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
};

void encontrarClubesExtremos(struct Clube clubes[], int numClubes, struct Clube** campeao, struct Clube** ultimo) {
    *campeao = &clubes[0];
    *ultimo = &clubes[0];

	int i;
    for (i = 1; i < numClubes; i++) {
        if (clubes[i].vitorias > (*campeao)->vitorias) {
            *campeao = &clubes[i];
        }
        if (clubes[i].vitorias < (*ultimo)->vitorias) {
            *ultimo = &clubes[i];
        }
    }
}

int main() {
    struct Clube clubes[MAX_CLUBES];
    int numClubes;

    printf("Digite o numero de clubes a serem cadastrados (maximo %d): ", MAX_CLUBES);
    scanf("%d", &numClubes);
    
    if (numClubes > MAX_CLUBES || numClubes < 1) {
        printf("O numero deve estar entre 1 e %d.\n", MAX_CLUBES);
        return 1;
    }

	int i;
    for (i = 0; i < numClubes; i++) {
        printf("\nCadastro do Clube %d\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &clubes[i].id);
        
        printf("Nome: ");
        scanf(" %[^\n]s", clubes[i].nome); 
        
        printf("Vitorias: ");
        scanf("%d", &clubes[i].vitorias);
        
        printf("Empates: ");
        scanf("%d", &clubes[i].empates);
        
        printf("Derrotas: ");
        scanf("%d", &clubes[i].derrotas);
        
        printf("Gols Pro: ");
        scanf("%d", &clubes[i].gols_pro);
        
        printf("Gols Contra: ");
        scanf("%d", &clubes[i].gols_contra);
    }

    struct Clube* campeao;
    struct Clube* ultimo;
    
    encontrarClubesExtremos(clubes, numClubes, &campeao, &ultimo);

    printf("\nClube Campeao:\n");
    printf("ID: %d\n", campeao->id);
    printf("Nome: %s\n", campeao->nome);
    printf("Vitorias: %d\n", campeao->vitorias);
    printf("Empates: %d\n", campeao->empates);
    printf("Derrotas: %d\n", campeao->derrotas);
    printf("Gols Pro: %d\n", campeao->gols_pro);
    printf("Gols Contra: %d\n", campeao->gols_contra);

    printf("\nUltimo Colocado:\n");
    printf("ID: %d\n", ultimo->id);
    printf("Nome: %s\n", ultimo->nome);
    printf("Vitorias: %d\n", ultimo->vitorias);
    printf("Empates: %d\n", ultimo->empates);
    printf("Derrotas: %d\n", ultimo->derrotas);
    printf("Gols Pro: %d\n", ultimo->gols_pro);
    printf("Gols Contra: %d\n", ultimo->gols_contra);

    return 0;
}
