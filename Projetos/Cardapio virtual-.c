#include <stdio.h>

int main() {
    int opcao = -1, item;
    float total = 0;

    // Loop principal com while
    while (opcao != 4) {
        printf("\n=== CARDÁPIO DIGITAL ===\n");
        printf("1 - Pratos\n");
        printf("2 - Bebidas\n");
        printf("3 - Sobremesas\n");
        printf("4 - Finalizar pedido\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Decisão com switch
        switch(opcao) {
            case 1:
                printf("\n--- PRATOS ---\n");
                printf("1 - Lasanha (R$25.00)\n");
                printf("2 - Pizza (R$30.00)\n");
                printf("Escolha: ");
                scanf("%d", &item);
                if (item == 1) total += 25.0;
                else if (item == 2) total += 30.0;
                break;

            case 2:
                printf("\n--- BEBIDAS ---\n");
                printf("1 - Suco (R$8.00)\n");
                printf("2 - Refrigerante (R$10.00)\n");
                printf("Escolha: ");
                scanf("%d", &item);
                if (item == 1) total += 8.0;
                else if (item == 2) total += 10.0;
                break;

            case 3:
                printf("\n--- SOBREMESAS ---\n");
                printf("1 - Pudim (R$12.00)\n");
                printf("2 - Sorvete (R$15.00)\n");
                printf("Escolha: ");
                scanf("%d", &item);
                if (item == 1) total += 12.0;
                else if (item == 2) total += 15.0;
                break;

            case 4:
                printf("\n=== RESUMO DO PEDIDO ===\n");
                if (total > 50) {
                    printf("Total sem desconto: R$%.2f\n", total);
                    total *= 0.9; // aplica 10% de desconto
                    printf("Total com desconto: R$%.2f\n", total);
                } else {
                    printf("Total: R$%.2f\n", total);
                }
                printf("Obrigado pelo pedido!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
