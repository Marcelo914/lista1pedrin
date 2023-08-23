#include <stdio.h>

int main(void) {
  int escolha, qnt;
  float valor, valortotal;
  printf("cardapio:\n");
  printf("Cachorro quente - 100 - 1,20\n");
  printf("Bauru simples - 101 - 1,30\n");
  printf("Bauru com ovo - 102 - 1,50\n");
  printf("Hambúrger - 103 - 1,20\n");
  printf("Cheeseburguer - 104 - 1,30\n");
  printf("Refrigerante - 105 - 1,00\n");

  printf("Qual vai ser?\n");
  scanf("%d", &escolha);

  switch (escolha) {
  case 100:
    printf("cachorro quente\n");
    valor = 1.20;
    printf("Digite a quantidade que deseja comprar\n");

    scanf("%i", &qnt);
    valortotal = valor * qnt;
    printf("valor total: %.2f", valortotal);
    break;

  case 101:
    printf("Bauru simples\n");
    valor = 1.30;
    printf("Digite a quantidade que deseja comprar\n");

    scanf("%i", &qnt);
    valortotal = valor * qnt;

    printf("valor total: %.2f", valortotal);
    break;

  case 102:
    printf("Bauru com ovo\n");
    valor = 1.50;
    printf("Digite a quantidade que deseja comprar\n");

    scanf("%i", &qnt);

    valortotal = valor * qnt;

    printf("valor total: %.2f", valortotal);
    break;

  case 103:
    printf("Hambúrger\n");
    valor = 1.20;
    printf("Digite a quantidade que deseja comprar\n");

    scanf("%i", &qnt);
    valortotal = valor * qnt;

    printf("valor total: %.2f", valortotal);
    break;

  case 104:
    printf("Cheeseburguer\n");
    valor = 1.30;
    printf("Digite a quantidade que deseja comprar\n");

    scanf("%i", &qnt);
    valortotal = valor * qnt;

    printf("valor total: %.2f", valortotal);
    break;

  case 105:
    printf("Refrigerante\n");
    valor = 1.00;
    printf("Digite a quantidade que deseja comprar\n");

    scanf("%i", &qnt);

    valortotal = valor * qnt;

    printf("valor total: %.2f", valortotal);
    break;

  default:
    printf("erro");
    break;
  }

  return 0;
}
