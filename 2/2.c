#include <stdio.h>
// estructura de decision if anidados
int main() {
  int a, b, c;
  int mayor, medio, menor;

  printf("Ingresa tres valores: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b) {
    if (a > c) {
      mayor = a;
      if (b > c) {
        menor = c;
        medio = b;
      } else {
        menor = b;
        medio = c;
      }
    } else {
      mayor = c;
      menor = b;
      medio = a;
    }
  } else {
    if (b > c) {
      mayor = b;
      if (a > c) {
        menor = c;
        medio = a;
      } else {
        menor = a;
        medio = c;
      }
    } else {
      mayor = c;
      menor = a;
      medio = b;
    }
  }

  printf("Mayor:%d\n", mayor);
  printf("Medio:%d\n", medio);
  printf("Menor:%d\n", menor);

  return 0;
}
