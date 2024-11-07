#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];  

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);  

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);  

    str1[strcspn(str1, "\n")] = '\0'; 
    str2[strcspn(str2, "\n")] = '\0';  

    if (strcmp(str1, str2) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
