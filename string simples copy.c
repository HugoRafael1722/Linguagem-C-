#include <stdio.h>  
  
int main() {     int almocos[7];           // vetor com 7 posições (um para cada dia da 
semana)     char *dias[7] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", 
"Sexta",  
"Sábado"};  
    int i, total = 0;     
float media;  
  
    printf("=== Consumo de Almoços por Dia da Semana ===\n");  
  
    // Loop for para ler os dados     
for (i = 0; i < 7; i++) {  
        printf("Digite a quantidade de almoços servidos no(a) %s: ", dias[i]);         
scanf("%d", &almocos[i]);         total += almocos[i];     
    }  
  
    // Calcula média semanal     media 
= total / 7.0;  
  
    printf("\n=== Relatório da Semana ===\n");  
    for (i = 0; i < 7; i++) {         printf("%s: %d 
almoços\n", dias[i], almocos[i]);  
    }  
  
    printf("\nTotal de almoços na semana: %d\n", total);  
    printf("Média diária: %.2f\n", media);  
  
    // Descobrir o dia com maior consumo     
int diaPico = 0;     for (i = 1; i < 7; i++) {         
if (almocos[i] > almocos[diaPico]) {  
            diaPico = i;  
        }  
    }  
    printf("Dia de maior consumo: %s (%d almoços)\n", dias[diaPico], 
almocos[diaPico]);  
  
    //  Menu interativo com while e switch-case      int opcao = 0;     while (opcao != 8) {         
printf("\n=== Consulta ===\n");         printf("Digite um número de 1 a 7 para ver os 
almoços de um dia (1=Domingo,  
7=Sábado).\n");  
        printf("Digite 8 para sair: ");         
scanf("%d", &opcao);  
  
        switch(opcao) {             
case 1:  
              printf("Domingo: %d almoços\n", almocos[0]);             
break;             case 2:  
              printf("Segunda: %d almoços\n", almocos[1]);             
break;             case 3:  
              printf("Terça: %d almoços\n", almocos[2]);  
            break;             
case 4:  
              printf("Quarta: %d almoços\n", almocos[3]);             
break;             case 5:  
              printf("Quinta: %d almoços\n", almocos[4]);             
break;             case 6:  
              printf("Sexta: %d almoços\n", almocos[5]);  
            break;             
case 7:  
              printf("Sábado: %d almoços\n", almocos[6]);             
break;             case 8:  
              printf("Saindo da consulta...\n");             
break;             default: printf("Opção 
inválida!\n");  
        }  
    }  
  
    return 0;  
} 