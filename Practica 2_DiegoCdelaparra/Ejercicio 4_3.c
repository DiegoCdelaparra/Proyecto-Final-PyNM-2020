#include <stdio.h>
#include <math.h>
float ax, bx, c, resultado1, resultado2;
int main() {
  printf("Introducir el valor de ax ");
  scanf("%f",&ax);
  printf("Introducir el valor de bx ");
  scanf("%f",&bx);
  printf("Introducir el valor de c ");
  scanf("%f",&c);
  resultado1 = (-bx+(sqrt(pow(bx,2)-(4*ax*c))))/(2*ax);
  resultado2 = (-bx-(sqrt(pow(bx,2)-(4*ax*c))))/(2*ax);
  if (pow(bx,2)-(4*ax*c)<0) {
    printf("ERROR:las soluciones no son reales\n");
  } else {
    printf("La primera solucion es %0.1f\n",resultado1);
    printf("La segunda solucion es %0.1f\n",resultado2);
  }
  return 0;
}
