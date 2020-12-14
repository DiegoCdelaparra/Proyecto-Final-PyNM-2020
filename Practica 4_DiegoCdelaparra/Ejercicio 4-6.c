#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int LlenadoAMatriz(int arrD[][99], int filas, int columnas);
int arrD[99][99],filas,columnas;
int main() {
  printf("Ingresar numero de filas\n");
  scanf("%d",&filas);
  printf("Ingresar numero de columnas\n");
  scanf("%d",&columnas);
  LlenadoAMatriz(arrD,filas,columnas);
  printf("\n");
  return 0;
}
int LlenadoAMatriz(int arrD[][99], int filas, int columnas){
  int i,j;
  for(i=1; i<=filas; i++){
    printf("\n");
    for(j=1; j<=columnas; j++){
    arrD[i][j]=1+rand()%100;
    printf(" %d",arrD[i][j]);
  }
}
}
