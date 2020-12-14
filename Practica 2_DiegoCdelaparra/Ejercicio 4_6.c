#include <stdio.h>
int departamento, bolsas;
float monto, descuento, tarifa, requerido;
int main() {
  printf("Seleccionar el departamento en el que compro en tienda\n");
  printf("1.Perfumeria\n");
  printf("2.Salchichoneria\n");
  printf("3.Carniceria\n");
  printf("4.Limpieza\n");
  scanf("%d",&departamento);
  printf("¿Cuantas bolsas ocupara?\n");
  scanf("%d",&bolsas);
  switch (departamento) {
    case 1:
    printf("¿Cual es el monto de su compra?\n");
    scanf("%f",&monto);
    descuento = monto * 0.2;
    requerido = bolsas * 0.1;
    tarifa = monto - descuento + requerido;
    printf("Su total a pagar con descuento es %0.2f\n",tarifa);
    break;
    case 2:
    printf("¿Cual es el monto de su compra?\n");
    scanf("%f",&monto);
    descuento = monto * 0.4;
    requerido = bolsas * 0.1;
    tarifa = monto - descuento + requerido;
    printf("Su total a pagar con descuento es %0.2f\n",tarifa);
    break;
    case 3:
    printf("¿Cual es el monto de su compra?\n");
    scanf("%f",&monto);
    descuento = monto * 0.2;
    requerido = bolsas * 0.1;
    tarifa = monto - descuento + requerido;
    printf("Su total a pagar con descuento es %0.2f\n",tarifa);
    break;
    case 4:
    printf("¿Cual es el monto de su compra?\n");
    scanf("%f",&monto);
    descuento = monto * 0.35;
    requerido = bolsas * 0.1;
    tarifa = monto - descuento + requerido;
    printf("Su total a pagar con descuento es %0.2f\n",tarifa);
    break;
    default:
    printf("Opcion incorrecta\n");
    break;
  }
  return 0;
}
