#include <stdio.h>

int main(void) {
  int num;

  printf("Digite um número");
  scanf("%i", &num);

  printf("%i", num - 1);
  printf("%i", num + 1);

  return 0;
}
