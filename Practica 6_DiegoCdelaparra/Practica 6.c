#include <stdio.h>
#include <math.h>
float funcion1(float x_in);
float funcion2(float x_in);
float Secante2(float a, float b);
float Secante1(float a, float b);
float errorRelativo(float va,float vn);
float derivada2(float x_in);
float derivada1(float x_in);
float Raphson2(float a);
float Raphson1(float a);
float va, vn, a,b,c;
int i, iteraciones, metodo;
int main() {
  printf("¿Que metodo quieres utilizar en las dos funciones?\n");
  printf("1. Newton-Raphson\n");
  printf("2. Secante\n");
  scanf("%d",&metodo);
  switch (metodo) {
    case 1:
    printf("Cuantas interaciones para las 2 funciones\n");
    scanf("%d",&iteraciones);
    printf("\n");
    a=0.3;
    vn=Raphson1(a);
    va=0.3;
    printf("   i           xi           e\n");
    for(i=1; i<=iteraciones; i++){
      printf("   %d        %f    %f\n",i,Raphson1(a),errorRelativo(va,vn));
      a=Raphson1(a);
      va=a;
      vn=Raphson1(a);
    }
    printf("\n");
    printf("\n");
    a=0.3;
    vn=Raphson2(a);
    va=0.3;
    printf("   i           xi           e\n");
    for(i=1; i<=iteraciones; i++){
      printf("   %d        %f    %f\n",i,Raphson2(a),errorRelativo(va,vn));
      a=Raphson2(a);
      va=a;
      vn=Raphson2(a);
    }
    break;
    case 2:
    printf("Cuantas interaciones para las 2 funciones\n");
    scanf("%d",&iteraciones);
    printf("\n");
    a=0.5;
    b=0.3;
    vn=Secante1(a,b);
    va=b;
    printf("   i           xi         xi+1           e\n");
    for(i=1; i<=iteraciones; i++){
      printf("   %d        %f    %f     %f\n",i,Secante1(a,b),b,errorRelativo(va,vn));
      c=b;
      b=Secante1(a,b);
      a=c;
      va=b;
      vn=Secante1(a,va);
    }
    printf("\n");
    printf("\n");
    a=3;
    b=-4;
    vn=Secante2(a,b);
    va=b;
    printf("   i           xi         xi+1           e\n");
    for(i=1; i<=iteraciones; i++){
      printf("   %d        %f    %f     %f\n",i,Secante2(a,b),b,errorRelativo(va,vn));
      c=b;
      b=Secante2(a,b);
      a=c;
      va=b;
      vn=Secante2(a,va);
    }
    break;
  }
}

float funcion1(float x_in){
  //8sin(x)(e^(-x))-1
  float fx;
  fx = 8*sin(x_in)*exp(-x_in)-1;
  return fx;
}
float derivada1(float x_in){
  //(8e^(-x))(cos(x)-sin(x))
  float fx;
  fx = 8*exp(-x_in)*(cos(x_in)-sin(x_in));
  return fx;
}
float funcion2(float x_in){
  //2x^3-11x^2+17.7x-5
  float fx;
  fx = 2*(pow(x_in,3))-11*(pow(x_in,2))+17.7*(x_in)-5;
  return fx;
}
float derivada2(float x_in){
  //6x^2-22x+17.7
  float fx;
  fx = 6*(pow(x_in,2))-(22*x_in)+17.7;
  return fx;
}
float Raphson1(float a){
  float xi;
  xi = a-((funcion1(a))/derivada1(a));
  return xi;
}
float Raphson2(float a){
  float xi;
  xi = a-((funcion2(a))/derivada2(a));
  return xi;
}
float Secante1(float a, float b){
  float xi;
  xi = b-((funcion1(b)*(a-b))/(funcion1(a)-funcion1(b)));
  return xi;
}
float Secante2(float a, float b){
  float xi;
  xi = b-((funcion2(b)*(a-b))/(funcion2(a)-funcion2(b)));
  return xi;
}
float errorRelativo(float va,float vn){
  // epsilon=abs(vn-va/vn)*100
  float epsilon;
  epsilon = fabs((vn-va)/vn)*100;
  return epsilon;
}
