#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
// Zadatak 8 odvoji parne i neparne brojeve
// int main()
// {
//     int n;
//     printf("unseite koliko zelite brojeva");
//     scanf("%d", &n);
//     int arr[n];
//     int even[n], odd[n];
//     int evenCount = 0, oddCount = 0;

//     for (int i = 0; i < n; i++)
//     {
//         printf("Unesite broj %d: ", i + 1);
//         scanf("%d", &arr[i]);
//         if (arr[i] % 2 == 0)
//         {
//             even[evenCount++] = arr[i];
//         }
//         else
//         {
//             odd[oddCount++] = arr[i];
//         }
//     }
//     printf("Neparni brojevi su : \n");
//     for (int i = 0; i < oddCount; i++)
//     {
//         printf("%d \n", odd[i]);
//     }
//     printf("%d ovo je odd count \n", oddCount);

//     printf("Parni brojevi su : \n");
//     for (int i = 0; i < evenCount; i++)
//     {
//         printf("%d", even[i]);
//     }
//     printf("%d ovo je even count \n", evenCount);

//     return 0;
// }
//===============================================================================
// // 9 Zadatak Fibonacijev niz primer: 0,1,1,2,3,5,8
// int main()
// {
//     int n;
//     printf("unesite koliko zelite brojeva \n");
//     scanf("%d", &n);
//     int arr[n];

//     arr[0] = 1;
//     if (n > 1)
//     {
//         arr[1] = 1;
//     }

//     for (int i = 2; i < n; i++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     printf("Fibijancijev niz \n ");
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
//     printf("\n");
// }
//=============================================================================
// 10 zadatak palindrom
// int main()
// {
//     char name[] = "haris";
//     int length = strlen(name);
//     int counter = length;

//     for (int i = 0; i < length / 2; i++)
//     {
//         counter--;
//         int temp = name[i];
//         name[i] = name[counter];
//         name[counter] = temp;
//     }
//     char newName[sizeof(name)];
//     strcpy(newName, name);

//     if (name == newName)
//     {
//         printf("polindrom su");
//     }
//     else
//     {
//         printf("nisu polindrom");
//     }
//     printf("Originalni string: %s\n", name);
//     printf("Kopirani string: %s\n", newName);
// }
//============================================================================================
// Zadatak 11 slon preskace svaku 4 stepenicu
// int main()
// {
//     int stepenice = 40;
//     int koraci = 0;

//     for (int i = 0; i < stepenice; i++)
//     {
//         if (i % 4 == 0)
//         {
//             continue;
//         }
//         koraci++;
//     }
//     printf("Slon je napravio %d koraka da pređe %d stepenica.\n", koraci, stepenice);
//     return 0;
// }
//================================================================================================
// // 12 Zadatal fabijancijev niz opet
// int main()
// {
//     int n;
//     printf("Unesite koliko zelite brojeva");
//     scanf("%d", &n);
//     int array[n];
//     int number;
//     array[0] = 1;
//     array[1] = 1;
//     for (int i = 2; i < n; i++)
//     {
//         array[i] = array[i - 1] + array[i - 2];
//     }
//     printf("Ispod se nalazi fabijancijev niz\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", array[i]);
//     }
//     return 0;
// }
//================================================================================================
// // Zadatak 13 pronaci savrsene brojeve  tjst npr 6 jer se deli sa 1 2 i 3 i to je ukupno 6
// int main()
// {
//     int n;
//     int suma = 0;

//     printf("unesi brojeve");
//     scanf("%d", &n);
//     for (int y = 2; y < n; y++)
//     {
//         suma = 0;
//         for (int i = 1; i < y; i++)
//         {
//             if (y % i == 0)
//             {
//                 suma += i;
//             }
//         }
//         if (y == suma)
//         {
//             printf("da%d\n ", y);
//         }
//         else
//         {
//             printf("ne%d\n", y);
//         }
//     }
//     return 0;
// }
//================================================================================================
// Zadatak 14 Even and odd number first example
// int main()
// {
//     int a;
//     int odd = 0, even = 0;

//     printf("unesi koliko zelis brojeva \n");
//     scanf("%d", &a);
//     int arr[a];

//     printf("Unesi brojeve \n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int y = 0; y < a; y++)
//     {
//         if (arr[y] % 2 == 0)
//         {
//             even = arr[y];
//             printf("parni su %d\n ", even);
//         }
//         else
//         {
//             odd++;
//             odd = arr[y];
//             printf("nisu %d\n", odd);
//         }
//     }
//     printf("odd %d\n", odd);
// }
//================================================================================================
// // Even and odd numbers second better solution becasue even or odd ++ mean that u can
// // add after how much did u have odd or even numbers
// int main()
// {
//     int a;
//     int odd = 0, even = 0;

//     printf("unesi koliko zelis brojeva \n");
//     scanf("%d", &a);
//     int arr[a];

//     printf("Unesi brojeve \n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int y = 0; y < a; y++)
//     {
//         if (arr[y] % 2 == 0)
//         {
//             even++;
//             printf("parni su %d\n ", even);
//         }
//         else
//         {
//             odd++;
//             printf("nisu %d\n", odd);
//         }
//     }
//     printf("odd %d\n", odd);
// }
//=========================================================================================
// int main()
// {
//     int i;

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", i);
//     }
//     getchar(); //-- kada ovo imamo kada se izvrsi nas kod u terminalu ne zavrsi se sve dok ne pretisnemo taster neki npr enter
// }
//=========================================================================================
// int main()
// {
//     for (int i = 0; i < 15; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("parni su %d\n", i);
//         }
//         else
//         {
//             printf(" nisu parni  %d\n", i);
//         }
//     }
// }
//=========================================================================================
