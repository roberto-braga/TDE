#include <stdio.h>

#define MAX_CLUBES 10
#define NOME_MAX 20

typedef struct {
	int id;
	char nome[NOME_MAX];
	int vitorias;
	int empates;
	int derrotas;
	int gols_pro;
	int gols_contra;
} Clube;

int calcularpontuacao(int vitorias, int empates) {
	return (vitorias * 3) + (empates * 1);
}

int main() {
    Clube clubes[MAX_CLUBES];
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

    printf("\nDados dos Clubes Cadastrados:\n");
    printf("ID\tNome\t\tPontuação\n");
    for (i = 0; i < numClubes; i++) {
        int pontuacao = calcularpontuacao(clubes[i].vitorias, clubes[i].empates);
        printf("%d\t%s\t%d\n", clubes[i].id, clubes[i].nome, pontuacao);
    }

    return 0;
}
