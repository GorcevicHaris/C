#include <stdio.h>

// int main()
// {
//     int num1, num2, sum;

//     printf("Unesi prvi broj");
//     scanf("%d", &num1);

//     printf("Unesi drugi broj");
//     scanf("%d", &num2);

//     sum = num1 + num2;

//     printf("Vas unos je : %d\n", sum);
// }
//==========================================================================================
// 2. Zadatak
// Napisati program koji će unositi ime i prezime korisnika i ispisati
// ime i prezime korisnika u formatu "Ime prezime".
//==========================================================================================
// int main()
// {
//     char ime, prezime;
//     printf("Unesi ime: ");
//     scanf("%s", ime);
//     printf("Unesi prezime: ");
//     scanf("%s", prezime);
//     printf("Vas unos je: %s %s\n", ime, prezime);
// }
//==========================================================================================
// int main()
// {
//     int num1, num2, num3;
//     int sum = 0;
//     int count = 0;

//     printf("Unesi prvi broj: ");
//     scanf("%d", &num1);
//     count++;

//     printf("Unesi drugi broj: ");
//     scanf("%d", &num2);
//     count++;

//     printf("Unesi treci broj :");
//     scanf("%d", &num3);
//     count++;

//     sum = num1 + num2 + num3;

//     printf("Aritmeticka sredina je %.2f\n", (float)sum / count);
//     return 0;
// }
//===========================================================================
// int main()
// {
//     int i;
//     for (i = 1; i < 100; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }
//================================================================
int main()
{
    int n;
    printf("Unesite koliko zelite elemenata u niz da imate \n");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    int max = 0;

    printf("Unesi %d celih brojeva:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Unesite vase brojeve: ");
        scanf("%d\n", &arr[i]);
        sum = sum + arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Prosek %d\n", sum / n);
    printf("Ovo je najveci broj %d\n", max);
}