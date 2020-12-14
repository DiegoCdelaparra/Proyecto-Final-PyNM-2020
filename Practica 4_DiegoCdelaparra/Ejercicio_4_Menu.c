#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int leerdatos(int *arr, int tamaño);
int imprimir(int *arr, int tamaño);
int Aleatorio(int *arr, int tamaño);
int impAleatorio(int *arr, int tamaño);
int suma(int *arr, int tamaño);
int sumaint(int *arr, int tamaño);
int leerdatosM(int arrD[][99], int filas, int columnas);
int leerdatosD(int arrD[][99], int filas1, int columnas1);
int leerdatosE(int arrE[][99], int filas2, int columnas2);
int imprimirM(int arrD[][99], int filas, int columnas);
int LlenadoAMatriz(int arrD[][99], int filas, int columnas);
int multM(int arrF[][99], int filas1, int columnas1);
int sumaM(int arrF[][99], int filas1, int columnas1);
int filas1, columnas1, filas2, columnas2, ejercicio, tamaño, filas, columnas;
int arrA[99], arrB[99], arrC[99], arrD[99][99], arrE[99][99], arrF[99][99];
int main() {
  printf("Elegir numero de ejercicio\n");
  scanf("%d",&ejercicio);
  switch (ejercicio) {
    case 1:
    printf("Ingresar tamaño de arreglo para ambos elementos\n");
    scanf("%d",&tamaño);
    printf("Ingresar %d elementos al arreglo 1:\n",tamaño);
    leerdatos(arrA,tamaño);
    printf("Ingresar %d elementos al arreglo 2:\n",tamaño);
    leerdatos(arrB,tamaño);
    printf("\nEl arreglo 1 es : \n");
    imprimir(arrA,tamaño);
    printf("\nEl arreglo 2 es : \n");
    imprimir(arrB,tamaño);
    break;
    case 2:
    printf("Ingresar tamaño de arreglo para ambos elementos\n");
    scanf("%d",&tamaño);
    printf("\nEl arreglo 1 es : \n");
    impAleatorio(arrA,tamaño);
    printf("\nEl arreglo 2 es : \n");
    impAleatorio(arrB,tamaño);
    break;
    case 3:
    printf("Ingresar tamaño de arreglo para ambos elementos\n");
    scanf("%d",&tamaño);
    printf("Ingresar %d elementos al arreglo 1:\n",tamaño);
    leerdatos(arrA,tamaño);
    printf("Ingresar %d elementos al arreglo 2:\n",tamaño);
    leerdatos(arrB,tamaño);
    printf("La suma de los dos vectores es:\n");
    suma(arrC,tamaño);
    break;
    case 4:
    printf("Ingresar tamaño de arreglo\n");
    scanf("%d",&tamaño);
    printf("Ingresar %d elementos al arreglo :\n",tamaño);
    leerdatos(arrA,tamaño);
    printf("La suma del arreglo es:\n");
    sumaint(arrB,tamaño);
    break;
    case 5:
    printf("Ingresar numero de filas\n");
    scanf("%d",&filas);
    printf("Ingresar numero de columnas\n");
    scanf("%d",&columnas);
    leerdatosM(arrD,filas,columnas);
    printf("La matriz es\n");
    imprimirM(arrD,filas,columnas);
    printf("\n");
    break;
    case 6:
    printf("Ingresar numero de filas\n");
    scanf("%d",&filas);
    printf("Ingresar numero de columnas\n");
    scanf("%d",&columnas);
    LlenadoAMatriz(arrD,filas,columnas);
    printf("\n");
    break;
    case 7:
    printf("Ingresar numero de filas de matriz 1\n");
    scanf("%d",&filas1);
    printf("Ingresar numero de columnas de matriz 1\n");
    scanf("%d",&columnas1);
    printf("Ingresar numero de filas de matriz 2\n");
    scanf("%d",&filas2);
    printf("Ingresar numero de columnas de matriz 2\n");
    scanf("%d",&columnas2);
    if (filas1==filas2 && columnas1==columnas2) {
      printf("Datos matriz 1\n");
      leerdatosM(arrD,filas1,columnas1);
      printf("Datos matriz 2\n");
      leerdatosE(arrE,filas2,columnas2);
      printf("La suma de las 2 matrices es \n");
      sumaM(arrF,filas1,columnas1);
      printf("\n");
    } else {
      printf("No se puede realizar la suma de matrices\n");
    }
    break;
    case 8:
    printf("Ingresar numero de filas de matriz 1\n");
    scanf("%d",&filas1);
    printf("Ingresar numero de columnas de matriz 1\n");
    scanf("%d",&columnas1);
    printf("Ingresar numero de filas de matriz 2\n");
    scanf("%d",&filas2);
    printf("Ingresar numero de columnas de matriz 2\n");
    scanf("%d",&columnas2);
    if (filas1==columnas2) {
      printf("Datos matriz 1\n");
      leerdatosD(arrD,filas1,columnas1);
      printf("Datos matriz 2\n");
      leerdatosE(arrE,filas2,columnas2);
      printf("La multiplicacion de las 2 matrices es \n");
      multM(arrF,filas1,columnas1);
      printf("\n");
    } else {
      printf("No se puede realizar la multiplicacion de matrices\n");
    }
    break;
  }
  return 0;
}
int leerdatos(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  printf("Pos[%d] => ",i);
  scanf("%d",&arr[i]);
  }
}
int imprimir(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  printf("Pos[%d] => %d\n",i,arr[i]);
  }
}
int Aleatorio(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  arr[i]=1+rand()%100;
  }
}
int impAleatorio(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  Aleatorio(arr,tamaño);
  printf("Pos[%d] => %d\n",i,arr[i]);
  }
}
int suma(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  arr[i]=arrA[i]+arrB[i];
  printf("Pos[%d] => %d\n",i,arr[i]);
  }
}
int sumaint(int *arr, int tamaño){
  int i;
  int suma;
  suma=0;
  for(i=1; i<=tamaño; i++){
  suma=suma+arrA[i];
  }
  printf("%d\n",suma);
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
int leerdatosD(int arrD[][99], int filas1, int columnas1){
  int i,j;
  for(i=1; i<=filas1; i++)
    for(j=1; j<=columnas1; j++){
    printf("Posicion[%d][%d] => ",i,j);
    scanf("%d",&arrD[i][j]);
  }
}
int leerdatosE(int arrE[][99], int filas2, int columnas2){
  int i,j;
  for(i=1; i<=filas2; i++)
    for(j=1; j<=columnas2; j++){
    printf("Posicion[%d][%d] => ",i,j);
    scanf("%d",&arrE[i][j]);
  }
}
int sumaM(int arrF[][99], int filas1, int columnas1){
  int i,j;
  for(i=1; i<=filas1; i++)
  for(j=1; j<=columnas1; j++)
  arrF[i][j]=arrD[i][j]+arrE[i][j];
  for(i=1; i<=filas1; i++){
    printf("\n");
    for(j=1; j<=columnas2; j++)
    printf(" %d", arrF[i][j]);
  }
}
int multM(int arrF[][99], int filas1, int columnas1){
  int i,j,acu,con;
  for(i=1; i<=filas1; i++)
  for(j=1; j<=columnas1; j++){
    for(acu=0, con=0; con<=columnas1; con++)
    acu=acu+arrD[i][con]*arrE[con][j];
    arrF[i][j]=acu;
  }
  for(i=1; i<=filas1; i++){
    printf("\n");
    for(j=1; j<=columnas2; j++)
    printf(" %d",arrF[i][j]);
  }
}
