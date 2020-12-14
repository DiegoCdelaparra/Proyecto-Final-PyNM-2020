#include <stdio.h>
#include <math.h>
float estatura, peso, imc;
int main() {
  printf("Ingrese su estatura en metros\n");
  scanf("%f",&estatura);
  printf("Ingrese su peso en kg\n");
  scanf("%f",&peso);
  imc = (peso)/(pow(estatura,2));
  printf("Su IMC es %0.1f\n",imc);
  if (imc < 18.5){printf("Peso bajo\n");}
  if (imc >= 18.5 && imc <= 24.9){printf("Peso normal\n");}
  if (imc >= 25 && imc <= 29.9){printf("Sobrepeso\n");}
  if (imc >= 30 && imc <= 34.5){printf("Obesidad tipo 1\n");}
  if (imc >= 35 && imc <= 29.9){printf("Obesidad tipo 2\n");}
  if (imc > 40){printf("Hiper obesidad\n");}
  return 0;
}
