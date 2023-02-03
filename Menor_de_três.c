#include <stdio.h>

int main()
{
    int x,y,z, menor;

    printf("Type the first number:\n");
    scanf("%d", &x);
    printf("Type the second number:\n");
    scanf("%d", &y);
    printf("Type the third number:\n");
    scanf("%d", &z);

    if(x<y && x<z)
    {
        menor = x;
    }

    else if(y<z)
    {
        menor=y;
    }

    else
    {
        menor=z;
    }
    printf("SMALLER = %d", menor);
}
