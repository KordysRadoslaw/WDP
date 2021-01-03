#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PODATEK15 0.15
#define PODATEK20 0.20
#define PODATEK25 0.25
#define EXTRA 1.50
int pobierz_wybor(void);
int pobierz_pierwszy(void);
void liczenie(void);
double functionForExample(int);


int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();
    zadanie6();
    zadanie7();
    return 0;
}
void zadanie1(){
    printf("Zadanie nr 1\n");
    printf("Wprowadz dane\n");
    int ch;
    int counter = 0;
    while((ch = getchar()) != EOF){
        putchar(ch);
        counter++;

    }
    printf("Ilosc znakow %d\n", counter);
}
void zadanie2(){
    printf("Zadanie nr 2\n");
    printf("Wpowadz dane\n");
    int ch;
    int i = 0;
    while((ch = getchar()) != EOF){
            i++;
            if(i == 10){
                printf("%c %d | ", ch, ch);
                i = 0;
                printf("\n");
            }else if(ch == '\n'){
                printf("\\n - %d |", ch);
                printf("\n");

            }else if(ch == '\t'){
                printf("\\t - %d |", ch);

            }else{
                printf("%c %d | ", ch, ch);

            }
            printf("\n");
    }

}
void zadanie3(){
    int ch;
    int littleWord = 0;
    int hugeWord = 0;
    int anotherWord = 0;

    printf("Zadanie nr 3\n");
    printf("Wpowadz dane\n");

    while((ch = getchar()) != EOF){
        putchar(ch);

        if(ch >= 97 && ch <= 122){
            littleWord++;

        }else if(ch >= 65 && ch <= 90){
            hugeWord++;
        }else{
            anotherWord++;
        }
    }
    printf("Male litery: %d\nDuze litery: %d\nInne znaki: %d\n", littleWord, hugeWord, anotherWord);

}
void zadanie4(){
    int ch;
    int lengthWord = 0;
    int numberOfWord = 0;
    int allWords = 0;

    printf("Zadanie nr 4\n");
    while((ch = getchar()) != EOF){
        int result = ispunct(ch);
        putchar(ch);
        if(isspace(ch)){
            allWords += lengthWord;
            numberOfWord++;
            lengthWord = 0;

        }else if(result != 0){
            allWords += lengthWord;
            numberOfWord++;
            lengthWord = 0;

        }else if(ch == '\n'){
            allWords += lengthWord;
            numberOfWord++;
            lengthWord = 0;

        }else{
            lengthWord++;

        }
    }
    double average = allWords / numberOfWord;
    printf("Ilosc wyrazow: %d, ilosc zapisanych liter %d, srednia dlugosc slowa %.1f\n", numberOfWord, allWords, average);



}
void zadanie5(){
    int number = 50;
    int tryTry;
    int tryTry2;
    printf("Zadanie nr 5\n");
    printf("Wybierz liczbe od 1 do 100, sproboje ja zgadnac\n");
    printf("Wpisz 'n', jesli nie zgadlem, lub 't', jest mi sie udalo\n");
    printf("Czy jest to liczba %d?\n", number);
    while(tryTry = getchar() != 't'){

                printf("Czy jest ona mniejsza czy wieksza? Wprowadz 'w' (wieksza), lub 'm'(mniejsza)\n");
                tryTry2 = getchar();
                if(tryTry2 != 'm'){
                        number = number + (number * 0.50);

                }else if(tryTry2 != 'w'){
                        number = number - (number * 0.50);
                }
                printf("Czy jest to liczba %d?\n", number);
                tryTry = getchar();
                if(tryTry == 't'){
                    break;
                }else{
                    continue;
                }
            }

    printf("Wiedzialem, ze mi sie uda, czyli jest to liczba %d\n", number);

}
void zadanie6(){
    printf("Zadanie nr 6\n");
    int wybor;
    int pobierz_pierwszy(void);
    void liczenie(void);

    while( (wybor = pobierz_wybor()) != 'q'){
        switch(wybor){
          case 'a': printf("kup po niskiej, sprzedaj drozej\n");
          break;
          case 'b': putchar('\a');
          break;
          case 'c': liczenie();
          break;
          default: printf("Blad programu'n");

          }

    }

}
void zadanie7(){
    printf("Zadanie nr 7\n");
    int choose;
    double salary = 0;
    printf("Zadanie nr 8\n");
    printf("**********************************************\n");
    printf("Wybierz swoja stawke godzinowa\na) %-5d b) %-5d c) %-5d d) %-5d q) %s\n\n", 35, 37, 40, 45, "Wyjscie");
    printf("**********************************************\n");

    while(choose != 'q'){
        choose = getchar();
        switch(choose){
        case 'a':
            salary = functionForExample(35);
            choose++;
            break;
        case 'b':
            salary = functionForExample(37);
            choose++;
            break;
        case 'c':
            salary = functionForExample(40);
            choose++;
            break;
        case 'd':
            salary = functionForExample(45);
            choose++;
            break;
        case 'q':
            printf("Wyszedles z programu\n");
            break;
        default:
            printf("Wybrales opcje z poza menu, wybierz raz jeszcze\n");
            continue;
        }
        break;
    }
    printf("\n");

}
void liczenie(void){

    int n,i;
    printf("Jak daleko liczyc? podaj liczbe calkowita\n");
    if(scanf("%d", &n) != 1){
            printf("Nastepnym razem uzyj cyfry, tym razem uzyje liczby 5\n");
            n = 5;

    }
    for(i = 1; i<= n; i++){
            printf("%d\n", i);
    }
       while(getchar() != '\n'){
        continue;
    }
}

int pobierz_wybor(void){
    int ch;
    printf("Wpisz wybrana litere: \n");
    printf("a. porada       b. alarm\nc. liczenie       q. koniec\n");
    ch = pobierz_pierwszy();
    while( (ch < 'a' || ch > 'c') && ch != 'q' ){
        printf("Wpisz a,b,c lub q\n");
        ch = pobierz_pierwszy();
    }
}
int pobierz_pierwszy(void){

    int ch;
    ch = getchar();
    while(getchar() != '\n'){
        continue;
    }
    if(isgraph(ch)){
            printf("znak drukowany: %c\n", ch);

    }
    return ch;

}
double functionForExample(int value){
    int numberOfHours;
    int extraHours;
    double valueOfExtraHours;
    double salary = 0;
    printf("Podaj ilosc przepracowanych godzin\n");
    scanf("%d", &numberOfHours);
    if(numberOfHours > 0 && numberOfHours > 40){
        extraHours = numberOfHours - 40;
        valueOfExtraHours = (extraHours * value) * EXTRA;
        //
        salary += 40 * value;
        salary += valueOfExtraHours;
        printf("Pzepracowales %d godzin, z czego %d sa nadgodzinami\nCalosc brutto wynosi: %.2f\n", numberOfHours, extraHours, salary);

    }else{
        //ok
        salary += numberOfHours * value;
        printf("Pzepracowales %d godzin, Twoja wyplata brutto: %.2f\n", numberOfHours, salary);

    }
    if(salary > 0 && salary <= 1200){
        salary = salary - (salary * PODATEK15);

    }else if(salary <= 1800){
        double salary1 = 1200 - (1200 * PODATEK15);
        double salary2 = (salary - 1200) - ((salary - 1200) * PODATEK20);
        salary = salary1 + salary2;
    }else{
        double salary1 = 1200 - (1200 * PODATEK15);
        double salary2 = 600 - (600 * PODATEK20);
        double salary3 = (salary - 1800) - ((salary - 1800) * PODATEK25);
        salary = salary1 + salary2 + salary3;
    }
    printf("Wysokosc wyplaty po odjeciu podatkow wynosi %.2f\n", salary);
    return salary;
}

