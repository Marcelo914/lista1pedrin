#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int idade, rept;
  float media;
  rept = 0;
  media = 0;

  while (1) {
    printf("Digite a idade\n");
    scanf("%d", &idade);
    media = media + idade;
    rept++;
    if (idade == 0 || idade < 0) {
      rept--;
      printf("Idade invalida\n");
      media = media / rept;
      printf("%.2f\n", media);
      break;
    }
  }

  return 0;
}
