#include <Stdio.h>

int main()
{
 float coef1, coef2, coef3;
 int delta;
 int x1, x2;
 int bhaskara;

    printf("Digite os coeficientes a, b e c:\n");
    scanf("%f %f %f", &coef1, &coef2, &coef3);

delta=pow(coef2,2) - 4*coef1*coef3;
    printf("%d\n", delta);

    x1=(-coef2+sqrt(delta))/2*coef1;
    x2=(-coef2-sqrt(delta))/2*coef1;

    if(delta<0){
    printf("Nao existem raizes reais para essa equacao\n");
    }
    else{ printf("Essas sao as duas raizes: %d %d\n", x1, x2);}

    return 0;
    }

