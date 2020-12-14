#include "stdio.h"
double numero, i, x=0, y=1, z=1, aureo,penultimo, ultimo;
int main() {
  printf("Escriba el numero de iteraciones a mostrar: ");
  scanf("%lf",&numero);
  printf("1 , ");
  for (i=1;i<numero;i++) {
    z = x + y;
    x = y;
    y = z;
    ultimo = y;
    penultimo = x;
    printf("%1.0lf , ",z);
  }
  aureo = ultimo/penultimo;
  printf("El numero aureo es %lf\n",aureo);
  return 0;
}
