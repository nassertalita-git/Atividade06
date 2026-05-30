#include <stdio.h>
#include <ctype.h> 


void transformarMaiuscula(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
       
        str[i] = toupper(str[i]);
    }
}

int main() {
    char texto[] = "desenvolvimento em linguagem c";
    
    printf("Texto original: %s\n", texto);
    
   
    transformarMaiuscula(texto);
    
    printf("Texto em maiusculas: %s\n", texto);
    
    return 0;
}