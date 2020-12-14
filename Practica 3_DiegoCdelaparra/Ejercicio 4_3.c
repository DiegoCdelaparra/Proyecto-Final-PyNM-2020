#include "stdio.h"
int cifra, un, dec, cen, mil, a, b, c;
int main() {
  do {
    printf("Dame una cifra de 4 numeros no repetidos\n");
    scanf("%d",&cifra);
    un=cifra%10;
    a=cifra-un;
    a=a%100;
    dec=a/10;
    b=cifra-dec-un;
    b=b%1000;
    cen=b/100;
    c=cifra-cen-dec-un;
    mil=c/1000;
    if (un!=dec && un!=cen && un!=mil && dec!=cen && dec!=mil && cen!=mil) {
      printf("Codigo Valido\n");
      return 0;
    }
  } while(un!=dec && un!=cen && un!=mil && dec!=cen && dec!=mil && cen!=mil);
  printf("Codigo no Valido\n");
  return 0;
}
