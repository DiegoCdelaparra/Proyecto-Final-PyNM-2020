#include <stdio.h>
#include <math.h>
float A[3][3]={{10,2,-1},{-3,-6,2},{1,1,5}};
float b[3]={27,-61.5,-21.5};
float x_inicial1,x_inicial2,x_inicial3;
float x_iteracion_1,x_iteracion_2,x_iteracion_3,x1,x2,x3;
float Error(float x1, float x2);
int i,j,opcion;
int main() {
  printf("Que metodo utilizar para este sistema de ecuaciones?");
  printf("\n  10x1  +  2x2  -  x3 =  27\n");
  printf("  -3x1  -  6x2  - 2x3 = -61.5\n");
  printf("    x1  +   x2  + 5x3 = -21.5\n");
  printf("1. Gauss Seidel\n");
  printf("2. Jacobi\n");
  scanf("%d",&opcion);
  switch (opcion) {
    case 1:
    for(j=0;j<5;j++){
        if(j==0){
            x_iteracion_1 = b[0]/A[0][0];
            x1 = x_iteracion_1;
            x_iteracion_2 = ((-A[1][0]*x_iteracion_1)+b[1])/A[1][1];
            x2 = x_iteracion_2;
            x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
            x3 = x_iteracion_3;
            printf("\nx_1 en la iteracion 1 es igual a %f\n",x_iteracion_1);
            printf("x_2 en la iteracion 1 es igual a %f\n",x_iteracion_2);
            printf("x_3 en la iteracion 1 es igual a %f\n",x_iteracion_3);
        }

        else {
            x_iteracion_1 = ((-A[0][1]*x_iteracion_2)-(A[0][2]*x_iteracion_3)+b[0])/A[0][0];
            printf("\nx_1 en la iteracion %d es igual a %f con un error de %f\n",j+1,x_iteracion_1,Error(x_iteracion_1,x1));
            x1 = x_iteracion_1;
            x_iteracion_2 = ((-A[1][0]*x_iteracion_1)-(A[1][2]*x_iteracion_3)+b[1])/A[1][1];
            printf("x_2 en la iteracion %d es igual a %f con un error de %f\n",j+1,x_iteracion_2,Error(x_iteracion_2,x2));
            x2 = x_iteracion_2;
            x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
            printf("x_3 en la iteracion %d es igual a %f con un error de %f\n",j+1,x_iteracion_3,Error(x_iteracion_3,x3));
            x3 = x_iteracion_3;
            }
          }
    break;
    case 2:
    for(j=0;j<5;j++){
        if(j==0){
            x_iteracion_1 = b[0]/A[0][0];
            x1 = x_iteracion_1;
            x_iteracion_2 = b[1]/A[1][1];
            x2 = x_iteracion_2;
            x_iteracion_3 = b[2]/A[2][2];
            x3 = x_iteracion_3;
            printf("\nx_1 en la iteracion 1 es igual a %f\n",x_iteracion_1);
            printf("x_2 en la iteracion 1 es igual a %f\n",x_iteracion_2);
            printf("x_3 en la iteracion 1 es igual a %f\n",x_iteracion_3);
        }

        else {
            x_iteracion_1 = ((-A[0][1]*x2)-(A[0][2]*x3)+b[0])/A[0][0];
            printf("\nx_1 en la iteracion %d es igual a %f con un error de %f\n",j+1,x_iteracion_1,Error(x_iteracion_1,x1));
            x_iteracion_2 = ((-A[1][0]*x1)-(A[1][2]*x3)+b[1])/A[1][1];
            printf("x_2 en la iteracion %d es igual a %f con un error de %f\n",j+1,x_iteracion_2,Error(x_iteracion_2,x2));
            x_iteracion_3 = ((-A[2][0]*x1)-(A[2][1]*x2)+b[2])/A[2][2];
            printf("x_3 en la iteracion %d es igual a %f con un error de %f\n",j+1,x_iteracion_3,Error(x_iteracion_3,x3));
            x1 = x_iteracion_1;
            x2 = x_iteracion_2;
            x3 = x_iteracion_3;
            }
        }
    break;
  }
  return 0;
}
float Error(float x1, float x2){
  float Error;
  Error = fabs((x1-x2)/x1)*100;
  return Error;
}
