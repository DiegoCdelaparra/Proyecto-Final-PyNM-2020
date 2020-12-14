#include <stdio.h>
int numero;
int main() {
  printf("Introducir un numero entero\n");
  scanf("%d",&numero);
  if (numero % 2 == 0) {
    printf("El numero %d es par\n",numero);
  } else {
    printf("El numero %d es impar\n",numero);
  }
  return 0;
}
