#include<stdio.h>

int main(){
float valordia,valorfinal, desconto;

printf("Quantos dias trabalhados? \n");
scanf("%f",&valordia);

valorfinal = valordia* 45;
desconto = valorfinal* 8/100;
valorfinal = valorfinal - desconto;

printf("O valor total a ser pago e: R$%.2f\n",valorfinal);
printf("Desconto de: R$%.2f\n",desconto);
return 0;


}
   