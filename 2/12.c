#include <stdio.h>
// estructuras de repeticion anidadas
int main() {
  int num, cont, esPrimo, n;

  printf("Cuantos numeros primos quieres ver? ");
  scanf("%d", &n);

  cont = 0;
  num = 1;
  while (cont < n) {
    esPrimo = 1;
    
    for (int i = 2; i < num && esPrimo; i++) {
      if (num % i == 0) {
        esPrimo = 0;
      }
    }

    if (esPrimo) {
      printf("%d\n", num);
      cont = cont + 1;
    }

    num = num + 1;
  }

  return 0;
}
