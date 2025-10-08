#include <stdio.h>
#include <conio.h>

int somar( int a, int b){
  int resultado;
  resultado = a + b;
  return resultado;
}
int main(){
  int numero1 = 15;
  int numero2 = 25;
  int total;

  total = somar(numero1, numero2);

  printf("O primeiro numero e: %d\n",numero1);
  printf("O segundo numero e: %d\n",numero2);
  printf("A soma dos dois numeros e: %d\n",total);

  printf("A soma de 100 + 50 e: %d",somar(100,50));
  return 0;
}
/*#include <stdio.h>

int subtrair( int a, int b){
int resultado;
resultado = a - b;
return resultado;
}

int main(){
  int numero1 = 20;
  int numero2 = 17;
  int total;
  total = subtrair(numero1,numero2);

  printf("O primeiro numero e: %d\n", numero1);
  printf("O segundo numero e: %d\n",numero2);
  printf("A subtracao dos dois numeros e: %d\n",total);

printf("a subtracao de 10 - 5 e: %d\n",subtrair(10,5));

return 0;
} 
SUBTRAÇÃO 
*/