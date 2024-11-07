#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];  
    int letters = 0, digits = 0, specials = 0;  

    // Leitura da string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = '\0';  
     
	 int i;
     for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            letters++;
        } else if (isdigit(str[i])) { 
            digits++;
        } else {  
            specials++;
        }
    }

    
    printf("Numero de letras: %d\n", letters);
    printf("Numero de digitos: %d\n", digits);
    printf("Numero de caracteres especiais: %d\n", specials);

    return 0;
}
