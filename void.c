#include <stdio.h>
#include <conio.h>
void desenharlinha(int tamanho, int caractere){
int i;
printf("\n");
for(i=0;i<tamanho;i++){
  printf("%c",caractere);
}
printf("\n");
}
int main(){
  printf("Ola mundo, bem vindo ao meu primeiro programa.\n");
  desenharlinha(25,'|');
  printf("Esta e a primeira secao deste programa.\n");
  desenharlinha(25,'|');
  printf("Por hoje e so.\n\n");
getch();
return 0;
}