#include <stdio.h>

int main()
{
    float salario, aumento, novoSalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f" , &aumento);

    novoSalario =  salario + (salario *(aumento/100));

    printf("O salario ajustado e:  = %.2f\n", novoSalario);


    getchar();
    return 0;
}




