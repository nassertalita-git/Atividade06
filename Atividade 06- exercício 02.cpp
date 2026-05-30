#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "gato";
    char str2[] = "gato";
    char str3[] = "cachorro";
    
    // Comparando str1 e str2 (são iguais)
    int resultado1 = strcmp(str1, str2);
    printf("Comparando '%s' com '%s': %d\n", str1, str2, resultado1);
    
    // Comparando str1 e str3 (são diferentes)
    int resultado2 = strcmp(str1, str3);
    printf("Comparando '%s' com '%s': %d\n", str1, str3, resultado2);
    
    // Exemplo prático com IF
    if (strcmp(str1, str2) == 0) {
        printf("\nAs strings '%s' e '%s' sao exatamente iguais!\n", str1, str2);
    } else {
        printf("\nAs strings sao diferentes.\n");
    }
    
    return 0;
}