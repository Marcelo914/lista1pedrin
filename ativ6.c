#include <stdio.h>

int main(void) {
  int num1, num2, num3, media;
  printf("Digite 3 números");

  scanf("%i", &num1);
  scanf("%i", &num2);
  scanf("%i", &num3);


  media = (num1 + num2 + num3)/3;
  printf("a média é: %d",media);
  return 0;
}
