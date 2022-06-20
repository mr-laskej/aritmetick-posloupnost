#include <stdio.h>

int main()
{
	int clen = 0;
	int diference = 0;

    printf("Zadej prvni clen posloupnosti: ");
    scanf("%d", &clen);

    printf("Urci rozdíl mezi cleny: ");
    scanf("%d", &diference);

    for (int i = 1; i <= 100; i++) {
        printf("\nAritmeticka posloupnost je: %2d", clen);
        clen += diference;
    }
}

