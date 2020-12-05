#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char surname[20];

    printf("Witam, podaj swoje imie: ");
    scanf("%s", name);
    printf("Witam, podaj swoje nazwisko: ");
    scanf("%s", surname);

    zadanie1(name, surname);
    zadanie2(name, surname);
    zadanie3();
    zadanie4();
    zadanie5(name, surname);
    return 0;
}
void zadanie1(char name[], char surname[]){
    printf("Zadanie nr 1 \n");
    printf("\"%s %s\"\n\n", surname, name);
}

void zadanie2(char name[], char surname[]){
    printf("Zadanie nr 2 \n");
    int sizeOfName = strlen(name);
    int sizeOfFreeSpace = sizeOfName + 3;
    printf("ad a) \"%s\"\n", name);
    printf("ad b) \"%20s\"\n", name);
    printf("ad c) \"%-20s\"\n", name);
    printf("ad d) \"%*s\"\n\n", sizeOfFreeSpace, name);
}
void zadanie3(){
    float number;
    printf("Zadanie nr 3 \n");
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &number);
    printf("ad a) Wpisano liczbe %3.1f lub liczbe %e\n",number, number);
    printf("ad a) Wpisano liczbe %+5.4f lub liczbe %E\n\n",number, number);
}
void zadanie4(){
    char name[20];
    float height;
    printf("Zadanie nr 4 \n");
    printf("Podaj swoje imie: ");
    scanf("%s", name);
    printf("Podaj wzrost: ");
    scanf("%f",&height);
    printf("%s, masz %.2f metra wzrostu\n\n", name, height/100);
}
void zadanie5(char name[], char surname[]){
    int sizeOfName = strlen(name);
    int sizeOfSurname = strlen(surname);
    printf("zadanie nr 5\n");
    printf("%s %s\n%*d%*d\n",name, surname, sizeOfName,sizeOfName, sizeOfSurname, sizeOfSurname);
    printf("%s %s\n%d%*d",name, surname, sizeOfName,sizeOfName, sizeOfSurname);
}
