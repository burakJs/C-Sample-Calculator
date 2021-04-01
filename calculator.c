#include <stdio.h>
#define topla(x, y) x + y
#define çarp(x, y) x *y
#define böl(x, y) x / y
#define çıkar(x, y) x - y

int main()
{
    int secenek, sayı1, sayı2;
    int devam = 1;

    printf("1. Toplama\n");
    printf("2. Çıkar\n");
    printf("3. Çarp\n");
    printf("4. Böl\n");
    do
    {
        printf("Hangi seçenek yapmak istersin: ");
        scanf("%d", &secenek);
        printf("Sayı1: ");
        scanf("%d", &sayı1);
        printf("Sayı2: ");
        scanf("%d", &sayı2);

        if (secenek == 1)
        {
            printf("%d\n", topla(sayı1, sayı2));
        }
        if (secenek == 2)
        {
            printf("%d\n", çıkar(sayı1, sayı2));
        }
        if (secenek == 3)
        {
            printf("%d\n", çarp(sayı1, sayı2));
        }
        if (secenek == 4)
        {
            printf("%d\n", böl(sayı1, sayı2));
        }
        printf("Devamsa 1 devam değilse 0 :");
        scanf("%d", &devam);
    } while (devam == 1);
}
