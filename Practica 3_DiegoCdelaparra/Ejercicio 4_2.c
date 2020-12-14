#include <stdio.h>
int binario, numero, dato;
int main() {
  printf("Introducir un numero ");
  scanf("%d",&numero);
  while (numero > 0) {
    binario = numero%2;
    printf("%d\n",binario);
    numero = numero/2;
  }
  return 0;
}
