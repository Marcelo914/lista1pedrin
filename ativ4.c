#include <stdio.h>

int main(void)
{
  int num1, num2, soma;

  printf("Digite o número 1:");
  scanf("%i", &num1);

  printf("Digite o número 2:");
  scanf("%i", &num2);

  soma = num1 + num2;
  printf("%d", soma);
  return 0;
}
