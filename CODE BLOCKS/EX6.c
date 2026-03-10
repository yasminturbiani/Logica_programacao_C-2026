#include <stdio.h>

int main()
{
    float raio, area;

    printf("\nDigite o raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * raio * raio;

    printf("\nResultado da area do circulo = %.2f\n", area);

    return 0;
}
