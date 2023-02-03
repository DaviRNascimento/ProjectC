
#include <stdio.h>

int main()
{

    char name1[10];
    char name2[10];
    int age1;
    int age2;
    double media;

    printf("Digite o nome da primeira pessoa:");
    scanf("%s", &name1);

    printf("Quantos anos ela possui?");
    scanf("%d", &age1);

    printf("Digite o nome da segunda pessoa:");
    scanf("%s", &name2);

    printf("Agora, a idade dela:");
    scanf("%d", &age2);

    media=(age1+age2)/2;
    printf("Segue a media de idade das duas pessoas: %.2lf\n", media);

    return 0;
}
