#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int Aleatorio(int *arr, int tamaño);
int impAleatorio(int *arr, int tamaño);
int tamaño;
int arrA[99], arrB[99];
int main() {
  printf("Ingresar tamaño de arreglo para ambos elementos\n");
  scanf("%d",&tamaño);
  printf("\nEl arreglo 1 es : \n");
  impAleatorio(arrA,tamaño);
  printf("\nEl arreglo 2 es : \n");
  impAleatorio(arrB,tamaño);

  return 0;
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
