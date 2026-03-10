#include <stdio.h>

int main()
{
    int n1, n2, tri;

    printf("\nDIgite dois numeros\n");

    scanf ("%d%*c", &n1);
    scanf ("%d%*c", &n2);

    tri = (n1 + n2)/2;

    printf("\nResultado da area do triangulo e:  = %d\n", tri);
    getchar ();

    return 0;
}

