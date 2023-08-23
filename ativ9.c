#include <stdio.h>

int main(void)
{
  float celcius, fahrenheit;

  printf("Digite a temperatura em graus celcius\n");
  scanf("%f", &celcius);
  fahrenheit = (9 * celcius + 160)/5; 

  printf("A temperatura em fahrenheit é: %.2f\n", fahrenheit);
  return 0;
}
