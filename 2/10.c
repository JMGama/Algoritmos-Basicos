#include <stdio.h>
// contadores y acomuladores juntos
int main() {
  int cant, suma, n;
  double prom;

  printf("Ingresa un valor numerico:");
  scanf("%d", &n);

  cant = 0;
  suma = 0;
  while (n != 0) {
    suma = suma + n;
    cant = cant + 1;

    printf("Ingresa un valor numerico:");
    scanf("%d", &n);
  }

  prom = (double)suma / cant;
  printf("el promedio es: %lf\n", prom);

  return 0;
}
