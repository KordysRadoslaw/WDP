#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Witam, przedstawiam moja prace domowa\n");
    nameAndSurname();
    nameAndLocalization();
    ageCalculator();
    showJanPart_1();
    showJanPart_2();
    showJanPart_3();
    exponentiation();
    smile();
    return 0;
}
void nameAndSurname(){
    printf("Zadanie nr 1 ->\n");
    printf("Radoslaw Kordys\n");
    printf("Radoslaw\nKordys\n");
    printf("Radoslaw ");
    printf("Kordys\n\n");
}
void nameAndLocalization(){
    printf("Zadanie nr 2 ->\n");
    printf("Radoslaw Kordys\n10-900 Olsztyn\n\n");
}
void ageCalculator(){
    int age = 25;
    int year = 365;
    int calculate = age * year;
    printf("Zadanie nr 3 ->\n");
    printf("Moj wiek, czyli %d lat, w przeliczaniu na dni to: %d dni",age,calculate);
    printf("\n\n");
}
void showJanPart_1(){
    printf("Zadanie nr 4, uzyte sa dwa rozwiazania ->\n");
    printf("Panie Janie!\n");
    printf("Panie Janie!\n");
}
void showJanPart_2(){
    printf("Rano wstan!\n\n");
}
void showJanPart_3(){
    showJanPart_1();
    showJanPart_2();
}
void exponentiation(){
    printf("Zadanie nr 5 ->\n");
    int liczba = 10;
    int liczba2 = liczba * 2;
    int liczba3 = liczba2 * liczba;
    printf("%d\n%d\n%d\n",liczba,liczba2,liczba3);

}
void smile(){
    int smile = printf("Zadanie nr 6 ->\n");
    char smile1[20] = "Usmiech!";
    printf("%s%s%s\n%s%s\n%s\n",smile1,smile1,smile1,smile1,smile1,smile1);
}

