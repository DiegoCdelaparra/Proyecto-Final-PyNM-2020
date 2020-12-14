#include <iostream>
using namespace std;
int main() {
  int edad;
  printf("Cual es tu edad\n");
  scanf("%d",&edad);
  if (edad >= 18) {
    printf("Tu edad es %d y eres mayor de edad\n",edad);
  } else {
    printf("Tu edad es %d y eres menor de edad\n",edad);
  }
  return 0;
}
