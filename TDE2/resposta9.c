#include <stdio.h>

int main() {
    char str[100];  
    int count = 0;  

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = '\0'; 

    int i;
	for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;  
        }
    }

    printf("O numero de espaços em branco na string eh: %d\n", count);

    return 0;
}
