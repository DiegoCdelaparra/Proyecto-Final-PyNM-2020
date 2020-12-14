#include <stdio.h>
int arrA[99], arrB[99], tamaño;
int leerdatos(int *arr, int tamaño);
int sumaint(int *arr, int tamaño);
int main() {
  printf("Ingresar tamaño de arreglo\n");
  scanf("%d",&tamaño);
  printf("Ingresar %d elementos al arreglo :\n",tamaño);
  leerdatos(arrA,tamaño);
  printf("La suma del arreglo es:\n");
  sumaint(arrB,tamaño);
  return 0;
}
int leerdatos(int *arr, int tamaño){
  int i;
  for(i=1; i<=tamaño; i++){
  printf("Pos[%d] => ",i);
  scanf("%d",&arr[i]);
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
