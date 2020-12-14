#include <stdio.h>
int leerdatos(int *arr, int tamaño);
int imprimir(int *arr, int tamaño);
int suma(int *arr, int tamaño);
int tamaño;
int arrA[99], arrB[99], arrC[99];
int main() {
  printf("Ingresar tamaño de arreglo para ambos elementos\n");
  scanf("%d",&tamaño);
  printf("Ingresar %d elementos al arreglo 1:\n",tamaño);
  leerdatos(arrA,tamaño);
  printf("Ingresar %d elementos al arreglo 2:\n",tamaño);
  leerdatos(arrB,tamaño);
  printf("La suma de los dos vectores es:\n");
  suma(arrC,tamaño);
  return 0;
}
int leerdatos(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  printf("Pos[%d] => ",i);
  scanf("%d",&arr[i]);
  }
}
int suma(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  arr[i]=arrA[i]+arrB[i];
  printf("Pos[%d] => %d\n",i,arr[i]);
  }
}
