#include <stdio.h>
int leerdatosM(int arrD[][99], int filas, int columnas);
int imprimirM(int arrD[][99], int filas, int columnas);
int arrD[99][99], filas, columnas;
int main() {
  printf("Ingresar numero de filas\n");
  scanf("%d",&filas);
  printf("Ingresar numero de columnas\n");
  scanf("%d",&columnas);
  leerdatosM(arrD,filas,columnas);
  printf("La matriz es\n");
  imprimirM(arrD,filas,columnas);
  printf("\n");
  return 0;
}
int leerdatosM(int arrD[][99], int filas, int columnas){
  int i,j;
  for(i=1; i<=filas; i++)
    for(j=1; j<=columnas; j++){
    printf("Posicion[%d][%d] => ",i,j);
    scanf("%d",&arrD[i][j]);
  }
}
int imprimirM(int arrD[][99], int filas, int columnas){
  int i,j;
  for(i=1; i<=filas; i++){
    printf("\n");
    for(j=1; j<=columnas; j++)
    printf(" %d",arrD[i][j]);
  }
}
