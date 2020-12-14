#include <stdio.h>
#include <math.h>
float h,xi;
float DerivAdelante(float h, float xi);
float DerivAtras(float h, float xi);
float DerivCentral(float h, float xi);
float Error(float derivada_numerica);
int main() {
  printf("     h     Diferenciacion      Resultado f'(x)        Er         \n");
  h=0.5;
  xi=0.6;
  printf("\n    0.5      Adelante           %f          %f         \n",DerivAdelante(h,xi),Error(DerivAdelante(h,xi)));
  printf("    0.5       Atras            %f          %f         \n",DerivAtras(h,xi),Error(DerivAtras(h,xi)));
  printf("    0.5      Central           %f          %f         \n",DerivCentral(h,xi),Error(DerivCentral(h,xi)));
  h=0.2;
  xi=0.6;
  printf("\n    0.2      Adelante           %f          %f         \n",DerivAdelante(h,xi),Error(DerivAdelante(h,xi)));
  printf("    0.2       Atras             %f          %f         \n",DerivAtras(h,xi),Error(DerivAtras(h,xi)));
  printf("    0.2      Central            %f          %f         \n",DerivCentral(h,xi),Error(DerivCentral(h,xi)));
  h=0.1;
  xi=0.6;
  printf("\n    0.1      Adelante           %f          %f         \n",DerivAdelante(h,xi),Error(DerivAdelante(h,xi)));
  printf("    0.1       Atras             %f          %f         \n",DerivAtras(h,xi),Error(DerivAtras(h,xi)));
  printf("    0.1      Central            %f          %f         \n",DerivCentral(h,xi),Error(DerivCentral(h,xi)));
  h=0.01;
  xi=0.6;
  printf("\n    0.01     Adelante           %f          %f         \n",DerivAdelante(h,xi),Error(DerivAdelante(h,xi)));
  printf("    0.01      Atras             %f          %f         \n",DerivAtras(h,xi),Error(DerivAtras(h,xi)));
  printf("    0.01     Central            %f          %f         \n",DerivCentral(h,xi),Error(DerivCentral(h,xi)));
  return 0;
}

//f'(xi)=(-f(xi+2)+4f(xi+1)-3f(xi))/2h
float DerivAdelante(float h, float xi){
  float derivada_numerica,fxi,fxip1,fxip2;
  fxi = 1-exp(-xi/0.2);
  fxip1 = 1-exp(-(xi+h)/0.2);
  fxip2 = 1-exp(-(xi+2*h)/0.2);
  derivada_numerica = (-fxip2+4*fxip1-3*fxi)/(2*h);
  return derivada_numerica;
}

//f'(xi)=(3(xi)-4(xi-1)+xi-2)/2h
float DerivAtras(float h, float xi){
  float derivada_numerica,fxi,fxip1,fxip2;
  fxi = 1-exp(-xi/0.2);
  fxip1 = 1-exp(-(xi-h)/0.2);
  fxip2 = 1-exp(-(xi-2*h)/0.2);
  derivada_numerica = (3*fxi-4*fxip1+fxip2)/(2*h);
  return derivada_numerica;
}

//f'(xi)=(-(xi+2)+8(xi+1)-8(xi-1)+(xi-2)/12h
float DerivCentral(float h, float xi){
  float derivada_numerica,fxip1,fxip2,fxip3,fxip4;
  fxip1 = 1-exp(-(xi+h)/0.2);
  fxip2 = 1-exp(-(xi+2*h)/0.2);
  fxip3 = 1-exp(-(xi-h)/0.2);
  fxip4 = 1-exp(-(xi-2*h)/0.2);
  derivada_numerica = (-fxip2+8*fxip1-8*fxip3+fxip4)/(12*h);
  return derivada_numerica;
}

float Error(float derivada_numerica){
  float Error;
  Error = fabs((derivada_numerica-0.24893)/derivada_numerica)*100;
  return Error;
}
