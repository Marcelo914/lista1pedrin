#include <stdio.h>

int main(void) {
  float product = 100;
  float vista, cartao;
  int escolha;

  vista = (product * 10) / 100;
  cartao = (product * 5) / 100;

  printf("Bem vindo\n");
  printf("O produto que deseja comprar está %.2f\n", product);
  printf("Deseja efetuar o pagamento à vista ou no cartão?\n");
  printf("Valor com 10%% de desconto à vista: %.2f\n", product - vista);
  printf("Valor com 5%% de desconto no cartão: %.2f\n", product - cartao);

  printf("Escolha o método de pagamento\n");
  printf("1 cartão - 2 à vista\n");

  scanf("%i", &escolha);

  if (escolha == 1) {
    product = product - cartao;
    printf("Compra de %.2f confirmada no cartão\n", product);
  } else if (escolha == 2) {
    product = product - vista;
    printf("Compra de %.2f confirmada à vista\n", product);
  } else {
    printf("opção inexistente\n operação cancelada\n");
  }

  return 0;
}
