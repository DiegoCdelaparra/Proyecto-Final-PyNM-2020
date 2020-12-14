#include <stdio.h>
int leerdatos(int *arr, int tamaño);
int imprimir(int *arr, int tamaño);
int arrA[99], arrB[99];
int tamaño;
int main() {
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
