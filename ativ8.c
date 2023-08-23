#include <stdio.h>

int main(void)
{

  int ano, esteAno, idade;
  esteAno = 2023;

  printf("Nasceu em que ano?");
  scanf("%d", &ano);
  idade = esteAno - ano;


  printf("A sua idade é: %d", idade);



  return 0;
}
