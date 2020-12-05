#include <stdio.h>
#include <stdlib.h>
#define COUNTER 60
#define WEEKEND 7
int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();

    double number;
    printf("podaj liczbe zmiennoprzecinkowa: \n");
    scanf("%lf",&number);

    zadanie6(number);
    return 0;
}
void zadanie1(){
    int time;
    int hour;
    int i = 0;
    printf("Zadanie nr 1\n");
    printf("Podaj ilosc minut, ktore chcesz przeliczyc: ");
    scanf("%i",&time);
    int czas = time / COUNTER;

    while(i < time){
        hour = time / COUNTER;
    i++;
    }
    int minutes = time - (hour * COUNTER);
    printf("Wprowadzony czas to %i godzin, oraz %i minut\n\n", hour, minutes);
}
void zadanie2(){
    printf("Zadanie nr 2\n");
    int a;
    printf("Podaj liczbe calkowita: ");
    scanf("%i",&a);
    printf("Odpowiedzia sa liczby: ");
    int numbersStart = a - 5;
    int numbersEnd = a + 6;
    while(numbersStart < numbersEnd){
        printf("%i ", numbersStart);
        numbersStart++;

    }
    printf(" \n\n");
}
void zadanie3(){
    printf("Zadanie nr 3\n");
    printf("Podaj liczbe dni: ");
    int days;
    int i = 0;
    int sumOfweeks;
    int sumOfDays;

    scanf("%i", &days);
    while(i < days){
        sumOfweeks = i / WEEKEND;
        i++;
    }
    sumOfDays = i - (sumOfweeks * WEEKEND);
    printf("Podana liczba to tygodni: %i, oraz dni: %i\n\n", sumOfweeks, sumOfDays);

}
void zadanie4(){
    printf("Zadanie nr 4\n");
    int licznik, suma;

    licznik = 0;
    suma = 0;
    int number;
    printf("Podaj zmienna: ");
    scanf("%i", &number);
    while(licznik ++ < number){
        suma = suma + licznik;
        printf("dzien %i suma = %d\n", licznik, suma);
    }
    printf("\n\n");
}
void zadanie5(){
    printf("Zadanie nr 5\n");
    int licznik, suma, day;

    licznik = 0;
    suma = 0;
    day = 1;
    int number;
    printf("Podaj zmienna: ");
    scanf("%i", &number);
    while(licznik ++ < number){
        suma = licznik * licznik;
        printf("dzien %i, a jej kwadrat to = %d\n", day, suma);
        day++;
    }
    printf("\n\n");

}
void zadanie6(double number){
    double cubeOfNumber = pow(number, 3.0);
    printf("Szescian liczby: %.2lf to liczba %.2lf", number, cubeOfNumber);
}

