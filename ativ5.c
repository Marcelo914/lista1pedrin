#include <stdio.h>

int main(void)
{
  int num1, num2, divisao;

  printf("Digite o número 1:");
  printf("Digite o número 2:");

  scanf("%i", &num1);
  scanf("%i", &num2);

  if (num2 == 0) {
    printf("Essa operação não é possivel");
  }
  else {
    divisao = num1/num2;
    printf("%d", divisao);
  }
  return 0;
}
