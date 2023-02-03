
#include <stdio.h>

float celsius_to_fahrenheit(float celsius)//função
{
    return (celsius*9/5) + 32;//colocamos return para simplificar
}

float fahrenheit_to_celsius(float fahrenheit)
{
    return (fahrenheit-32) * 5/9;//colocamos return para simplificar.
}


int main(void)
{
    float celsius, fahrenheit;

    printf("Type here the temperature in Celsius: \n");
    scanf("%f", &celsius);

    fahrenheit=celsius_to_fahrenheit(celsius);
    printf("%f graus celsius is %f graus fahrenheit\n", celsius, fahrenheit);

    printf("Type here the temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);


    celsius=fahrenheit_to_celsius(fahrenheit);
    printf("%f graus fahrenheit is %f graus celsius\n", fahrenheit, celsius);

    return 0;
}
