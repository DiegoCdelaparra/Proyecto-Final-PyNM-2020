//Calcular la fuerza de atraccion del peso de una persona
//W=mg dada su masa m y la constante gravitatoria g = 9.8m/s^2
#include <stdio.h>
#include <math.h>
#define gravitatoria 9.8
float masa;
float fuerza;
int main() {
  printf("Ingresar el peso de la persona en kg\n");
  scanf("%f",&masa );
  fuerza = masa*gravitatoria;
  printf("La fuerza de atraccion es de %0.1f N\n",fuerza);
  return 0;
}
