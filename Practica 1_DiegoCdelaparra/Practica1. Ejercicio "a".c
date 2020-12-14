
//El usuario ingresa el radio de una esfera y se calculara su volumen
//V=(4/3)(PI(r^3)). Imprimir un mensaje con el volumen calculado
//en pantalla. Definir el volumen como una constante
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
float radio;
float volumen;
int main() {
  printf ("Ingresar el valor del radio en cm\n");
  scanf ("%f",&radio);
  volumen = (4*PI*pow(radio,3))/3;
  printf("El volumen de la esfera es de %f cm^3\n",volumen);
  return 0;
}
