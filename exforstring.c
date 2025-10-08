#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];       // destino
    char sobrenome[20];  // origem extra
    char copia[30];

    // 1) strcpy → copiar string
    strcpy(nome, "Maria"); 
    printf("Nome após strcpy: %s\n", nome);

    // 2) strcat → concatenar string
    strcpy(sobrenome, " Silva");
    strcat(nome, sobrenome);  
    printf("Nome completo (strcat): %s\n", nome);

    // 3) strlen → tamanho da string
    printf("Tamanho do nome completo: %lu caracteres\n", strlen(nome));

    // 4) strcmp → comparar strings
    strcpy(copia, "Maria Silva");
    if (strcmp(nome, copia) == 0) {
        printf("As strings sao iguais: %s == %s\n", nome, copia);
    } else {
        printf("As strings sao diferentes: %s != %s\n", nome, copia);
    }

    return 0;
}
