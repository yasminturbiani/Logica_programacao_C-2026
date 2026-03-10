#include <stdio.h>

int main()
{
    float deposito, taxa, rendimento, total;
    int meses;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    rendimento = deposito * (taxa/100) * meses;
    total = deposito + rendimento;

    printf("Rendimento: %.2f\n", rendimento);
    printf("Valor total: %.2f\n", total);

    return 0;
}
