#include <stdio.h>

int main()
{
    float custo, preco;
    int quantidade;

    printf("Digite o custo do espetaculo: ");
    scanf("%f", &custo);

    printf("Digite o preco do convite: ");
    scanf("%f", &preco);

    quantidade = custo/preco;

    printf("Quantidade minima de convites a vender: %d\n", quantidade);


    return 0;
}
