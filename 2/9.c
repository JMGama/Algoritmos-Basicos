#include <stdio.h>
// acomuladores
int main() {
  int suma, n;

  printf("Ingresa un valor numerico: ");
  scanf("%d", &n);

  suma = 0;
  while (n != 0) {
    suma = suma + n;

    printf("Ingresa el siguiente valor: ");
    scanf("%d", &n);
  }

  printf("La suma total es: %d\n", suma);

  return 0;
}
