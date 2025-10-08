#include <stdio.h>
#include <conio.h>

int main(){
    char sexo;
    int idade;
    float altura, peso;

    printf("------\nDigite seu sexo, sua idade, sua altura e seu peso: \n-------");
    scanf("%c %d %f %f",&sexo,&idade,&altura,&peso);

    printf("Sexo: %c\nIdade: %d\naltura:  %.2f\nPeso: %.2f\n", sexo, idade, altura, peso);

  printf("\nAperte em qualquer tecla para finalizar.\n");
  getch();

}
