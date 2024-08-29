//atividade calculadora, LUCAS SANTOS CAVALCANTI 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// codido desenvolvido na sexta feira(23/08)
void decimalBinario(int numero){
  int binario[32];
  int i = 0; 

  while(numero > 0){
    binario[i] = numero % 2; 
    printf("Dividindo %d por 2, resto = %d\n", numero,binario[i]);
    numero = numero / 2; 
    i++; 
  }

  printf("Resulta em Binario: ");
  for(int j = i -1; j >=0; j--){
    printf("%d", binario[j]);
  }
  printf("\n");
}

void decimalOctal(int numero){
  int octal[32];
  int i = 0; 
  while(numero >0){
    octal[i] = numero % 8;
     printf("Dividindo %d por 8, resto = %d\n", numero, octal[i]);
    numero = numero/8;
    i++; 
   }
  
  printf("Resulta em Octal: ");
  for(int j = i-1; j>=0; j--){ 
   printf("%d", octal[j]);
  }
  printf("\n");
}
