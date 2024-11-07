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

float calcularMediaGolsPro(struct Clube clubes[], int numClubes) {
    int totalGolsPro = 0;
    int i;
    for (i = 0; i < numClubes; i++) {
        totalGolsPro += clubes[i].gols_pro;
    }
    return (float)totalGolsPro / numClubes;
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

    float mediaGolsPro = calcularMediaGolsPro(clubes, numClubes);
    printf("\nMédia de Gols Pro: %.2f\n", mediaGolsPro);

    printf("\nClubes com Gols Pro acima da media:\n");
    printf("ID\tNome\t\tGols Pro\n");
    for (i = 0; i < numClubes; i++) {
        if (clubes[i].gols_pro > mediaGolsPro) {
            printf("%d\t%s\t%d\n", clubes[i].id, clubes[i].nome, clubes[i].gols_pro);
        }
    }

    return 0;
}
