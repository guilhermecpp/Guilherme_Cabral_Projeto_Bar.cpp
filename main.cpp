#include <bits/stdc++.h>
using namespace std;

int main()
{
    char sexo;
    int qtd_cer;
    int qtd_ref;
    int qtd_esp;
    double consumo;
    double couvert;
    double ingresso;
    double total;

    printf("Sexo: ");
    scanf("%c", &sexo);

    printf("Quantidade de cervejas: ");
    scanf("%d", &qtd_cer);

    printf("Quantidade de refrigerantes: ");
    scanf("%d", &qtd_ref);

    printf("Quantidade de espetinhos: ");
    scanf("%d", &qtd_esp);

    consumo = qtd_cer * 5 + qtd_ref * 3 + qtd_esp * 7;

    printf("\n");
    printf("RELATORIO:\n");

    printf("Consumo = R$ %.2lf\n", consumo);

    if(consumo > 30.00)
    {
        couvert = 0.00;
        printf("Isento de Couvert\n");
    }else
    {
        couvert = 4.00;
        printf("Couvert = R$ 4.00\n");
    }

    if(sexo == 'F')
    {
        ingresso = 8.00;
        printf("Ingresso = R$ 8.00\n");
    }else
    {
        ingresso = 10.00;
        printf("Ingresso = R$ 10.00\n");
    }

    total = consumo + couvert + ingresso;

    printf("\n");
    printf("Valor a pagar = R$ %.2lf\n", total);


    return 0;
}
