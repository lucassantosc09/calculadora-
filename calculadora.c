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

//codigo desenvolvido no sabado(24/08)
void decimalHexadecimal(int numero){
 int hexadecimal[32];
 int i = 0;
 while(numero > 0){
  int resto = numero % 16;
   if (resto < 10) {
     hexadecimal[i] = resto + '0';
   } else {
     hexadecimal[i] = resto - 10 + 'A';
   }
   
   printf("Dividindo %d por 16, resto = %c\n", numero, hexadecimal[i]);
   numero = numero/16;
   i++;
}
  printf("Resulta em Hexadecimal: ");
  for(int j = i-1; j>=0; j--){
    printf("%c", hexadecimal[j]);
  }
  printf("\n");
}

void decimalBCD(int numero){
  int digito;

  printf("\nPasso a passo da conversão para BCD:\n");
  while (numero > 0) {
    digito = numero % 10;
    printf("Dígito %d em binário é: ", digito);

    for (int i = 3; i >= 0; i--) {
     printf("%d", (digito >> i) & 1);
      }
    printf("\n");
    numero = numero / 10;
      }
  printf("Os dígitos são combinados para formar o BCD.\n");
  }

//codigo alterado constantemente no replit, codigo final(29/08)
void decimalComplementoDe2(int numero) {
    if (numero >= 0) {
        printf("\nErro: O complemento de 2 só é válido para números negativos.\n");
        return;
    }
  
  int complemento2[16];
    int i;

    unsigned short numeroPositivo = (numero >= 0) ? numero : -numero;
    unsigned short valor = numeroPositivo;

    printf("\nPasso a passo da conversão para Binário (Complemento de 2 com 16 bits):\n");

 
    printf("\n1. Representação binária do valor absoluto (%d):\n", numeroPositivo);
    for (i = 15; i >= 0; i--) {
        complemento2[i] = valor % 2; 
        valor = valor / 2;
    }
    for (i = 0; i < 16; i++) {
        printf("%d", complemento2[i]);
    }
    printf("\n");

    if (numero < 0) {
    
        printf("\n2. Inversão dos bits (complemento de 1):\n");
        for (i = 0; i < 16; i++) {
            complemento2[i] = complemento2[i] == 0 ? 1 : 0; 
            printf("%d", complemento2[i]);
        }
        printf("\n");

   
        printf("\n3. Adição de 1 ao complemento de 1 para obter o complemento de 2:\n");
        for (i = 15; i >= 0; i--) {
            if (complemento2[i] == 0) {
                complemento2[i] = 1; 
                break;
            } else {
                complemento2[i] = 0; 
            }
        }
        for (i = 0; i < 16; i++) {
            printf("%d", complemento2[i]);
        }
        printf("\n");
    }

    printf("\nNúmero %d em complemento de 2 (16 bits) é: ", numero);
    for (i = 0; i < 16; i++) {
        printf("%d", complemento2[i]);
    }
    printf("\n");
}


int main(void) {
  int numero;

  printf("Digite um número em base 10: ");
  scanf("%d", &numero);

  decimalBinario(numero);
  decimalOctal(numero);
  decimalHexadecimal(numero);
  decimalBCD(numero);
  decimalComplementoDe2(numero);
  return 0;
}
