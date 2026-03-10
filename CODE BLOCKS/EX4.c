#include <stdio.h>

int main()
{
    int numero;


    printf("Digite um numero: ");
    scanf ("%d", &numero);

    printf("Antecessor: %d\n", numero - 1);
    printf("Numero digitado: %d\n", numero);
    printf("Sucessor %d\n", numero + 1);

    return 0;
}
