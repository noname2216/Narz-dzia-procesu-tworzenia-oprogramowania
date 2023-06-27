#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//funkcja która tworzy nową linię
void koniec_lini()
{
    printf("\n");
}

//funkcja do zmiany kolejnośći zmiennych
int zamiana(int a[],int i)
{
    int buf;
    buf=a[i];
    a[i]=a[i+1];
    a[i+1]=buf;
}

int sortowanie_babelkowe(int tab[],int n)
{
    int i,k;
    for(i=n-1;i>0;i--)
    {
        for(k=0;k<i;k++)
        {
            if (tab[k]>tab[k+1])
            zamiana(tab[k],k);
        }
    }
}
int main ()
{
    //do losowania liczb
    srand(time(0));
    //inty funkcji głównej
    int dlugosc,min,max;

    //początek programu
    printf("Początek programu");
    koniec_lini();

    //pobieranie danych od użytkownika

    //dlugośc
    do
    {
        printf("podaj długość tablicy");
        scanf("%d",dlugosc);
    } while (dlugosc<0);

    //tworzenie tablicy o podanej długośći
    int tab[dlugosc];

    //minimum
    do
    {
        printf("podaj minimum");
        scanf("%d",min);
    } while (min<0);


    //maximum
    do
    {
        printf("podaj maximum");
        scanf("%d",max);
    } while (max<0);

    //losowanie liczb w tablicy
    for (int i = 0; i < dlugosc; i++)
    {
        tab[i] = (rand() %(max - min + 1)) + min;
    }

    //wyświetlenie nieposotowanej tablicy
    printf("przed sortowaniem");
    koniec_lini();

    for (int i = 0; i < dlugosc; i++)
    {
        printf("%d",tab[i]);
    }

    //sortowanie tablicy
    sortowanie_babelkowe(tab,dlugosc);
    //wyświetlenie posortowanej tablicy
    printf("po sortowaniu");
    koniec_lini();

    for (int i = 0; i < dlugosc; i++)
    {
        printf("%d",tab[i]);
    }

    printf("wciśnij e by wyjść z programu");
    //wyjście z programu
    char exit;

    exit = getchar();

    if (exit == 'e' || exit == 'E')
    {
        return 0;
    }
    

}