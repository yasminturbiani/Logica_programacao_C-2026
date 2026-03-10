#include <stdio.h>

int main()
{
    float sb, g, i, sf;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &sb);

    g = sb * 0.05;
    i = sb * 0.07;

    sf = sb + g - i;

    printf("O salario a receber e: %.2f\n", sf);

    return 0;
}
