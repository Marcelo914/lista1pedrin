#include <stdio.h>

int main(void)
{
  int num, maior, menor;

  printf("Digite numeros\n");

  scanf("%d", &num);
  if (num > 0) {
    maior = num;
    menor = num;
  }
  else {
    printf("Nenhum número válido foi digitado\n");
  }

  while (1) {
    printf("Digite um número: \n");
    scanf("%d", &num);

    if (num < 0) {
      printf("Número negativo\n");
      break;
    }

    if (num > maior) {
      maior = num;
    }
    else if (num < menor) {
      menor = num;
    }
  }


  printf("O maior número é: %d\n", maior);
  printf("O menor número é: %d\n", menor);


  return 0;
}
