#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#define MAX 10
#include <limits.h>
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
//         printf("%d", arr[i]);
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
// int main()
// {
//     double broj, koren;

//     // Unos broja od korisnika
//     printf("Unesite broj: ");
//     scanf("%lf", &broj);

//     // Provera da li je broj pozitivan
//     if (broj < 0)
//     {
//         printf("Korenovanje negativnih brojeva nije moguće u realnim brojevima.\n");
//     }
//     else
//     {
//         // Izračunavanje kvadratnog korena
//         koren = sqrt(broj);
//         printf("Kvadratni koren broja %.2lf je %.2lf\n", broj, koren);
//         // %lf označava da se radi o double vrednosti. a .2 oznacava koliko hocemo decimala nakon broja
//     }

//     return 0;
// }
//==========================================================
// // implementirati program koji izracunava povrsinu kvadrata

// int main()
// {
//     int a, b;
//     printf("unesi i a b \n");
//     scanf("%d", &a);
//     printf("unesi  b \n");
//     scanf("%d", &b);

//     printf("%d", a * a);
// }
//=========================================================================
// implementirat obim i kvadrata a * 4 obim
//==========================================================================
//  Zadatak 15 implementirati funkciju koja racuna duzinu hipotenuze kod pravouglog trougla
// int main()
// {
//     double a, b, c;
//     printf("unesi a i b");
//     scanf("%lf %lf", &a, &b);
//     c = sqrt(a * a + b * b);
//     printf("duzina hipotenuze pravouglog trougla je %.2lf\n", c);
//     return 0;
// }
//=========================================================================
// // Drugi primer sa funkcijom za racunanje duzine hipotenuze kod pravouglog trougla
// double calculateHypotenuse(double a, double b)
// {
//     return sqrt(a * a + b * b);
// }
// int main()
// {
//     double a, b, c;

//     printf("unesi a i b");

//     scanf("%lf %lf", &a, &b);

//     c = calculateHypotenuse(a, b);

//     printf("Duzina hipotenuze pravouglog trougla je %.2lf\n", c);
// }
//=========================================================================
// Zadatak 16 Написати програм који рачуна и на стандардном излазу приказује површину круга полупречника 5.
// int main()
// {
//     double r = 3;
//     double povrsina = M_PI * r * r;
//     printf("Povrsina kruga sa poluprecnikom %.2f je: %.2f\n", r, povrsina);
//     return 0;
// }
//=============================================================================
// // Zadatak 17 Написати програм који рачуна и на стандардном излазу приказује површину круга
// // произвољног полупречника.

// double PI_semicounductor(double r)
// {
//     return r * r * M_PI;
// }

// int main()
// {
//     double r;
//     printf("unesit poluprecnik \n");
//     scanf("%lf", &r);
//     double povrsina = PI_semicounductor(r);
//     printf("povrsina je %.2lf\n", povrsina);
// }
//=============================================================================
// fibonacijev niz
// int main()
// {
//     int n, suma;
//     printf("unesi broj");
//     scanf("%d", &n);
//     int arr[n];
//     arr[0] = 1;
//     if (arr[n] > 1)
//     {
//         arr[1] = 1;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     printf("tu je niz");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }
//==============================================================
// int main()
// {
//     int a;
//     scanf("%d", a);
//     if (a == 5)
//     {
//         printf("jeste");
//     }
//     else
//     {
//         printf("nije");
//     }
// }
//==================================================================================
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b && a > c)
//     {
//         printf("a je najveci");
//     }
//     else if (b > c && b > a)
//     {
//         printf("b je najbeci");
//     }
//     else if (c > a && c > b)
//     {
//         printf("c je najveci");
//     }
//     else if (a > b && a < c)
//     {
//         printf("a je srednji");
//     }
//     else if (b > a && b < c)
//     {
//         printf("b je srednji");
//     }
//     else if (c > a && c < b)
//     {
//         printf("c je srednji");
//     }
// }
//==================================================================================
// int main()
// {
//     int broj1, broj2, broj3, max, sred, min;

//     printf("Unesite tri cela broja: ");
//     scanf("%d %d %d", &broj1, &broj2, &broj3);

//     if (broj1 != broj2 && broj1 != broj3 && broj2 != broj3)
//     {
//         max = broj1;
//         if (broj2 > max)
//             max = broj2;
//         if (broj3 > max)
//             max = broj3;

//         min = broj1;
//         if (broj2 < min)
//             min = broj2;
//         if (broj3 < min)
//             min = broj3;

//         sred = (broj1 + broj2 + broj3) - (min + max);

//         printf("Max = %d\nSrednji = %d\nMin = %d\n", max, sred, min);
//     }
//     else
//     {
//         printf("Neki brojevi su isti.\n");
//     }

//     return 0;
// }

// int main()
// {
//     int a, b;
//======================================================================================================
//     printf("unesi a i b\n");
//     scanf("%d %d", &a, &b);

//     if (a > b)
//     {
//         printf("%d\n", a - b);
//     }
//     else
//     {
//         printf("%d\n", b - a);
//     }
// }
//=====================================================================================================
// int main()
// {
//     int n;
//     double sum = 0;
//     printf("Unesite brojeve\n");
//     scanf("%d", &n);
//     double arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("unesite element: %d\n", i + 1);
//         scanf("%lf", &arr[i]);
//         sum += arr[i];
//     }
//     printf("%.2lf\n", sum / n);

//     return 0;
// }
//=====================================================================================================
// DO WHILE
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("%d\n", i);
//         i++;
//     } while (i <= 5);
// }
//=====================================================================================================
// WHILE
// int main()
// {
//     int i = 0;
//     while (i <= 5)
//     {
//         printf("%d\n", i);
//         i++;
//     }
// }
//=====================================================================================================
// aritmeticka sredina ispisati  od pocetka do kraja i posle napisati broj sa koji ce biti deljiv sa
// jednim od tih brojeva npr jedan od tih brojeva da je deljiv sa 5 == 0 i sad svi brojevi koji su deljivi
// sa 5 se ubrajaju u sumu i dele se sa brojevima koji su deljivi sa 5 npr od 1 do 10 to je 5 i 10 to je 15 / 2
// int main()
// {
//     int pocetak, kraj, n;
//     int suma = 0;
//     int brojDeljivih = 0;
//     double sredina;
//     printf("unesite pocetak i kraj\n");
//     scanf("%d %d", &pocetak, &kraj);
//     printf("Izaberite broj koji želite da je deljiv sa ovim brojevima od %d do %d.\n", pocetak, kraj);
//     scanf("%d", &n);

//     for (int i = pocetak; i <= kraj; i++)
//     {
//         if (i % n == 0)
//         {
//             suma += i;
//             brojDeljivih++;
//         }
//     }

//     if (n >= pocetak && n <= kraj)
//     {
//         sredina = (double)suma / brojDeljivih;
//         printf("%.2lf - suma", sredina);
//     }
//     else
//     {
//         printf("Broj je veci od kraja ili manji od pocetka, morate izabrati neki od %d do %d\n", pocetak, kraj);
//     }
//     return 0;
// }

// // n treba da se podeli sa sumom
//=====================================================================================================

// int main()
// {
//     int pocetak, kraj, djelilac, i, brojeva;
//     float zbir, sredina;

//     // Unos pocetne i krajnje vrijednosti
//     printf("Unesite pocetnu i krajnju vrijednost\n");
//     scanf("%d %d", &pocetak, &kraj);

//     // Unos broja sa kojim treba da je djeljiv
//     printf("Unesite broj sa kojim treba da je djeljiv\n");
//     scanf("%d", &djelilac);

//     brojeva = 0;
//     zbir = 0;

//     // Prolaz kroz interval od pocetka do kraja
//     for (i = pocetak; i <= kraj; i++)
//     {
//         if (i % djelilac == 0)
//         {              // Provjera da li je broj djeljiv
//             zbir += i; // Dodavanje djeljivog broja u zbir
//             brojeva += 1;
//         }
//     }

//     // Provjera da li postoji barem jedan broj koji zadovoljava uslov
//     if (brojeva == 0)
//     {
//         printf("Nemoguce!\n");
//     }
//     else
//     {
//         sredina = zbir / brojeva; // Racunanje aritmeticke sredine
//         printf("Aritmeticka sredina je %f.\n", sredina);
//     }

//     return 0;
// }
//========================================================================================
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 1:
//         printf("1 je");
//         break;
//     case 2:
//         printf("2 je");
//         break;
//     default:
//         printf("broj nije pronadjen");
//         break;
//     }
//     return 0;
// }
//======================================================================================
// int main()
// {
//     int broj, zbir = 0;

//     printf("Unesite broj: ");
//     scanf("%d", &broj);

//     while (broj)
//     {
//         zbir += broj % 10;
//         broj /= 10;
//     }

//     printf("Zbir cifara unetog broja je: %d\n", zbir);

//     return 0;
// }
//=========================================================================================================
// int main()
// {
//     int a, suma = 1;
//     scanf("%d", &a);
//     for (int i = 1; i < a; i++)
//     {
//         printf("%d\n", suma *= i);
//     }
// }
//=========================================================================================================

// int main()
// {
//     int a, b, rezultat = 1;

//     printf("Unesite bazu (a): ");
//     scanf("%d", &a);
//     printf("Unesite eksponent (b): ");
//     scanf("%d", &b);

//     for (int i = 0; i < b; i++)
//     {
//         rezultat *= a;
//     }
//     printf("%d - rezultat", rezultat);
// }

//=========================================================================================================
// int main()
// {
//     int a, b, rezultat;
//     printf("unesi a i b\n");
//     scanf("%d %d", &a, &b);
//     rezultat = pow(a, b);
//     printf("%d - rez", rezultat);
// }
//========================================================================================================
// int main()
// {
//     int a, b = 1;

//     printf("unesi broj ");
//     scanf("%d", &a);

//     for (int i = 1; i < a; i++)
//     {
//         b *= i;
//     }
//     printf("%d\n -b ", b);
// }
//========================================================================================================
// // Proveri da li je prost broj
// int main()
// {
//     int a;
//     bool jelProst = true;

//     printf("unesi broj");
//     scanf("%d", &a);

//     for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             jelProst = false;
//         }
//     }
//     printf("%d ", jelProst);
// }
//========================================================================================================
// Pronaci NZD Najveci zajednici delilac npr 8 i 20 je 4
// int main()
// {
//     int a, b, nzd;

//     printf("Unesite a i b\n");
//     scanf("%d %d", &a, &b);

//     for (int i = a; i > 0; i--)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             nzd = i;
//             break;
//         }
//     }
//     printf("NZD - %d ", nzd);
// }

//========================================================================================================
// int main()
// {
//     int a, b;

//     printf("Unesite a i b\n");
//     scanf("%d %d", &a, &b);

//     // za Euclidov algoritam
//     while (b != 0)
//     {
//         // a = 5
//         // b = 10
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     printf("NZD: %d\n", a); // Na kraju a je NZD, u ovom slučaju 1
//     return 0;
// }
//========================================================================================================
// // // Naci faktorijal
// int main()
// {
//     int a, suma = 1;
//     printf("unesi broj");
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++)
//     {
//         suma *= i;
//     }
//     printf("ovo je suma %d", suma);
// }
//========================================================================================================
// PRoveriti da li je prost
// int main()
// {
//     int a;
//     char jelProst[20] = "prost je";
//     printf("unesi broj");
//     scanf("%d", &a);

//     for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             strcpy(jelProst, "nije prost");
//         }
//     }

//     printf("%s\n", jelProst);
//     return 0;
// }
//========================================================================================================
// // pronaci NZD uz pomoc Euklidovog algoritma
// int main()
// {
//     int a, b;
//     printf("unesite a i b\n");
//     scanf("%d %d", &a, &b);

//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     printf("nzd je - %d", a);
// }
//========================================================================================================
// 4. Sumiranje n brojeva​
// Napiši program koji unosi n brojeva jedan po jedan (bez niza), računa njihov zbir i prosečnu vrednost koristeći petlju.
//========================================================================================================
// int main()
// {
//     int n, suma = 0, prosek = 1, broj;
//     printf("unesi koliko brojeva\n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("unesite vas %d broj - \n", i + 1);
//         scanf("%d", &broj);
//         suma += broj;
//     }
//     printf("prosek je je - %.2lf", (double)suma / broj);
// }
//========================================================================================================
// int main()
// {
//     double num1, num2, result;
//     char operation;

//     printf("Unesite prvi broj: ");
//     scanf("%lf", &num1);

//     printf("Unesite drugi broj: ");
//     scanf("%lf", &num2);

//     printf("Izaberite operaciju (+, -, *, /): ");
//     scanf(" %c", &operation);

//     switch (operation)
//     {
//     case '+':
//         result = num1 + num2;
//         printf("rezultat - %.2lf\n ", result);
//         break;
//     case '-':
//         result = num1 - num2;
//         printf("rezultat - %.2lf\n ", result);
//         break;
//     case '*':
//         result = num1 * num2;
//         printf("rezultat - %.2lf\n ", result);
//         break;
//     case '/':
//         if (num2 != 0)
//         {
//             result = num1 / num2;
//             printf("rezultat - %.2lf\n ", result);
//         }
//         else
//         {
//             printf("Nije dozvoljeno deliti sa 0");
//         }
//         break;
//     default:
//         printf("birana operacija ne postoji");
//     }
// }
//========================================================================================================
// int sumaBrojeva(int broj)
// {
//     if (broj == 0)
//     {
//         return 0;
//     }
//     // 531
//     //  1 + 53
//     //  3 + 5
//     // 5 + 0
//     // 3+5
//     // 1+8
//     return broj % 10 + sumaBrojeva(broj / 10);
// }

// int main()
// {
//     int broj, zbir;
//     printf("izaberi broj\n");
//     scanf("%d", &broj);

//     zbir = sumaBrojeva(broj);
//     printf(" zbir - %d", zbir);
// }
//========================================================================================================
// #include <stdio.h>

// // Funkcija za izračunavanje GGD (najveći zajednički delilac)
// int GGD(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Funkcija za izračunavanje NZS
// int NZS(int a, int b)
// {
//     return (a * b) / GGD(a, b);
// }

// int main()
// {
//     int a, b;

//     // Unos brojeva
//     printf("Unesite dva broja: ");
//     scanf("%d %d", &a, &b);

//     // Izračunavanje i ispis NZS-a
//     printf("NZS(%d, %d) = %d\n", a, b, NZS(a, b));

//     return 0;
// }
//========================================================================================================
// // nzs
// int main()
// {
//     int broj1, broj2;
//     int nzd = 0;
//     printf("unesi dva broja\n");
//     scanf("%d %d", &broj1, &broj2);

//     for (int i = 1; i <= broj1 * broj2; i++)
//     {
//         // 5 6 int = 30
//         if (i % broj1 == 0 && i % broj2 == 0)
//         {
//             nzd = i;
//             break;
//         }
//     }
//     printf("Najmanji zajednički  (NZS) brojeva %d i %d je %d.\n", broj1, broj2, nzd);

//     return 0;
// }
//========================================================================================================
// pronadji savrsen broj
// int main()
// {
//     int broj;
//     int zbirDelilaca = 0;

//     printf("Unesite broj: ");
//     scanf("%d", &broj);

//     for (int i = 1; i < broj; i++)
//     {
//         if (broj % i == 0)
//         {
//             zbirDelilaca += i;
//         }
//     }
//     if (zbirDelilaca == broj)
//     {
//         printf("%d je savršen broj.\n", broj);
//     }
//     else
//     {
//         printf("%d nije savršen broj.\n", broj);
//     }

//     return 0;
// }
//========================================================================================================
// // fibonacijev niz

// int main()
// {
//     int n;
//     int a = 0, b = 1, temp;

//     printf("Unesite broj n: ");
//     scanf("%d", &n);

//     printf("Prvih %d članova Fibonacci niza su: \n", n);

//     if (n >= 1)
//     {
//         printf("%d ", a);
//     }

//     if (n >= 2)
//     {
//         printf("%d ", b);
//     }

//     for (int i = 3; i <= n; i++)
//     {
//         temp = a + b;
//         printf("%d ", temp);
//         a = b;
//         b = temp;
//     }

//     printf("\n");
//     return 0;
// }

//===========================================================================
// int main()
// {
//     int a, u = 0;
//     while (a != 0)
//     {
//         u = a * 10 + a % 10;
//         a / 10;
//     }
// }
//===========================================================================
// Priprema za test
// 1. Faktorijel broja
// int main()
// {
//     int a, suma = 1;
//     ;

//     printf("unesi broj\n");
//     scanf("%d", &a);

//     for (int i = 1; i <= a; i++)
//     {
//         suma *= i;
//     }
//     printf("Ovo je suma ili faktorijal  - %d", suma);
// }
// //===========================================================================
// // 2. Prost broj
// int main()
// {
//     int a;
//     char daLiJeProst[20] = "Prost je";
//     printf("unesi broj\n");
//     scanf("%d", &a);

//     if (a < 2)
//     {
//         printf("nije prost");
//     }
//     for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             strcpy(daLiJeProst, "nijeprost");
//         }
//     }

//     printf("%s ", daLiJeProst);
// }
//============================================================================================
// 3. Najveci zajednicki delilac
// int main()
// {
//     int a, b, nzd;
//     printf("unesi a \n");
//     scanf("%d", &a);
//     printf("unesi b \n");
//     scanf("%d", &b);

//     for (int i = a; i >= 1; i--)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             nzd = i;
//             break;
//         }
//     }
//     printf("Ovo je nzd - %d", nzd);
// }
//============================================================================================
// 4. Sumiranje n brojeva
// Napiši program koji unosi n brojeva jedan po jedan
// (bez niza), računa njihov zbir i prosečnu vrednost koristeći petlju.
// int main()
// {
//     int n, i;
//     double prosecnaVrednost = 0.0, suma = 0, a;

//     printf("unesi koliko zelis brojeva\n");
//     scanf("%d", &n);
//     // npr 7 n brojeva
//     // i < 7 printf ce se izvsiti 7 puta i scanf 7 puta
//     // suma +=a
//     for (i = 0; i < n; i++)
//     {
//         printf("unesite vas %d broj\n", i + 1);
//         scanf("%lf", &a);
//         suma += a;
//     }
//     prosecnaVrednost = suma / i;
//     printf("Zbir je %.2lf prosecna vrednost je - %.2lf", suma, prosecnaVrednost);
// }
//============================================================================================
// 5. Broj obrnuto
// #include <stdio.h>

// int main()
// {
//     int a, b = 0;

//     printf("Unesi broj: ");
//     scanf("%d", &a);

//     // Petlja koja uzima poslednju cifru broja
//     while (a != 0)
//     {
//         int temp = a % 10; // 12345//5//1234//4//123/3//12//2//1//1

//         b = b * 10 + temp; // 0*10+5//5//5 * 10 + 4 //54//54 * 10 + 3// 543//543*10 + 2//5430 + 2 // 5432// 5432 * 10 + 1//54320 +1//54321

//         a = a / 10; // 12345 / 10 //1234//123//12//1//0
//     }

//     // Ispis obrnutog broja
//     printf("Obrnuto: %d\n", b);

//     return 0;
// }
//==========================================================================================================
// // 5. Broj obrnuto
// int main()
// {
//     int a, b = 0;

//     printf("unesi broj");
//     scanf("%d", &a);

//     while (a != 0)
//     {
//         int temp = a % 10;
//         b = b * 10 + temp;
//         a = a / 10;
//     }
//     printf("Obrnuti broj je %d", b);
//     return 0;
// }
//==========================================================================================================
// // Napredni
// //. 1Suma cifara broja​
// // Napiši program koja računa zbir svih cifara broja.

// int main()
// {
//     long long a, b = 0;

//     printf("unesi broj\n");
//     scanf("%lld", &a);

//     while (a != 0)
//     {
//         // a = 23// 3
//         int temp = a % 10;
//         b += temp;
//         a = a / 10;
//     }
//     printf("zbir je  %lld\n", b);
// }
//==========================================================================================================
// int main()
// {
//     int n, i;
//     int prost = 1; // Pretpostavljamo da je broj prost

//     printf("Unesite broj: ");
//     scanf("%d", &n);

//     if (n <= 1)
//     {
//         prost = 0; // Broj manji ili jednak 1 nije prost
//     }
//     else
//     {
//         for (i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 prost = 0; // Broj je deljiv, nije prost
//                 break;
//             }
//         }
//     }

//     if (prost)
//     {
//         printf("%d je prost broj.\n", n);
//     }
//     else
//     {
//         printf("%d nije prost broj.\n", n);
//     }

//     return 0;
// }
//==================================================================
// int main()
// {
//     int n;

//     printf("Unesite broj: ");
//     scanf("%d", &n);

//     if (n % 2 == 0)
//     {
//         printf("%d je paran broj.\n", n);
//     }
//     else
//     {
//         printf("%d je neparan broj.\n", n);
//     }

//     return 0;
// }
//==================================================================

// int main()
// {
//     int a, b, c;

//     printf("Unesite tri broja: \n");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a >= b && a >= c)
//     {
//         printf("Najveci broj je: %d\n", a);
//     }
//     else if (b >= a && b >= c)
//     {
//         printf("Najveci broj je: %d\n", b);
//     }
//     else
//     {
//         printf("Najveci broj je: %d\n", c);
//     }

//     return 0;
// }
//=====================================================================
// int main()
// {
//     double a, b, rezultat;

//     printf("Unesite a ");
//     scanf("%lf", &a);
//     printf("Unesite b ");
//     scanf("%lf", &b);

//     rezultat = pow(a, b);

//     printf("%.2lf na stepen %.2lf je: %.2lf\n", a, b, rezultat);

//     return 0;
// }
//=============================================================================================
// // 2. Niz Fibonacci brojeva​
// int main()
// {
//     int n, a = 0, b = 1;

//     printf("unosi broj\n");
//     scanf("%d", &n);

//     if (n >= 1)
//     {
//         printf("%d\n", a);
//     }

//     if (n >= 2)
//     {
//         printf("%d\n", b);
//     }

//     for (int i = 3; i < n; i++)
//     {
//         int temp = a + b; // 0+1//1
//         printf("%d\n", temp);
//         a = b;
//         b = temp;
//     }
//     return 0;
// }
//=============================================================================================
// 3. Savrsen broj

// int main()
// {
//     int n, zbirDelilaca = 0;

//     printf("unesi broj");
//     scanf("%d", &n);

//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             zbirDelilaca += i;
//         }
//     }
//     printf("%s , zbir delilaca je - %d a n je - %d", zbirDelilaca == n ? "savrsen je" : "nije", zbirDelilaca, n);
// }
//=============================================================================================
// 4. NZS

// int main()
// {
//     int a, b, nzs = 0;

//     printf("unesi a\n");
//     scanf("%d", &a);
//     printf("unesi b\n");
//     scanf("%d", &b);

//     for (int i = a; i <= a * b; i++)
//     {
//         if (i % a == 0 && i % b == 0)
//         {
//             nzs = i;
//             break;
//         }
//     }
//     printf("nzs je %d", nzs);
// }
//=============================================================================================
// 5. Kalkulator

// int main()
// {

//     double broj1, broj2, rezultat;
//     char operatori;

//     printf("unesi prvi broj ");
//     scanf("%lf", &broj1);

//     printf("unesi drugi  broj ");
//     scanf("%lf", &broj2);

//     printf("unesi neki od operatora (+ - / *)");
//     scanf(" %c", &operatori);

//     switch (operatori)
//     {
//     case '+':
//         rezultat = broj1 + broj2;
//         printf("%.2lf", rezultat);
//         break;
//     case '-':
//         rezultat = broj1 - broj2;
//         printf("%.2lf", rezultat);
//         break;
//     case '*':
//         rezultat = broj1 * broj2;
//         printf("%.2lf", rezultat);
//         break;
//     case '/':
//         if (broj2 != 0)
//         {
//             rezultat = broj1 / broj2;
//             printf("%.2lf", rezultat);
//         }
//         else
//         {
//             printf("ne moze se deliti sa 0");
//         }
//         break;
//     default:
//         printf("moze se racunati samo sa datim operatorima");
//     }
//     return 0;
// }
//=============================================================================================
// int main()

// {
//     int a, zbir = 0;
//     printf("nesite broj\n");
//     scanf("%d", &a);
//     while (a != 0)
//     {
//         zbir = zbir + a % 10;
//         a = a / 10;
//     }
//     printf("zbir ce da bude - %d\n", zbir);
// }
//=============================================================================================
// int main()
// {
//     int broj, a = 0;

//     printf("uneksi broj");
//     scanf("%d", &broj);

//     while (broj != 0)
//     {
//         int temp = broj % 10;
//         a = a * 10 + temp;
//         broj = broj / 10;
//     }
//     printf("broj je - %d", a);
// }
//=============================================================================================
// fibonacijevi brojevi
// int main()
// {
//     int n, a = 0, b = 1, zbir;

//     printf("unesite broj\n");
//     scanf("%d", &n);

//     if (n > 1)
//     {
//         printf("%d\n", a);
//     }
//     if (n > 2)
//     {
//         printf("%d\n", b);
//     }

//     for (int i = 3; i < n; i++)
//     {
//         zbir = a + b;
//         a = b;
//         b = zbir;
//         printf("%d\n", b);
//     }
// }
//=============================================================================================
// int main()
// {
//     int a;
//     printf("unesite broj\n");
//     scanf("%d", &a);
//     if (a % 3 == 0 && a % 5 == 0)
//     {
//         printf("uneti brij je deljiv i sa 3 i sa 5\n");
//     }
//     else if (a % 3 == 0)
//     {
//         printf("broj je deljiv sa 3");
//     }
//     else if (a % 5 == 0)
//     {
//         printf("broj je deljiv sa 5");
//     }
// }
//=============================================================================================
// int main()
// {
//     int a, b, rezultat;

//     printf("unesit a vrednost");
//     scanf("%d", &a);
//     printf("unesit b stepen");
//     scanf("%d", &b);

//     rezultat = pow(a, b);
//     printf("ovo je stepen broja %d", rezultat);
// }
//=================================================================================================
// int main()
// {
//     int a, b, rezultat = 1;

//     printf("unesit a vrednost");
//     scanf("%d", &a);
//     printf("unesit b stepen");
//     scanf("%d", &b);

//     for (int i = 0; i < b; i++)
//     {
//         rezultat = rezultat * a; // = 5//25 == 125
//     }
//     printf("stepen je %d", rezultat);
// }
//=================================================================================================
// // obrnuti broj
// int main()
// {
//     int broj, a = 0;

//     printf("unesi broj");
//     scanf("%d", &broj);

//     while (broj != 0)
//     {
//         // 45
//         int temp = broj % 10; // 5
//         a = a * 10 + temp;
//         broj = broj / 10;
//     }
//     printf("%d", a);
// }
//=================================================================================================
// sabrati cifre unetog broja

// int main()
// {
//     int broj, zbir = 0;

//     printf("unesi broj");
//     scanf("%d", &broj);

//     while (broj != 0)
//     {
//         int temp = broj % 10;
//         zbir += temp;
//         broj = broj / 10;
//     }
//     printf("%d", zbir);
// }
//=================================================================================================
// faktorijel
// int main()
// {
//     int broj, faktorijel = 1;
//     printf("unesi broj");
//     scanf("%d", &broj);

//     for (int i = 1; i <= broj; i++)
//     {
//         faktorijel *= i;
//     }
//     printf("%d", faktorijel);
// }
//=================================================================================================
// savrsen broj

// int main()
// {
//     int broj, zbirDelilaca = 0;
//     printf("unesi broj");
//     scanf("%d", &broj);

//     for (int i = 1; i < broj; i++)
//     {
//         if (broj % i == 0)
//         {
//             zbirDelilaca += i;
//         }
//     }
//     printf(zbirDelilaca == broj ? "broj je savrsen" : "nije savrsen");
// }
//=================================================================================================
// prost broj
// int main()
// {
//     int broj;
//     char prostje[20] = "prost je";
//     printf("unesi broj");
//     scanf("%d", &broj);

//     for (int i = 2; i < broj; i++)
//     {
//         if (broj % i == 0)
//         {
//             strcpy(prostje, "nije prost");
//             break;
//         }
//     }
//     printf("%s", prostje);
// }
//=================================================================================================
// // kalkulator
// int main()
// {
//     double broj1, broj2, rezultat = 0;
//     char operator;

//     printf("unesi prvi broj\n");
//     scanf("%.lf", &broj1);

//     printf("unesi drugi broj\n");
//     scanf("%lf", &broj2);

//     printf("unesi operator (+ - / *)\n");
//     scanf(" %c", &operator);

//     switch (operator)
//     {
//     case '+':
//         rezultat = broj1 + broj2;
//         printf("%.2lf", rezultat);
//         break;
//     case '-':
//         rezultat = broj1 - broj2;
//         printf("%.2lf", rezultat);
//         break;
//     case '*':
//         rezultat = broj1 * broj2;
//         printf("%.2lf", rezultat);
//         break;

//     case '/':
//         if (broj2 != 0)
//         {
//             rezultat = broj1 / broj2;
//             printf("%.2lf", rezultat);
//         }
//         else
//         {
//             printf("ne moze se deliti sa 0");
//         }
//         break;
//     default:
//         printf("izaberi operator od mogucnosti");
//     }
// }
//===========================================================================================================
// Zadaci sa ispita//
// 1 zadatak
//  int main()
//  {
//      int broj;
//      printf("unesi broj");
//      scanf("%d", &broj);

//     if (broj % 2 == 0)
//     {
//         printf("broj je paran");
//     }
//     else
//     {
//         printf("broj nije paran");
//     }
// }
//===============================================================================================
// 3 zadatak broj obrnuto i proveri da li je palindrom
// int main()
// {
//     int broj, obrnutiNiz = 0, cuvanjeVrednostiBroj;
//     printf("unesi broj");
//     scanf("%d", &broj);
//     cuvanjeVrednostiBroj = broj;
//     while (broj != 0)
//     {

//         int temp = broj % 10;
//         obrnutiNiz = obrnutiNiz * 10 + temp;
//         broj /= 10;
//     }
//     printf("ovo je obrnuti niz - %d\n", obrnutiNiz);
//     if (cuvanjeVrednostiBroj == obrnutiNiz)
//     {
//         printf("broj je palindrom");
//     }
//     else
//     {
//         printf("broj nije palindrom");
//     }
// }
//=========================================================================================
// // 2. armsttrongov broj
// // zbir svojih cifara podignut na stepen od broja cifara

// int main()
// {
//     int broj, zbirCifaraStepena = 0, duzinaBroja = 0;
//     printf("unesi broj");
//     scanf("%d", &broj);
//     int kopijaBroja = broj;
//     int drugaKopija = broj;
//     while (kopijaBroja != 0)
//     {
//         duzinaBroja += 1;
//         kopijaBroja /= 10;
//     }

//     while (broj != 0)
//     {
//         int temp = broj % 10;
//         int zbirStepena = pow(temp, duzinaBroja);
//         zbirCifaraStepena += zbirStepena;
//         broj = broj / 10;
//     }

//     printf("duzina broja je %d zbircifara - %d kopija broja - %d\n", duzinaBroja, zbirCifaraStepena, kopijaBroja);
//     if (zbirCifaraStepena == drugaKopija)
//     {
//         printf("jeste armstrongov broj");
//     }
//     else
//     {
//         printf("nije");
//     }
//     return 0;
// }
//========================================================================================
// int main()
// {
//     int a = 1234;
//     char tekst[20];
//     sprintf(tekst, "%d", a);
//     int duzinaAbroja = strlen(tekst);
//     printf("ovo je length od a %d", duzinaAbroja);x
// }
//========================================================================================
// // Funkcija koja menja vrednost promenljive pomoću pokazivača
// void promeniVrednost(int *pokazivac)
// {
//     *pokazivac = 42; // Postavlja vrednost na 42
// }

// int main()
// {
//     int broj = 10;

//     printf("Pre promene: %d\n", broj);

//     // Pozivamo funkciju i prosleđujemo adresu promenljive
//     promeniVrednost(&broj);
//     broj = 5;
//     printf("Posle promene: %d\n", broj);

//     return 0;
// }

//========================================================================================
// Funkcija koja menja vrednosti na koje pokazivači ukazuju
// void zameni(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x, y; // Dve promenljive
//     printf("unesite prvu zatim drugu vrednost\n");
//     scanf("%d %d", &x, &y);
//     printf("Pre zamene: x = %d, y = %d\n", x, y);
//     zameni(&x, &y);

//     printf("Posle zamene: x = %d, y = %d\n", x, y);

//     return 0;
// }
//========================================================================================
// int main()
// {
//     int x = 5, y = 10;
//     printf("Pre zamene: x = %d, y = %d\n", x, y);
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("posle zamene: x = %d, y = %d\n", x, y);
// }
//========================================================================================
// int saberi(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int a = 10, b = 20;
//     int rezultat = saberi(a, b);
//     printf("%d", rezultat);
// }
//========================================================================================
// void zameni(int *broj1, int *broj2)
// {
//     int temp = *broj1;
//     *broj1 = *broj2;
//     *broj2 = temp;
// }
// int main()
// {
//     int a = 10, b = 20;
//     zameni(&a, &b);
//     printf("posle zamene a = %d i b = %d", a, b);
// }
//========================================================================================
// void kvadriraj(int *broj)
// {
//     *broj = *broj * *broj;
// }
// int main()
// {
//     int x = 5; // Originalna promenljiva

//     printf("Pre kvadriranja: %d\n", x);

//     kvadriraj(&x); // Prosleđujemo adresu promenljive

//     printf("Posle kvadriranja: %d\n", x);
//     return 0;
// }
//=======================================================================
// #include <stdio.h>

// #define SIZE 3 // Definišemo veličinu matrica (ovde je 3x3)

// void printMatrix(int matrix[SIZE][SIZE])
// {
//     // Ispisivanje matrice
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int matrixA[SIZE][SIZE], matrixB[SIZE][SIZE];

//     // Unos prve matrice A
//     printf("Unesite matricu A (%dx%d):\n", SIZE, SIZE);
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//             printf("A[%d][%d] = ", i + 1, j + 1);
//             scanf("%d", &matrixA[i][j]);
//         }
//     }

//     // Unos druge matrice B
//     printf("Unesite matricu B (%dx%d):\n", SIZE, SIZE);
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//             printf("B[%d][%d] = ", i + 1, j + 1);
//             scanf("%d", &matrixB[i][j]);
//         }
//     }

//     // Ispis matrica
//     printf("\nMatrica A:\n");
//     printMatrix(matrixA);

//     printf("\nMatrica B:\n");
//     printMatrix(matrixB);

//     return 0;
// }
//=======================================================================
// int main()
// {
//     int suma = 0;
//     int n = 2;
//     int mat[3][3] =
//         {{1, 21, 3},
//          {4, 5, 6},
//          {7, 8, 9}};

//     for (int i = 0; i < 3; i++)
//     {
//         suma += mat[i][1];
//     }
//     printf("%d", suma);
// }
//=======================================================================
// #define N 3
// int main()
// {
//     int A[N][N] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};
//     int B[N][N] = {
//         {9, 8, 7},
//         {6, 5, 4},
//         {3, 2, 1}};
//     int sum = 0;
//     for (int i = 0; i < N; i++)
//     {
//         for (int y = 0; y < N; y++)
//         {
//             sum += A[i][y] + B[i][y];
//             printf("%d ", A[i][y] + B[i][y]);
//         }
//         printf("\n");
//     }
//     printf("%d", sum);
// }
//=======================================================================
// // izracunati matrice
// #include <stdio.h>

// #define N 3 // Dimenzija matrice (3x3)

//=======================================================================
// int main()
// {
//     int a, b, c, d;
//     int suma = 0;

//     printf("unesite koja ce da bude duzina matrice a\n");
//     scanf("%d", &a);
//     scanf("%d", &b);

//     printf("unesite koja ce da bude duzina matrice b\n");
//     scanf("%d", &c);
//     scanf("%d", &d);
//     if (a != c && b != d)
//     {
//         printf("Moraju imati iste dimenzije");
//     }
//     int A[a][b], B[c][d];

//     printf("Unesite elemente matrice A :\n");
//     for (int i = 0; i < a; i++)
//     {
//         for (int y = 0; y < a; y++)
//         {
//             printf("unesi elemeni A[%d][%d]:", i + 1, y + 1);
//             scanf("%d", &A[i][y]);
//         }
//     }

//     for (int i = 0; i < a; i++)
//     {
//         for (int y = 0; y < a; y++)
//         {
//             printf("unesi elemeni B[%d][%d]:", i + 1, y + 1);
//             scanf("%d", &B[i][y]);
//         }
//     }

//     for (int i = 0; i < a; i++)
//     {
//         for (int y = 0; y < a; y++)
//         {
//             suma += A[i][y] + B[i][y];
//         }
//     }
//     printf("%d", suma);
// }
//=======================================================================
// #include <stdio.h>

// #define N 3

// int main()
// {
//     int A[N][N] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};

//     int B[N][N] = {
//         {9, 8, 7},
//         {6, 5, 4},
//         {3, 2, 1}};

//     int C[N][N];
//     for (int i = 0; i < N; i++)
//     {
//         for (int y = 0; y < N; y++)
//         {
//             C[i][y] = 0;
//             for (int z = 0; z < N; z++)
//             {
//                 C[i][y] += A[y][z] * B[z][i];
//             }
//         }
//     }

//     printf("\nMatrica A * B (proizvod):\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int y = 0; y < N; y++)
//         {
//             printf("%d ", C[i][y]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//====================================================================================
// // duzina niza
// int main()
// {
//     int arr[10];
//     size_t brojElemenata = sizeof(arr) / sizeof(arr[0]);
//     printf("Ukupna veličina niza: %zu bajtova\n", brojElemenata);
// }
//====================================================================================
// int main()
// {
//     int matrica[3][4]; // Matrica sa 3 reda i 4 kolone (ukupno 3*4=12 elemenata)

//     size_t ukupnaVelicina = sizeof(matrica);                        // Ukupna veličina matrice u bajtovima
//     size_t velicinaJednogElementa = sizeof(matrica[0][0]);          // Veličina jednog elementa matrice
//     size_t brojElemenata = ukupnaVelicina / velicinaJednogElementa; // Broj elemenata u matrici

//     size_t brojRedova = sizeof(matrica) / sizeof(matrica[0]);       // Broj redova
//     size_t brojKolona = sizeof(matrica[0]) / sizeof(matrica[0][0]); // Broj kolona

//     printf("Ukupna veličina matrice: %zu bajtova\n", ukupnaVelicina);
//     printf("Veličina jednog elementa: %zu bajtova\n", velicinaJednogElementa);
//     printf("Broj elemenata u matrici: %zu\n", brojElemenata);
//     printf("Broj redova: %zu\n", brojRedova);
//     printf("Broj kolona: %zu\n", brojKolona);

//     return 0;
// }
//====================================================================================
// int faktorijel(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * faktorijel(n - 1);
//     }
// }

// int main()
// {
//     int broj;

//     printf("unesi broj\n");
//     scanf("%d", &broj);

//     printf("rezultat faktorijela je %d\n", faktorijel(broj));
// }
//====================================================================================
// // Pokazivac
// void zameniVrednosti(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a = 5, b = 10;
//     printf("trenutne vrednosti a = %d i b = %d\n", a, b);
//     zameniVrednosti(&a, &b);
//     printf("promenjene vrednosti a = %d b = %d\n", a, b);
// }
//====================================================================================
// #include <stdio.h>

// int findMax(int *niz, int size)
// {
//     int max = *niz;
//     for (int i = 1; i < size; i++)
//     {
//         if (*(niz + i) > max)
//         {
//             max = *(niz + i);
//             printf("%d ovo je niz + i", max);
//         }
//     }
//     return max;
// }

// int main()
// {
//     int numbers[] = {1, 2, 35, 4, 3, 55};
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     int max = findMax(numbers, size);

//     printf("Najveći broj u nizu je: %d\n", max);
//     return 0;
// }
//====================================================================================
// napisi program koji transponuje matricu koristeci funkciju i pokazivace
// korinsik unosi dimenzije i elemente
// moras ovo da uradis sa funkcijom i pokazivacima
// int main()
// {
//     int a, b;
//     printf("unesi dimenzije matrice  a \n");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     int mat[a][b];
//     size_t redovi = sizeof(mat) / sizeof(mat[0]);
//     size_t kolone = sizeof(mat[0]) / sizeof(mat[0][0]);

//     printf("%zu", kolone);
//     printf("Unesi elemente matrice:\n");
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     for (int i = 0; i < kolone; i++)
//     {
//         for (int y = 0; y < redovi; y++)
//         {
//             int fakeniz = mat[y][i];
//             // printf("%d ", mat[y][i]);
//             printf("%d", fakeniz);
//         }
//         printf("\n");
//     }
// }
//====================================================================================
// void transponovana(int *matrica, int rows, int columns, int *transpon)
// {
//     for (int i = 0; i < columns; i++)
//     {
//         for (int y = 0; y < rows; y++)
//         {
//             *(transpon + y * columns + i) = *(matrica + y * columns + i);
//         }
//     }
// }
// int main()
// {
//     int a, b;
//     printf("unesite dimenzije matrice\n");
//     scanf("%d %d", &a, &b);
//     int matrica[a][b];
//     int transpon[a][b];
//     size_t brojredova = sizeof(matrica) / sizeof(matrica[0]);
//     size_t brojkolona = sizeof(matrica[0]) / sizeof(matrica[0][0]);
//     printf("unesite vase elemente matrice\n");
//     for (int i = 0; i < brojredova; i++)
//     {
//         for (int y = 0; y < brojkolona; y++)
//         {
//             scanf("%d", &matrica[i][y]);
//         }
//     }
//     transponovana((int *)matrica, brojredova, brojkolona, (int *)transpon);

//     for (int i = 0; i < brojkolona; i++)
//     {
//         for (int j = 0; j < brojredova; j++)
//         {
//             printf("%d ", transpon[j][i]);
//         }
//         printf("\n");
//     }
// }
//====================================================================================
// void transponovano(int *matrica, int kolona, int red, int *transponovana)
// {
//     for (int i = 0; i < kolona; i++)
//     {
//         for (int y = 0; y < red; y++)
//         {
//             *(transponovana + y * kolona + i) = *(matrica + y * kolona + i);
//         }
//     }
// }

// int main()
// {
//     int a, b;
//     printf("unesite dimenzije matrice\n");
//     scanf("%d %d", &a, &b);
//     int matrica[a][b];
//     int transpon[a][b];
//     size_t brojredova = sizeof(matrica) / sizeof(matrica[0]);
//     size_t brojkolona = sizeof(matrica[0]) / sizeof(matrica[0][0]);

//     for (int i = 0; i < brojredova; i++)
//     {
//         for (int y = 0; y < brojkolona; y++)
//         {
//             scanf("%d", &matrica[i][y]);
//         }
//     }

//     transponovano((int *)matrica, brojkolona, brojredova, (int *)transpon);

//     for (int i = 0; i < brojkolona; i++)
//     {
//         for (int y = 0; y < brojredova; y++)
//         {
//             printf("%d ", transpon[y][i]);
//         }
//         printf("\n");
//     }
// }
//====================================================================================
// pokusaj
// int main()
// {
//     int a, b;
//     printf("unesi dimenzije matrice\n");
//     scanf("%d %d", &a, &b);
//     int matrica[a][b];
//     size_t duzinaReda = sizeof(matrica) / sizeof(matrica[0]);
//     size_t duzinaKolone = sizeof(matrica[0]) / sizeof(matrica[0][0]);

//     printf("unesi elemente matrice\n");

//     for (int i = 0; i < duzinaReda; i++)
//     {
//         for (int y = 0; y < duzinaKolone; y++)
//         {
//             scanf("%d", &matrica[i][y]);
//         }
//     }
//     for (int i = 0; i < duzinaReda; i++)
//     {
//         for (int y = 0; y < duzinaKolone; y++)
//         {
//             printf("%d ", matrica[i][y]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < duzinaReda; i++)
//     {
//         for (int y = 0; y < duzinaKolone; y++)
//         {
//             printf("%d ", matrica[y][i]);
//         }
//         printf("\n");
//     }
// }
//====================================================================================
// #include <stdio.h>

// // Funkcija za razmenu dva elementa
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Funkcija za generisanje permutacija korišćenjem backtracking-a
// void permute(int *niz, int start, int end)
// {
//     // Kada dostignemo kraj niza, ispisujemo permutaciju
//     if (start == end)
//     {
//         for (int i = 0; i <= end; i++)
//         {
//             printf("%d ", niz[i]);
//         }
//         printf("\n");
//         return;
//     }

//     // Generisanje permutacija za svaki element od start do end
//     for (int i = start; i <= end; i++)
//     {
//         // Zameni niz[start] i niz[i]
//         swap(&niz[start], &niz[i]);

//         // Poziv funkcije rekurzivno sa sledećim indeksom
//         permute(niz, start + 1, end);

//         // Vratimo stanje niza, swap opet da bi smo generisali druge permutacije
//         swap(&niz[start], &niz[i]);
//     }
// }

// int main()
// {
//     int niz[] = {3, 2, 1};
//     int n = sizeof(niz) / sizeof(niz[0]);
//     // Poziv funkcije za generisanje permutacija
//     permute(niz, 0, n - 1);

//     return 0;
// }
//====================================================================================
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void permute(int *niz, int start, int end)
// {
//     if (start == end)
//     {
//         for (int i = 0; i <= end; i++)
//         {
//             printf("%d", niz[i]);
//         }
//         printf("\n");
//         return;
//     }

//     for (int i = start; i <= end; i++)
//     {
//         swap(&niz[start], &niz[i]);

//         permute(niz, start + 1, end);

//         swap(&niz[start], &niz[i]);
//     }
// }

// int main()
// {
//     int niz[] = {1, 2, 3};
//     int end = sizeof(niz) / sizeof(niz[0]);
//     permute(niz, 0, end - 1);
// }
//====================================================================================
// // transponovanje matrice

// void transponovanaMatrica(int *matrica, int redovi, int kolone, int *transponovana)
// {

//     for (int i = 0; i < kolone; i++)
//     {
//         for (int y = 0; y < redovi; y++)
//         {
//             *(transponovana + y * kolone + i) = *(matrica + y * kolone + i);
//         }
//     }
// }

// int main()
// {
//     int a, b;
//     printf("unesite duzine matrica\n");
//     scanf("%d %d", &a, &b);
//     int mat[a][b];
//     int transpon[a][b];
//     printf("uensite elemente matrice\n");

//     for (int i = 0; i < a; i++)
//     {
//         for (int y = 0; y < b; y++)
//         {
//             scanf("%d", &mat[i][y]);
//         }
//     }

//     transponovanaMatrica(*(mat), a, b, *(transpon));

//     for (int i = 0; i < a; i++)
//     {
//         for (int y = 0; y < b; y++)
//         {
//             printf("%d ", transpon[y][i]);
//         }
//         printf("\n");
//     }
// }
//====================================================================================
// int main()
// {
//     char rec[100];
//     int samoglasnik = 0;
//     int suglasnik = 0;
//     printf("unesite rec");
//     scanf("%s", rec);

//     for (int i = 0; rec[i] != '\0'; i++)
//     {
//         char c = tolower(rec[i]);

//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//         {
//             samoglasnik++;
//         }
//         else
//         {
//             suglasnik++;
//         }
//     }
//     printf("Broj samoglasnika: %d\n", samoglasnik);
//     printf("Broj suglasnika: %d\n", suglasnik);

//     return 0;
// }
// //====================================================================================
// int main()
// {
//     char recenica[100];
//     int brojReci = 0;
//     int uReci = 0;
//     printf("unesite recenicu\n");
//     fgets(recenica, sizeof(recenica), stdin);

//     for (int i = 0; recenica[i] != '\0'; i++)
//     {
//         if (recenica[i] == ' ' || recenica[i] == '\n')
//         {
//             if (!uReci)
//             {
//                 brojReci++;
//                 uReci = 1;
//             }else{
//             uReci = 0;
// }
//         }
//     }
//     printf("Broj reči: %d\n", brojReci);

//     return 0;
// }
// //====================================================================================

// //====================================================================================
// #include <stdio.h>

// #define SIZE 5

// int main()
// {
//     int niz[SIZE] = {10, 20, 30, 40, 50};
//     int start = 0; // Početni indeks
//     for (int i = 0; i < 10; i++)
//     { // Prolazak kroz niz više puta
//         printf("%d ", niz[(start + i) % SIZE]);
//     }
//     return 0;
// }
// //====================================================================================
//     #include <stdio.h>

// int main()
// {
//     int broj = 10;          // Obična promenljiva
//     int *pokazivac = &broj; // Pokazivač na promenljivu 'broj'

//     // Indirektno pristupamo vrednosti promenljive 'broj' pomoću pokazivača
//     printf("Vrednost broj: %d\n", *pokazivac); // *pokazivac koristi indirekciju za pristup 'broj'

//     // Takođe možemo koristiti pokazivač za promenu vrednosti
//     *pokazivac = 20; // Promena vrednosti 'broj' indirektno putem pokazivača
//     printf("Nova vrednost broj: %d\n", broj);

//     return 0;
// }
// //====================================================================================
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[] = "apple";
//     char str2[] = "orange";

//     // Upoređivanje stringova
//     int result = strcmp(str1, str2);
//     if (result == 0)
//     {
//         printf("Stringovi su isti.\n");
//     }
//     else if (result < 0)
//     {
//         printf("Prvi string je manji od drugog.\n");
//     }
//     else
//     {
//         printf("Prvi string je veći od drugog.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// //====================================================================================
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char *tekst = "Ovo je primer za funkciju strstr.";
//     const char *podstring = "primer";

//     // Tražimo podstring u tekstu
//     char *rezultat = strstr(tekst, podstring);

//     if (rezultat != NULL)
//     {
//         printf("Podstring '%s' pronađen na poziciji: %ld\n", podstring, rezultat - tekst);
//     }
//     else
//     {
//         printf("Podstring '%s' nije pronađen.\n", podstring);
//     }

//     return 0;
// }
//====================================================================================
// int main()
// {
//     char recenica[1000];
//     int brojKaraktera = 0;

//     printf("Unesite recenicu: ");
//     fgets(recenica, sizeof(recenica), stdin);

//     // Prolazak kroz recenicu
//     for (int i = 0; recenica[i] != '\0'; i++)
//     {
//         if (recenica[i] != ' ' && recenica[i] != '\n')
//         {
//             brojKaraktera++;
//         }
//     }

//     printf("Broj karaktera bez razmaka: %d\n", brojKaraktera);

//     return 0;
// }
//====================================================================================
// // a)Написати функцију која проверава да ли је дати стринг палиндром.​

// void polindrom()
// {
// }
// int main()
// {
//     char ime[10] = "anasdas";
//     size_t duzinaString = strlen(ime);
//     char niz[duzinaString];
//     // printf("%zu", duzinaString);

//     for (int i = 0; i < duzinaString; i++)
//     {
//         niz[i] = ime[i];
//     }

//     int ispolindrom = 1;
//     for (int i = 0; i < duzinaString; i++)
//     {
//         if (niz[i] != ime[duzinaString - 1 - i])
//         {
//             ispolindrom = 0;
//             break;
//         }
//     }

//     if (ispolindrom)
//     {
//         printf("jeste polindrom");
//     }
//     else
//     {
//         printf("nije");
//     }
// }
//====================================================================================
// // palindrom za stringove sa funkcijama
// int isPalindrom(char ime[])
// {
//     size_t duzinaStringa = strlen(ime);
//     char niz[duzinaStringa];

//     for (int i = 0; i < duzinaStringa; i++)
//     {
//         niz[i] = ime[i];
//     }
//     int isPalindrom = 1;
//     for (int i = 0; i < duzinaStringa; i++)
//     {
//         if (niz[i] != ime[duzinaStringa - 1 - i])
//         {
//             isPalindrom = 0;
//             break;
//         }
//     }
//     return isPalindrom;
// }

// int main()
// {
//     char ime[120] = "anavolimilovana";
//     if (isPalindrom(ime))
//     {
//         printf("jeste polindrom\n");
//     }
//     else
//     {
//         printf("nije\n");
//     }
// }
//====================================================================================
// Napisati funkciiju koja racuna duzinu stringa

// int duzinaStringa(char ime[])
// {
//     int duzina = 0;

//     while (ime[duzina] != '\0')
//     {
//         duzina++;
//     }
//     return duzina;
// }
// int main()
// {
//     char ime[] = "ana";

//     printf("duzina strina ime je %d", duzinaStringa(ime));
// }
//==========================================================================================
// size_t duzinaStringa(char ime[])
// {
//     return strlen(ime);
// }
// int main()
// {
//     char ime[] = "ana";

//     printf("duzina strina ime je %zu", duzinaStringa(ime));
//     return 0;
// }
//==========================================================================================
// #define MAX_SIZE 10
// #include <limits.h>
// #include <string.h>
// #include <stdio.h>

// void izbaci_sa_pocetka(int *niz, int *velicina)
// {
//     if (*velicina > 0)
//     {
//         for (int i = 0; i < *velicina - 1; i++)
//         {
//             niz[i] = niz[i + 1];
//         }
//         (*velicina)--;
//         printf("prvi element je izbacen\n");
//     }
//     else
//     {
//         printf("niz je prazan\n");
//     }
// }
// int postojiParniBroj(int *niz, int *velicina)
// {
//     for (int i = 0; i < *velicina; i++)
//     {
//         if (niz[i] % 2 == 0)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
// int najmanjiParniBroj(int *niz, int velicina)
// {
//     int min = INT_MAX;
//     int postoji = 0;
//     for (int i = 0; i < velicina; i++)
//     {
//         if (niz[i] % 2 == 0 && niz[i] < min)
//         {
//             min = niz[i];
//             postoji = 1;
//         }
//     }
//     return postoji ? min : -1;
// }
// void meni(int *niz, int *velicina)
// {
//     int opcija;
//     do
//     {
//         printf("\nMeni:\n");
//         printf("1 - Izbaci prvi element\n");
//         printf("2 - Proveri da li postoji parni broj\n");
//         printf("3 - Pronadji najmanji parni broj\n");
//         printf("0 - Izlaz\n");
//         printf("Izaberite opciju: ");
//         scanf("%d", &opcija);

//         switch (opcija)
//         {
//         case 1:
//             izbaci_sa_pocetka(niz, velicina);
//             break;
//         case 2:
//             if (postojiParniBroj(niz, velicina))
//             {
//                 printf("postoji parni broj");
//             }
//             else
//             {
//                 printf("ne postoji parni broj");
//             }
//             break;
//         case 3:
//             if (najmanjiParniBroj(niz, *velicina) != -1)
//             {
//                 printf("Najmanji parni broj u nizu je: %d\n", najmanjiParniBroj(niz, *velicina));
//             }
//             else
//             {
//                 printf("U nizu nema parnih brojeva.\n");
//             }
//             break;
//         case 0:
//             printf("izlaz iz programa.\n");
//             break;
//         default:
//             printf("Ne postoji opcija koju ste izabrali\n");
//         }
//     } while (opcija != 0);
// }

// void zadatak_2()
// {
//     int niz[MAX_SIZE], velicina;

//     printf("Unesite velicinu niza: \n");
//     scanf("%d", &velicina);

//     printf("Unesite elemente niza: \n");
//     for (int i = 0; i < velicina; i++)
//     {
//         scanf("%d", &niz[i]);
//     }
//     meni(niz, &velicina);
// }
// int main()
// {
//     zadatak_2();
//     return 0;
// }
//==========================================================================================

// int izbaciSaPocetka(int *niz, int *duzina)
// {
//     if (*duzina > 0)
//     {
//         for (int i = 0; i < *duzina - 1; i++)
//         {
//             niz[i] = niz[i + 1];
//         }
//         (*duzina)--;
//         printf("prvi element je izbacen\n");
//     }
//     else
//     {
//         printf("Niz je prazan\n");
//     }
//     return 0;
// }

// int postojiLiParni(int *niz, int *duzina)
// {
//     int postoji = 0;
//     for (int i = 0; i < *duzina; i++)
//     {
//         if (niz[i] % 2 == 0)
//         {
//             postoji = 1;
//         }
//     }
//     if (postoji)
//     {
//         printf("postoji parni\n");
//     }
//     else
//     {
//         printf("ne postoji parni\n");
//     }

//     return 0;
// }

// int najmanjiParniBroj(int *niz, int *duzina)
// {
//     int min = INT_MAX;
//     int ima = 0;
//     for (int i = 0; i < *duzina; i++)
//     {
//         if (niz[i] % 2 == 0 && niz[i] < min)
//         {
//             min = niz[i];
//             ima = 1;
//         }
//     }
//     if (ima)
//     {
//         printf("ovo je najmanji parni broj %d", min);
//     }
//     else
//     {
//         printf("nema najmanji parni broj");
//     }
//     return 0;
// }

// int meni(int *niz, int *duzina)
// {
//     int opcija;
//     do
//     {
//         printf("\nMeni:\n");
//         printf("1 - izbaci element u nizu\n");
//         printf("2 - da li postoji parni broj\n");
//         printf("3 - Najmanji parni broj\n");
//         printf("0 - izlaz iz programa\n");
//         printf("izaberite opciju\n");
//         scanf("%d", &opcija);

//         switch (opcija)
//         {
//         case 1:
//             izbaciSaPocetka(niz, duzina);
//             break;
//         case 2:
//             postojiLiParni(niz, duzina);
//             break;
//         case 3:
//             najmanjiParniBroj(niz, duzina);
//             break;
//         default:
//             printf("ne postoji opcija koju ste izabrali pokusajte ponovo");
//         }
//     } while (opcija != 0);

//     return 0;
// }
// void zadatak2()
// {
//     int niz[MAX], duzina;
//     printf("unesi duzinu niza\n");
//     scanf("%d", &duzina);
//     printf("unesi elemente niza\n");

//     for (int i = 0; i < duzina; i++)
//     {
//         scanf("%d", &niz[i]);
//     }
//     meni(niz, &duzina);
// }
// int main()
// {
//     zadatak2();
//     return 0;
// }
//===========================================================================================
// int main()
// {
//     int niz[MAX], duzina;
//     int min = INT_MAX;
//     printf("unesi duzinu niza\n");
//     scanf("%d", &duzina);
//     printf("unesi elemente\n");

//     for (int i = 0; i < duzina; i++)
//     {
//         scanf("%d", &niz[i]);
//     }

//     if (duzina > 0)
//     {
//         for (int i = 0; i < duzina - 1; i++)
//         {
//             niz[i] = niz[i + 1];
//         }
//         duzina--;
//     }
//     printf("ovo je novi niz \n");
//     for (int i = 0; i < duzina; i++)
//     {
//         printf(" %d", niz[i]);
//     }
// }
//===========================================================================================
// int isPalindrom(char ime[])
// {
//     int duzinaStringa = 0;

//     while (ime[duzinaStringa] != '\0')
//     {
//         duzinaStringa++;
//     }
//     printf("ovo je duzinaStringa %d\n", duzinaStringa);
//     int copy[duzinaStringa];
//     for (int i = 0; i < duzinaStringa; i++)
//     {
//         copy[i] = ime[i];
//     }
//     int isPalindrom = 1;
//     for (int i = 0; i < duzinaStringa; i++)
//     {
//         if (copy[i] != ime[duzinaStringa - i - 1])
//         {
//             isPalindrom = 0;
//             break;
//         }
//     }
//     return isPalindrom;
// }
// int main()
// {
//     char ime[] = "anda";
//     if (isPalindrom(ime))
//     {
//         printf("palindrom je");
//     }
//     else
//     {
//         printf("nije palindrom ");
//     }
// }
//===========================================================================================
