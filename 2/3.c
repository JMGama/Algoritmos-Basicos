#include <stdio.h>
// estructura de decision if-inline
int main() {
  int a, b, c;
  int mayor, medio, menor;

  printf("Ingresa tres valores: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b && a > c) {
    mayor = a;
    medio = b > c ? b : c;
    menor = b < c ? b : c;
  } else {
    if (b > a && b > c) {
      mayor = b;
      medio = a > c ? a : c;
      menor = a < c ? a : c;
    } else {
      mayor = c;
      medio = a > b ? a : b;
      menor = a < b ? a : b;
    }
  }

  printf("Mayor:%d\n", mayor);
  printf("Medio:%d\n", medio);
  printf("Menor:%d\n", menor);

  return 0;
}
