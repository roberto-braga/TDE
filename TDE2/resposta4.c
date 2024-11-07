#include <stdio.h>

int main() {
    char str[100];  
    int count = 0;  

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  

    int i;
	for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {  
            count++;
        }
    }

    printf("O caractere 'a' aparece %d vez(es) na string.\n", count);

    return 0;
}
