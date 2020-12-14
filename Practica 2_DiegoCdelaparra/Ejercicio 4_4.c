#include <stdio.h>
int opcion;
float ganancia, tasa, impuestos;
int main() {
  printf("Introducir el numero correspondiente a su estado civil\n");
  printf("Soltero: 1\n");
  printf("Casado: 2\n");
  scanf("%d",&opcion);
  if (opcion == 1) {
    printf("Introducir su ganancia mensual\n");
    scanf("%f",&ganancia);
    if (ganancia < 32000) {
      impuestos = ganancia*0.1;
      printf("Sus impuestos son %0.1f\n",impuestos);
    } else {
      impuestos = ganancia*0.25;
      printf("Sus impuestos son %0.1f\n",impuestos);
    }
  }
  if (opcion == 2) {
    printf("Introducir su ganancia mensual\n");
    scanf("%f",&ganancia);
    if (ganancia < 64000) {
      impuestos = ganancia*0.1;
      printf("Sus impuestos son %0.1f\n",impuestos);
    } else {
      impuestos = ganancia*0.25;
      printf("Sus impuestos son %0.1f\n",impuestos);
    }
  }
  return 0;
}
