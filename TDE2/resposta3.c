#include <stdio.h>

int main() {
    char str[100];  

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Cada caractere da string em uma linha:\n");
    int i;
	for(i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
