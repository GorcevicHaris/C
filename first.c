#include <stdio.h>
// Zadatak 1
//  int main()
//  {
//      int num1, num2, sum;

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
// Zadatak 3
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
// Zadatak 4
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
// Zadatak 5
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
// Zadatak 6 Izabrati koliko zelite elemenata u niz prosek njihov i najveci u nizu koji je
// int main()
// {
//     int n;
//     printf("Unesite koliko zelite elemenata u niz da imate \n");
//     scanf("%d", &n);
//     int arr[n];
//     int sum = 0;
//     int max = 0;

//     printf("Unesi %d celih brojeva:\n", n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Unesite vase brojeve: ");
//         scanf("%d\n", &arr[i]);
//         sum = sum + arr[i];
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("Prosek %d\n", sum / n);
//     printf("Ovo je najveci broj %d\n", max);
// }
//=============================================================================================
// Zadatak 6 ili proba
// void func(int *num)
// {
//     *num = 10;
// }
// int main()
// {
//     int number = 5;
//     int *a = &number;
//     printf("%d\n", *a);
//     func(a);
//     printf("%d", *a);
//     return 0;
// }
//==================================================================================================
// Zadatak 7 sortiraj niz i printaj ga
// int main()
// {
//     int n;
//     printf("unesite koliko zelite brojeva u nizu \n");
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Unesite brojeve :\n");
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int y = 0; y < n; y++)
//         {
//             if (arr[i] > arr[y])
//             {
//                 int num = arr[i];
//                 arr[i] = arr[y];
//                 arr[y] = num;
//             }
//         }
//     }
//     printf("Sortirani niz je :");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
//==================================================================================================
int main()
{
    int n;
    printf("unseite koliko zelite brojeva");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Unesite brojeve\n");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf("Nema brojeva koji su parni \n");
        }
    }
    return 0;
}