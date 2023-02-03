#include <stdio.h>

int main()
{
    float base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo:");
    scanf("%f", &base);

    printf("Digite a altura do retangulo:");
    scanf("%f", &altura);

    area=base*altura;
    perimetro=(base*2)+(altura*2);
    diagonal=sqrt(pow(base,2)+pow(altura,2));

    printf("area=%.2f\n", area);
    printf("perimetro=%.2f\n", perimetro);
    printf("diagonal=%.2f\n", diagonal);

    return 0;

}

