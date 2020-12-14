//El usuario ingresa su nombre, edad y peso (kg). El programa
//imprime un mensaje con su nombre, edad y peso y calculado
//su indice de masa corporal (IMC) IMC = peso/estatura^2
#include <stdio.h>
#include <math.h>
char nombre[10];
int edad;
int estatura;
float peso;
float indice;
int main() {
  printf("Ingrese su nombre\n");
  scanf("%s",&nombre);
  printf("Ingrese su edad\n");
  scanf("%d",&edad);
  printf("Ingrese su peso\n");
  scanf("%f",&peso);
  printf("Ingrese su estatura\n");
  scanf("%d",&estatura);
  indice = peso/pow(estatura,2);
  printf("Hola %s, tu edad es de %d años y tu estatura es %1.2d centimetros, tu peso es de %0.1f kg y tu indice es de %f\n",nombre,edad,estatura,peso,indice);
  return 0;
}
