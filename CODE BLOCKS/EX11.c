#include <stdio.h>

int main()
{
    float sb, i, sf;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &sb);

    i = sb * 0.1;

    sf = sb + 50 - i;

    printf("O salario a receber e: %.2f\n", sf);

    return 0;
}
