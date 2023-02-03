#include <stdio.h>

int main()
{
    double nota1, nota2;
    double nota_final;

    printf("Digite a nota do primeiro semestre:");
    scanf("%lf", &nota1);

    printf("Digite a nota do segundo semestre:");
    scanf("%lf", &nota2);

    nota_final=(nota1+nota2);
    printf("NOTA FINAL=%.1lf\n", nota_final);

    if(nota_final<30){
        printf("REPROVADO\n");
    }
    else{ printf("APROVADO\n");}

    return 0;
    }
