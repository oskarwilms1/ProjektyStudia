#include <stdio.h>


int main()
{
    int a, b, c;
    printf("Użytkowniku! Podaj 3 liczby całkowite odzielone spacjami!\n");
    scanf("%d %d %d", &a, &b, &c );
    printf("Wybrałeś: %d, %d, %d\n", a, b, c);
    if(a>=b && a>=c)
    {
        printf("Największa liczba to: %d\n", a);
    }
    if(b>=a && b>=c)
    {
        printf("Największa liczba to: %d\n", b);
    }
    if(c>=a && c>=b)
    {
        printf("Największa liczba to: %d\n", c);
    }


    return 0;
}