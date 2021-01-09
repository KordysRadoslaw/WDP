#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double min(double, double);
void rzad_zn(char, int, int);
void wiersze(char,int, int);
double odwrotnosc(double);
double srednia_harmoniczna(double, double);
void wypisz_pozycje(char);
int dlugoscCiagu(const char*napis);
float potega(int, int);
float potega2(int, int);
void do_systemu(int, int);


int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    //zadanie 5 dziala, trzeba poprzedni zadania zakomentowac aby pierwsze startowalo zadanie nr 5
    zadanie5();
    zadanie6();
    zadanie7();
    zadanie8();


}
zadanie1(){
    printf("Zadanie nr 1\n");
    printf("%f \n", min(10,15));
    printf("%f \n", min(3,5));
    printf("%f \n", min(-2,-3));

}
zadanie2(){
    printf("Zadanie nr 2\n");
    rzad_zn('A',5,7);

}
zadanie3(){
    printf("\nZadanie nr 3\n");
    wiersze('j',2,3);

}
zadanie4(){
    printf("Zadanie nr 4\n");
    printf("%f \n", srednia_harmoniczna(2,3));

}
zadanie5(){
    printf("Zadanie nr 5\n");
    char *array;
    scanf("%s",array);
    for(int i =0; i < dlugoscCiagu(array);i++)
        wypisz_pozycje(array[i]);

}
zadanie6(){
    printf("Zadanie nr 6\n");
    printf("%f", potega(15,-3));

}
zadanie7(){
    printf("Zadanie nr 7\n");
    printf("%f", potega2(2,-3));

}
zadanie8(){
    printf("Zadanie nr 8\n");
    do_systemu(203,11);

}
double min(double x, double y){
    double tmp;
    tmp = x;
    if(y<x){
        tmp=y;
    }
    return tmp;
}
void rzad_zn(char ch, int i, int j){
    for(int x = 0;x < i;x++ ){
        printf(" X ");
    }
    for(int y = i; y <= j; y++)
    {
        printf("%c ",ch);
    }
}
void wiersze(char znak,int a, int b){
    for(int i=0;i < b;i++ ){
        for(int j=0; j < a; j++)
        {
            printf("%c ",znak);
        }
        printf("\n");
    }

}
double odwrotnosc(double a){
    return (1.0/a);
}
double srednia_harmoniczna(double a, double b){
    double avg = (odwrotnosc(a) + odwrotnosc(b))/2;
    return avg;

}
void wypisz_pozycje(char ch){
    if((ch>47)&&(ch<58))
        printf("-1\n");
    if(ch<95 && ch > 64)
	  	printf("%d \n", ch-64);
    if(ch<120 && ch > 96)
        printf("%d \n", ch-96);
}
int dlugoscCiagu(const char* napis){
    int length=0;
    length=strlen(napis);
    return length;
}
float potega(int a, int b){
    float wynik = 1;
    if(a == 0)
        wynik =0;
    if(b == 0)
        wynik = 1;
    if(b > 0)
    {
        for( int i = 0; i < b; i++ )
             wynik *= a;

    }
    if( b < 0)
    {

    b = fabs( b );
        for( int i = 0; i < b; i++ )
             wynik *= a;

        wynik = 1 / wynik;
    }
    return wynik;
}
float potega2(int a, int b){
    float tmp;
if (b==0) {return 1;}
else if(a == 0){return 0;}
else if(b == 0){return 1;}
else if(b < 0)
{
    return 1 / potega(a, -b);

}
else
   return a * potega(a, b-1);
}
void do_systemu(int liczba, int system){
    int i=0;
    int tab[31];
    int j;
    if(system < 2 || system > 10)
    {
        printf("Podaj poprawny system. \n");
    }
    else

    while(liczba)
    {
        tab[i++]=liczba%system;
        liczba/=system;
    }
    for(j=i - 1;j>=0;j--)
        printf("%d",tab[j]);
        return tab;
}

