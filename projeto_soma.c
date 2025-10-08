#include<stdio.h>
int main(){
   int numero, soma = 0;
 printf("Digite um numero para somar:\n");
 scanf("%d",&numero);

 while (numero !=0) {
   soma += numero;
   scanf("%d",&numero);
 }
 printf("A soma dos numeros digitados e: %d\n",soma);

 return 0;
 

}
   
