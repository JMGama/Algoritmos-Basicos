#include <stdio.h>
// estructura de repeticion exacta 'for'
int main() {
  int n;

  printf("Ingrese un valor numerico: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("%d\n", i);
  }

  return 0;
}
