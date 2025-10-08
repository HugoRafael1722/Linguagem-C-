#include<stdio.h>

int main(){
  char nota;

  printf("Digite uma nota (A,B,C,D,F):\n");
  scanf("%c",&nota);

  switch(nota){
    case 'A':
    case 'a':
    printf("Excelente.\n");
   break;

  case  'B':
  case  'b':
  printf("Muito bom.\n");
break;
  case 'C':
  case  'c':
  printf("Bom.\n");
break;
  case 'D':
  case  'd':
  printf("Precisa melhor.\n");
break;
  case 'F':
  case  'f':
  printf("Reprovado.\n");
  break;
  }
  return 0;
}
