#include<stdio.h>

int main(){
  int pessoas;
  float despesa, gorjeta, resultado, valorpessoa;

printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
scanf("%f%f%d",&despesa,&gorjeta, &pessoas);

resultado = despesa * gorjeta/100 + despesa;
valorpessoa = despesa/pessoas;
printf("Cada um vai pagar R$%.2f", valorpessoa);
return 0;

      
}
   