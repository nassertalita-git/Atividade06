#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "atividade";
    int i, j;
    char aux;
    
   
    int tamanho = strlen(palavra);
    
    printf("Palavra original: %s\n", palavra);
    
   
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
       
        aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }
    
    printf("Palavra invertida: %s\n", palavra);
    
    return 0;
}