#include <stdio.h>
#include <stdlib.h>

int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();
    zadanie6();
    return 0;
}
void zadanie1(){
    printf("Zadanie nr 1\n");
    int z = 2147483647;
    printf("Obecna zmienna 'z' to: %d\ oraz jest typu int\n", z);
    printf("Po dodaniu do niej liczb: 10,20 oraz 30 otrzymujemy odpowiednio %d %d %d\nco swiadczy o przepelnieniu typu zmiennej\n\n", z+10, z+20, z+30);

    double x = 1.7e308;
    printf("Zmienna 'x' jest typu double, aktualnie jej wartosc to %.1f\nco mozna zapisac jako %.1e\n", x,x);
    printf("Przy pomnozeniu jej przez 100 otrzymamy - %e - co swiadczy o przepelnieniu\n\n", x*10);

    float y = 1.0e38f;
    float niedomiarY = y * 1000.0f;
    printf("Zmienna 'y' jest typu float, aktualnie jej wartosc %.1e\n", y);
    printf("Przy mnozeniu przez otrzymuje %f , co swiadczy o przepelnieniu\n\n", niedomiarY);
}
void zadanie2(){
    printf("Zadanie nr 2\n");
    int a;
    printf("Prosze podac kod ASCII, ktory nalezy do zbioru podstawowego: ");
    scanf("%d",&a);
    printf("Podales kod ASCII: %d.\n",a);
    printf("Podales znak: %c\n\n",a);
}
void zadanie3(){
    printf("Zadanie nr 3\n");
    printf("\aSally, przerazona niespodziewanym glosem, krzyknela 'A niech mnie, co to bylo?!\n\n");
}
void zadanie4(){
    printf("Zadanie nr 4\n");
    float b;
    printf("podaj liczbe: ");
    scanf("%f",&b);
    printf("podana liczba to %.1f lub %.1e\n\n", b, b);
}
void zadanie5(){
    printf("Zadanie nr 5\n");
    float wiek;
    printf("podaj swoj wiek w latach ");
    scanf("%f",&wiek);
    float wzor =((3.156e+007)/60);
    printf("to jest %.2f sekund\n\n",wzor * wiek);
}
void zadanie6(){
    printf("Zadanie nr 6\n");
    float jednaCzasteczka = 3e-23;
    float jedenLitr = jednaCzasteczka *1000;
    float litry;;
    printf("Podaj ilosc wody w litrach: ");
    float iloscCzasteczek = jedenLitr * litry;
    scanf("%f",&litry);
    printf("W %.f litrach jest %.2f czasteczek wody", litry, iloscCzasteczek);

}
