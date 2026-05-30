#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "LinguagemC";
    int contador_vogais = 0;
    
    printf("Palavra original: %s\n", palavra);
    
   
    for (int i = 0; palavra[i] != '\0'; i++) {
        char letra = palavra[i];
        
        
        if (letra == 'a' || letra == 'A' ||
            letra == 'e' || letra == 'E' ||
            letra == 'i' || letra == 'I' ||
            letra == 'o' || letra == 'O' ||
            letra == 'u' || letra == 'U') {
            
            contador_vogais++; // Se for vogal, incrementa o contador
        }
    }
    
    printf("A palavra possui %d vogais.\n", contador_vogais);
    
    return 0;
}