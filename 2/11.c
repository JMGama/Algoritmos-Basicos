#include <stdio.h>
// analizar si un numero es primo o no
int main() {
  int n, esPrimo;

  printf("Ingresa un valor numerico: ");
  scanf("%d", &n);

  esPrimo = 1;
  for (int i = 2; i < n && esPrimo; i++) {
    if (n % i == 0) {
      esPrimo = 0;
    }
  }
  if (esPrimo) {
    printf("%d es primo", n);
  } else {
    printf("%d no es primo", n);
  }

  return 0;
}
