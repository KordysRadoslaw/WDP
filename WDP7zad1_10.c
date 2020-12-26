#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PODATEK15 0.15
#define PODATEK20 0.20
#define PODATEK25 0.25
#define EXTRA 1.50

double functionForExample(int);
double functionForExample10(int);
int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();
    zadanie6();
    zadanie7();
    zadanie8();
    zadanie9();
    zadanie10();


    return 0;
}


zadanie1(){

    char data;
    char space = ' ';
    char nextLine = '\n';
    int spaces = 0;
    int word = 0;
    int nextLines = 0;
    int anotherSigns = 0;

    printf("Zadanie nr 1\n");
    printf("Wprowadz dane, aby zakonczyc wprowadz '#'\n");
    data = getchar();
    while(data != '#'){

        if(data == space){
            spaces++;
        }else if(data == nextLine){
            nextLines++;
        }else if(isalpha(data)){
            word++;
        }else{
            anotherSigns++;
        }
    data = getchar();
    }
    printf("Suma znakow spacji: %d\nznakow przejscia do nowej linii: %d\nliter: %d\ninnych: %d\n", spaces, nextLines, word, anotherSigns);

}
zadanie2(){

char data;
    int counter = 1;
    char space = ' ';
    char nextLine = '\n';
    int spaces = 0;
    int word = 0;
    int nextLines = 0;
    int anotherSigns = 0;

    printf("Zadanie nr 2\n");
    printf("Wprowadz dane, aby zakonczyc wprowadz '#'\n");
    data = getchar();
    while(data != '#'){

        if(data == space){
            spaces++;
        }else if(data == nextLine){
            nextLines++;
        }else if(isalpha(data)){
            word++;
        }else{
            anotherSigns++;
        }

    data = getchar();

    if(counter / 8 == 1){
        printf("%c = %d", data, data);
        printf("\n");
        counter = 0;
    }else{
        printf("%c = %d||", data, data);
    }
    counter++;
    }


}
zadanie3(){
    int data;
    int even = 0;
    int sumEven = 0;
    double odd = 0;
    double sumOdd = 0;
    printf("Zadanie nr3\n");
    printf("Wprowadz jedna cyfre, lub 0, aby zakonczyc\n");
    scanf("%d", &data);

    while(data != 0){
        if(data % 2 == 0){
            sumEven += data;
            even++;

        }else if(data % 2 != 0){
            sumOdd += data;
            odd++;
        }else{
            putchar(data);
        }
        scanf("%d", &data);
    }
    printf("liczby parzyste\nIlosc: %d, suma: %d, srednia wartosc: %d\n", even, sumEven, sumEven / even);
    printf("liczby nieparzyste\nIlosc: %.0f, suma: %.1f, srednia wartosc: %.1f\n", odd, sumOdd, sumOdd / odd);


}
zadanie4(){
    printf("Zadanie nr 4\n");
    printf("Podaj dane, aby zakonczyc wprowadzanie zakoncz znakiem #\n");
    char data;
    int counter = 0;
    data = getchar;
    while(data != '#'){
        if(data == '.'){
                data = putchar('!');
                counter++;
        }else if(data == '!'){
            data = putchar('!');
            data = putchar('!');
                counter++;

        }else{
            putchar(data);
        }
        data = getchar();
    }
    printf("Ilosc dokonanych zmian: %d\n", counter);

}
zadanie5(){
    printf("Zadanie nr 5\n");
    int number;
    int even = 0;
    int sumOfEven = 0;
    double odd = 0;
    double sumOfOdd = 0;
    int modulo;

    printf("Wprowadz jedna cyfre, lub 0, aby zakonczyc\n");

    while(number != 0){
        scanf("%d", &number);
        if(number == 0){
            break;
        }else{
            modulo = number % 2;
        switch(modulo){
    case 0:
        sumOfEven += number;
        even++;
        break;
    case 1:
        sumOfOdd += number;
        odd++;
        break;

            }
        }
    }
    printf("Parzystych: %d a ich srednia wartosc: %d\nNieprzystych: %.0f srednia wartosc: %.0f\nSrednia wartosc calosci: %.0f\n", even, sumOfEven / even, odd, sumOfOdd / odd,(sumOfEven + sumOfOdd) / (even + odd));
}
zadanie6(){
    printf("Zadanie 6\n");
    printf("Wprowadz dane i zakoncz znakiem #\n");
    char dataA, dataB;
    int counter = 0;
    dataA = getchar();
    while(dataA != '#'){
        dataB = dataA;
        if(dataA == 'a'){
                dataB = getchar();
            if(dataB == 'n'){
                counter++;
            }else{
                counter = counter;
            }
        }else{
            counter = counter;

        }
        dataA = getchar();
    }
    printf("Ilosc par: %d!\n", counter);


}
zadanie7(){
    int extraHours;
    int hours;
    double valueOfExtraHours;
    int valuePerHour = 40;
    double salary = 0;
    printf("Zadanie nr 7\n");
    printf("Podaj ilosc przepracowany godzin w tygodniu\n");
    scanf("%d", &hours);
    if(hours > 0 && hours > 40){
        extraHours = hours - 40;
        valueOfExtraHours = (extraHours * valuePerHour) * EXTRA;
        salary += 40 * valuePerHour;
        salary += valueOfExtraHours;
        printf("Pzepracowales %d godzin, z czego %d sa nadgodzinami\nCalosc brutto wynosi: %.2f\n", hours, extraHours, salary);

    }else{
        salary += hours * valuePerHour;
        printf("Pzepracowales %d godzin, Twoja wyplata brutto: %.2f\n", hours, salary);

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


}
zadanie8(){
    int choose;
    double salary = 0;
    printf("Zadanie nr 8\n");
    printf("**********************************************\n");
    printf("Wybierz swoja stawke godzinowa\n1) %-5d 2) %-5d 3) %-5d 4) %-5d 5) %s\n\n", 35, 37, 40, 45, "Wyjscie");
    printf("**********************************************\n");

    while(choose != 5){
        scanf("%d",&choose);
        switch(choose){
        case 1:
            salary = functionForExample(35);
            choose++;
            break;
        case 2:
            salary = functionForExample(37);
            choose++;
            break;
        case 3:
            salary = functionForExample(40);
            choose++;
            break;
        case 4:
            salary = functionForExample(45);
            choose++;
            break;
        case 5:
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
zadanie9(){
    int counter = 1;
    int number;
    printf("Zadanie nr 9\n");
    printf("Podaj liczbe calkowita\n");
    scanf("%d", &number);
    if(number < 2){
        printf("Nie jest to liczba pierwsza\n");
    }else{
        for(int i = 2; i*i <= number ;i++){
            if(number % i==0){
            printf("nie jest to liczba pierwsza\n");
        }else{
            printf("liczba %d jest liczba pierwsza\n", number);
            }
        }
    }
}
zadanie10(){
    int choose;

    printf("Zadanie nr 10\n");
    while(choose != 2){
            printf("Wybierz 1 aby obliczyc podatek, lub 2 aby zakonczyc program\n");
            scanf("%d", &choose);
            switch(choose){
        case 1:
            printf("Poprawny wybor\n");
            break;
        case 2:
            printf("Wyszedles z programu\n");
            break;
        default:
            printf("zla wartosc, wybierz ponownie\n");
            continue;

            }

            if(choose == 1){
                int choose2;
                printf("Wybierz swoja kategorie\n");
                printf("1) Wolny\n2) Glowa rodziny\n3) Malzenstwo, rozliczanie wspolne\n4) Malzenstwo, rozliczanie osobne\n");
                scanf("%d", &choose2);
                switch(choose2){
                case 1:
                    functionForExample10(choose2);

                    break;
                case 2:
                    functionForExample10(choose2);
                    break;
                case 3:
                    functionForExample10(choose2);
                    break;
                case 4:
                    functionForExample10(choose2);
                    break;
                default:
                    printf("Wybor spoza zakresu, wybiez ponownie\n");
                    continue;
                }
            }else{
                break;
            }


    }

}
double functionForExample10(int i){
    double podatek1 = 0.15;
    double podatek2 = 0.28;
    int money;
    double result;
    printf("Podaj dochod\n");
    scanf("%d", &money);
    if(i == 1 ){
            result = podatek1 * 17850 + podatek2 * (money - 17850);

    }else if(i == 2){
        result = podatek1 * 23900 + podatek2 * (money - 23900);


    }else if(i == 3){
        result = podatek1 * 29750 + podatek2 * (money - 29750);


    }else{
        result = podatek1 * 14875 + podatek2 * (money - 14875);

    }
    printf("Wysokosc podatku %.2f\n", result);
    return result;

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
