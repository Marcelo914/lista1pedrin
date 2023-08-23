#include <stdio.h>

int main(void) {
  float product;
  char pais;
  float frete;
  float totalAPagar;

  printf("Qual o valor do produto\n");
  scanf("%f", &product);

  printf("país - frete\n");
  printf("Estados Unidos(e) - 60,00\nFrança(f)- 75,00\nMéxico(m) - "
         "50,00\nArgentina(a) - 27,35\nChina(c) - 80,00\n");
  printf("Para onde será enviado?(apenas letra)\n");
  scanf("%s", &pais);

  switch (pais) {
  case 'e':
    frete = 60;
    totalAPagar = product + frete;
    printf("%.2f\n", totalAPagar);
    break;

  case 'f':
    frete = 75;
    totalAPagar = product + frete;
    printf("%.2f\n", totalAPagar);
    break;

  case 'm':
    frete = 50;
    totalAPagar = product + frete;
    printf("%.2f\n", totalAPagar);
    break;

  case 'a':
    frete = 27.35;
    totalAPagar = product + frete;
    printf("%.2f\n", totalAPagar);
    break;

  case 'c':
    frete = 80;
    totalAPagar = product + frete;
    printf("%.2f\n", totalAPagar);
    break;
  }

  return 0;
}
