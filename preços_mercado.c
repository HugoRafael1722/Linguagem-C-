#include <stdio.h>

// Função para exibir o vetor
void exibirVetor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("R$ %.2f  ", vetor[i]); // exibe com 2 casas decimais
    }
    printf("\n");
}

// Função Bubble Sort (ordena em ordem crescente)
void bubbleSortCrescente(float vetor[], int tamanho) {
    int i, j;
    float aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            // Se o preço atual for maior que o próximo, troca
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

// Função Bubble Sort (ordena em ordem decrescente)
void bubbleSortDecrescente(float vetor[], int tamanho) {
    int i, j;
    float aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            // Se o preço atual for menor que o próximo, troca
            if (vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    // Vetor com preços de 10 produtos diferentes do supermercado
    float precos[10] = {5.99, 12.49, 3.75, 20.00, 8.90, 15.30, 2.50, 10.00, 6.80, 18.45};
    int tamanho = 10;

    printf("=== ORDENACAO DE PRECOS DE PRODUTOS (BUBBLE SORT) ===\n\n");

    // Exibe os preços originais
    printf("Precos originais:\n");
    exibirVetor(precos, tamanho);

    // Ordenação crescente
    bubbleSortCrescente(precos, tamanho);
    printf("\nPrecos em ordem crescente:\n");
    exibirVetor(precos, tamanho);

    // Ordenação decrescente
    bubbleSortDecrescente(precos, tamanho);
    printf("\nPrecos em ordem decrescente:\n");
    exibirVetor(precos, tamanho);

    return 0;
}

