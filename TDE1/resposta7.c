#include <stdio.h>
#include <string.h>

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


int calcularPontuacao(int vitorias, int empates) {
    return (vitorias * 3) + (empates * 1);
}


struct Clube* buscarClube(struct Clube clubes[], int numClubes, int id) {
    int i;
	for (i = 0; i < numClubes; i++) {
        if (clubes[i].id == id) {
            return &clubes[i]; 
        }
    }
    return NULL; 
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

    
    int idBuscado;
    printf("\nDigite o ID do clube que deseja buscar: ");
    scanf("%d", &idBuscado);

    struct Clube* clubeEncontrado = buscarClube(clubes, numClubes, idBuscado);
    if (clubeEncontrado != NULL) {
        
        printf("\nClube encontrado:\n");
        printf("ID: %d\n", clubeEncontrado->id);
        printf("Nome: %s\n", clubeEncontrado->nome);
        printf("Vitórias: %d\n", clubeEncontrado->vitorias);
        printf("Empates: %d\n", clubeEncontrado->empates);
        printf("Derrotas: %d\n", clubeEncontrado->derrotas);
        printf("Gols Pró: %d\n", clubeEncontrado->gols_pro);
        printf("Gols Contra: %d\n", clubeEncontrado->gols_contra);
        printf("Pontuação: %d\n", calcularPontuacao(clubeEncontrado->vitorias, clubeEncontrado->empates));
    } else {
        printf("Clube com ID %d nao encontrado.\n", idBuscado);
    }

    return 0;
}
