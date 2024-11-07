#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];  
    int count = 0; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = '\0';  

    int i;
	for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);  
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;  
        }
    }

    printf("O numero de vogais na string eh: %d\n", count);

    return 0;
}
