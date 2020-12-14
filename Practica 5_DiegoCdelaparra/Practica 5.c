#include <stdio.h>
#include <math.h>
float funcion1(float x_in);
float funcion2(float x_in);
float errorRelativo(float va,float vn);
float biseccion(float a, float b);
float falsaPosicion1(float a, float b);
float falsaPosicion2(float a, float b);
float va, vn, a,b;
int i, iteraciones, metodo;
int main() {
  printf("¿Que metodo quieres utilizar en las dos funciones?\n");
  printf("1. Biseccion\n");
  printf("2. Falsa Posicion\n");
  scanf("%d",&metodo);
  switch (metodo) {
    case 1:
    printf("Cuantas interaciones para las 2 funciones\n");
    scanf("%d",&iteraciones);
    printf("\n");
    a=-3;
    b=-2;
    vn=0;
    va=0;
    printf("   i          xi           a           b             e\n");
    for(i=1; i<=iteraciones; i++){
      printf("%d         %f    %f   %f     %f\n",i,biseccion(a,b),a,b,errorRelativo(va,vn));
      if ((funcion1(a)*funcion1(biseccion(a,b)))<0) {
        b=biseccion(a,b);
        va=b;
        vn=biseccion(a,va);
      }
      else{
        a=biseccion(a,b);
        va=a;
        vn=biseccion(va,b);
      }
    }
    printf("\n");
    printf("\n");
    a=1;
    b=2;
    vn=0;
    va=0;
    printf("   i          xi          a         b            e\n");
    for(i=1; i<=iteraciones; i++){
      printf("%d         %f    %f   %f     %f\n",i,biseccion(a,b),a,b,errorRelativo(va,vn));
      if ((funcion2(a)*funcion2(biseccion(a,b)))<0) {
        b=biseccion(a,b);
        va=b;
        vn=biseccion(a,va);
      }
      else{
        a=biseccion(a,b);
        va=a;
        vn=biseccion(va,b);
      }
    }
    break;
    case 2:
    printf("Cuantas interaciones para las 2 funciones\n");
    scanf("%d",&iteraciones);
    printf("\n");
    a=-3;
    b=-2;
    vn=0;
    va=0;
    printf("   i          xi           a           b             e\n");
    for(i=1; i<=iteraciones; i++){
      printf("%d         %f    %f   %f     %f\n",i,falsaPosicion1(a,b),a,b,errorRelativo(va,vn));
      if ((funcion1(a)*funcion1(falsaPosicion1(a,b)))<0) {
        b=falsaPosicion1(a,b);
        va=b;
        vn=falsaPosicion1(a,va);
      }
      else{
        a=falsaPosicion1(a,b);
        va=a;
        vn=falsaPosicion1(va,b);
      }
    }
      printf("\n");
      printf("\n");
      a=1;
      b=2;
      vn=0;
      va=0;
      printf("   i          xi          a          b           e\n");
      for(i=1; i<=iteraciones; i++){
        printf("%d         %f    %f   %f     %f\n",i,falsaPosicion2(a,b),a,b,errorRelativo(va,vn));
        if ((funcion2(a)*funcion2(falsaPosicion2(a,b)))<0) {
          b=falsaPosicion2(a,b);
          va=b;
          vn=falsaPosicion2(a,va);
        }
        else{
          a=falsaPosicion2(a,b);
          va=a;
          vn=falsaPosicion2(va,b);
        }
    }
    break;
  }
}
float funcion1(float x_in){
  // 2x*cos(2x)-(x+1)^2
  float fx;
  fx = (2*(x_in)*cos(2*x_in))-pow((x_in+1),2);
  return fx;
}
float biseccion(float a, float b){
  // xi=(a+b)/2
  float xi;
  xi = ((a+b)/2);
  return xi;
}
float funcion2(float x_in){
  float fx;
  fx = log(fabs(x_in))+pow(x_in,2)-4;
  return fx;
}
float errorRelativo(float va,float vn){
  // epsilon=abs(va-vn/va)*100
  float epsilon;
  epsilon = fabs((vn-va)/vn)*100;
  return epsilon;
}
float falsaPosicion1(float a, float b){
  // xi=b-((f(b)*(a-b))/f(a)-f(b))
  float xi;
  xi = b-((funcion1(b)*(a-b))/(funcion1(a)-funcion1(b)));
  return xi;
}
float falsaPosicion2(float a, float b){
  // xi=b-((f(b)*(a-b))/f(a)-f(b))
  float xi;
  xi = b-((funcion2(b)*(a-b))/(funcion2(a)-funcion2(b)));
  return xi;
}
