#include <stdio.h>
#include <stdlib.h>

// deklaracja fukcji
double functionForExample8(double, double);

int main()
{
    zadanie1();
    zadanie2();
    zadanie3();

    // brak pomys³u na rozwi¹zanie
    //zadanie4();
    zadanie5();
    zadanie6();
    zadanie7();
    zadanie8();
    zadanie9();
    zadanie10();
    zadanie11();
    zadanie12();
    zadanie13();
    zadanie14();
    return 0;
}
void zadanie1(){
    char c;
    int i = 0;
    char table[26];
    printf("26 elementow (malych liter) w tablicy\n");
        for(c = 'a'; c <= 'z', i <= 26; i++, c++){
            table[i] = c;
            printf("%c ",table[i]);
            printf("\n");
        }
}
void zadanie2(){
    char sign='$';
    int tree;
    int i;
    int j;
    int counter;
    printf("Zadanie nr 2\n");
    printf("jak duze chcesz miec drzewo? ");
    scanf("%i",&tree);

    for(i = 1; i <= tree; i++){
        for(j = 0; j < i ; j++){
                printf("%c",sign);

        }
        printf("\n");
    }

}

void zadanie3(){
    char sign='F';
    int tree;
    int i;
    int j;
    int counter;
    printf("Zadanie nr 3\n");
    printf("jak duze chcesz miec drzewo? ");
    scanf("%i",&tree);

    for(i = 1; i <= tree; i++){
        for(j = 0; j < i ; j++){
                printf("%c",sign + j);

        }
        printf("\n");
    }
}
void zadanie4(){
    char a;
    char b;

    printf("Zadanie nr 4\n");
    printf("podaj znak");
    scanf("%c", &a);
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < i; j++){

        }
        //for(){

        //}
        //for(){

        //}
        printf("\n");;
    }

}
void zadanie5(){
    int startTable;
    int endTable;
    printf("Zadanie nr 5\n");
    printf("Podaj pierwszy element tabeli\n");
    scanf("%d",&startTable);
    printf("Podaj ostatni element tabeli\n");
    scanf("%d",&endTable);
    int sizeOfTable = endTable - startTable + 1;
    int tableOfNumbers[sizeOfTable];
    //wczytanie
    for(int z = 0; z < sizeOfTable; z++){
            tableOfNumbers[z] = startTable;
            startTable++;
            printf("%d element tablicy to %d\n",z+1, tableOfNumbers[z]);

    }
    printf("\n");
    //odczytywanie
    int square;
    int cube;
    for(int y = 0; y < sizeOfTable; y++){
            square = tableOfNumbers[y]*tableOfNumbers[y];
            cube = tableOfNumbers[y]*tableOfNumbers[y]* tableOfNumbers[y];
            printf("%d element tablicy to %d, kwadrat = %d, a szescian = %d \n", y+1,tableOfNumbers[y], square, cube);
    }
}
void zadanie6(){

    printf("Zadanie nr 6\n");
    printf("Podaj slowo: \n");
    char tableOfWord[50];
    scanf("%s",&tableOfWord);
    int lengthOfTable = strlen(tableOfWord);
    for(lengthOfTable-=1; lengthOfTable >=0; lengthOfTable--){
        printf("%c\n",tableOfWord[lengthOfTable]);

    }

}
void zadanie7(){
    printf("Zadanie nr 7\n");
    double num;
    double a;
    double b;
    double sumAB;
    double stan = 1;
    printf("Podaj dwie liczby zmiennoprzecinkowe, lub wprowadz litere, aby zakonczyc program\n");

    while(stan == 1){
        printf("podaj pierwsza cyfre: \n");
        stan = scanf("%lf", &num);
        a = num;
        printf("podaj druga cyfre: \n");
        stan = scanf("%lf", &num);
        b = num;

        sumAB = (a - b)/ 2;
        printf("a : %lf\n", a);
        printf("b : %lf\n", b);
        printf("ich roznica sumy podzielona przez iloczyn to: %lf\n", sumAB);

    }
    printf("wyszedles z tego zadania \n");

}
void zadanie8(){
    printf("Zadanie nr 8\n");

    double num;
    double a;
    double b;
    double sumAB;
    double stan = 1;
    printf("Podaj dwie liczby zmiennoprzecinkowe, lub wprowadz litere, aby zakonczyc program\n");

    while(stan == 1){
        printf("podaj pierwsza cyfre: \n");
        stan = scanf("%lf", &num);
        a = num;

        printf("podaj druga cyfre: \n");
        stan = scanf("%lf", &num);
        b = num;

        printf("a : %.2f\n", a);
        printf("b : %.2f\n", b);

        double result = functionForExample8(a ,b);
        printf("ich roznica sumy podzielona przez iloczyn to: %.2f\n", result);

    }
    printf("\n");

}
void zadanie9(){
    printf("Zadanie nr 9\n");
    int numbers[8];
    printf("Podaj 8 liczb: \n");
    for(int i = 0; i < 8; i++){
        scanf("%d", &numbers[i]);
    }
    printf("\n");
    printf("podane liczby w odwrotnej kolejnosci\n");
    for(int j = 7; j > 0; j--){
        printf("%d ", numbers[j]);
    }
}
void zadanie10(){
    int length;
    double a = 1.0;
    double b = 1.0;
    double sumA = 0;
    double sumB = 0;

    printf("Zadanie nr 10\n");
    printf("Podaj dlugosc ciagu: \n");
    scanf("%d", &length);
    for(int i = 0; i <= length; i++){
        sumA += a;
        printf("%.1f + %.1f / ", sumA, a);
    }
    printf("\n");
    for(int j = 0; j <= length; j++){
        sumB += b;
        printf("%.1f + %.1f / %.1f - %.1f / ", sumB, b, sumB, b);
    }
    printf("\n");

}
void zadanie11(){
    printf("Zadanie nr 11\n");
    int table[8];
    int counter = 7;
    int number = 1;
    int sum = 1;
    for(int i = 0; i < 8; i++){
        sum = sum * 2;
        table[i] = sum;
    }
    while(counter > 0){
        printf("%d\n", table[counter]);
        counter--;
    }
}
void zadanie12(){
    char oldTableOfChar[5000];
    printf("Zadanie nr 12\n");
    printf("wprowadz wiersz danych:\n");
    scanf("%s", &oldTableOfChar);
    int size = strlen(oldTableOfChar);
    char newTable[size];
    printf("ponizej wprowadzone dane:\n");
    for(int i = 0; i < size; i++){
        newTable[i] = oldTableOfChar[i];
        printf("%c", newTable[i]);
    }
    printf("\nwspak:\n");
    for(size -= 1; size >= 0; size--){
        printf("%c", newTable[size]);
    }
}
void zadanie13(){
    printf("Zadanie nr 13\n");
    int i;
    int wklad = 100;
    double oprocentEwa = 0.10;
    double oprocentKasia = 0.05;
    double sumaEwa = 100.0;
    double sumaKasia = 100.0;
    for( i = 1; sumaEwa >= sumaKasia; i++){
        sumaEwa = wklad + (i *(wklad * oprocentEwa));
        printf("W %d roku suma Ewy to %.2f ewa\n",i, sumaEwa);
        sumaKasia =  sumaKasia + (sumaKasia * oprocentKasia);
        printf("A Kasi to: %.2f kasia\n\n", sumaKasia);
    }
    printf("Po %d latach Kasia zarobi wiecej \n", i-1);
}
void zadanie14(){
    printf("Zadanie 14\n");
    int z = 1;
    int a = 100000;
    double jim = 1000000;
    double oprocent = 0.08;
    do{
        jim = jim + (jim * oprocent);
        jim = jim - a;
        printf("Po %d latach Jimowi zostanie: %.2f\n", z, jim);
        z++;
    }while(jim >= 0);
    printf("Po %d latach Jim zostanie bankrutem z debetem %.2f", z - 1, jim);
}
// wyrzuca blad
// przy double wyrzuca blad
double functionForExample8(double a, double b){
    double c = (a + b)/2;
return c;
}

