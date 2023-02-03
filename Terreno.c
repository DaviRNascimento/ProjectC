
#include <stdio.h>

int main()
{
    double comprimento, largura,valor, area, preco;

    printf("Digite o comprimento do terreno:");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno:");
    scanf("%lf", &largura);

    printf("Digite o valor do metro quadrado:");
    scanf("%lf", &valor);

    area=comprimento*largura;
    preco=area*valor;

    printf("%.2lf e a area\n", area);
    printf("%.2lf e o preco\n", preco);

    return 0;
}
