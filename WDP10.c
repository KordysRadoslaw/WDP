#include <stdio.h>
#include <stdlib.h>
#define MIESIACE 12
#define LATA 5
#define SIZE 10
#define X 3
#define Y 6
/*
    printf("%12f\n", deszcz[0][0]);
    printf("%12f\n", *(*deszcz));
    printf("%12f\n", *(*deszcz) + 1 );
    printf("%12f\n", *(*(deszcz)+1) );
    podsuma += *(*deszcz);
    podsuma += *(*deszcz)+1;
    printf("%12f\n", podsuma);
    podsuma = 0;
    printf("bez wskanzikow\n");
    podsuma += deszcz[0][0];
    podsuma += deszcz[0][1];
    printf("%12f\n", podsuma);
*/
int main()
{
    //brak pytania sprawdzajacego i nr 10
    //zadanie1();
    //zadanie2();
    //zadanie3();
    //zadanie4();
    //zadanie5();
    //zadanie6();
    //zadanie7();
    //zadanie8();
    //zadanie9();
    zadanie10();

    return 0;
}
void zadanieSprawdzajace(){


}

void zadanie1(){
    const float deszcz[LATA][MIESIACE] = {
    {10.2, 8.1, 6.8, 4.2, 2.1, 1.8, 0.2, 0.3, 1.1, 2.3, 6.1, 7.4},
    {9.2, 9.8, 4.4, 3.3, 2.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 5.2},
    {6.6, 5.5, 3.8, 2.8, 1.6, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 4.2},
    {4.3, 4.3, 4.3, 3.0, 2.0, 1.0, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
    {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.2}
    };
    int rok, miesiac;
    float podsuma;
    float suma;
    float **wskaznik;
    wskaznik = deszcz;

    printf(" ROK        OPADY (w cm)\n");
    for(rok = 0, suma = 0; rok < LATA; rok++){

            for(miesiac = 0, podsuma = 0; miesiac < MIESIACE; miesiac++){

                    podsuma += *(*(deszcz + rok) + miesiac);

            }
            printf("%5d %12.1f\n", 1995+rok, podsuma);
            suma += podsuma;
            }
            printf("\nRoczna srednia wynosi %.1f cm.\n\n", suma/LATA);
            printf("SREDNIE MIESIECZNE:\n\n");
            printf(" Sty  Lut  Mar  Kwi  Maj  Cze  Lip  Sie  Wrz  Paz ");
            printf(" Lis  Gru\n");

            for(miesiac = 0; miesiac < MIESIACE; miesiac++){
                    for (rok = 0, podsuma = 0; rok < LATA; rok++){
                        //podsuma += deszcz[rok][miesiac];
                        podsuma += *(*(deszcz + rok) + miesiac);

                    }
                    printf("%4.1f ", podsuma/LATA);
            }
            printf("\n");

}

void zadanie2(){
    printf("Zadanie nr 2\n");
    int table[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int firstTable[SIZE];
    int secondTable[SIZE];
    firstFunctionForExample2(table, firstTable, SIZE);
    printf("pierwsza funkcja %d\n", firstTable[3]);
    secondFunctionForExample2(table, secondTable, SIZE);
    printf("druga funkcja %d\n", secondTable[3]);

}
void zadanie3(){
    printf("Zadanie nr 3\n");
    int table[5] = {1, 4, 5, 9, 2};
     int x = functionForExample3(table, 5);
     printf("Najwieksza wartosc tablicy to %d\n ", x);


}
void zadanie4(){
    printf("Zadanie nr 4\n");
    int table[5] = {1, 4, 5, 9, 2};
     int x = functionForExample4(table, 5);
     printf("Indeks najwiekszej wartosci tablicy to %d\n ", x);


}
void zadanie5(){
    printf("Zadanie nr 5\n");
    int table[5] = {4, 4, 5, 9, 2};
     int x = functionForExample5(table, 5);
     printf("Roznica miedzy najwiekszym i najmniejszym elementem tablicy to %d\n ", x);



}
void zadanie6(){
    printf("Zadanie nr 6\n");

    int tableOfTables[X][Y] = {
    {11,12,13,14,15,16},
    {21,22,23,24,25,26},
    {31,32,33,34,35,36}
    };
    int newTableOfTables[X][Y];

   functionForExample6(newTableOfTables, tableOfTables, X);
   for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            printf("tablica nr %d, element %d wartosc: %d\n", i+1, j+1, newTableOfTables[i][j]);
        }
   }
   printf("\n");

}
void zadanie7(){
    printf("Zadanie nr 7\n");
    int table[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int newTable[3];
    FunctionForExample7(table, newTable);
    for(int i = 0; i < 3; i++){
        printf("%d element nowej tablicy ma wartosc %d\n", i+1, newTable[i]);
    }
    printf("\n");

}
void zadanie8(){
    printf("Zadanie nr 8\n");
    int tab1[] = {9, 5, 7, 2};
    int tab2[] = {1, 7, 2, 6};
    int tab3[4];
    functionForExample8(tab1, tab2, tab3, 4);
    for(int i = 0; i < 4; i++){
        printf("Nowa tablica - %d element ma wartosc %d\n", i+1, tab3[i] );
    }

}
void zadanie9(){
    printf("zadanie nr 9\n");
    int table[3][5];
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 5; y++){
            printf("tablica nr %d, element nr %d - prowadz liczbe calkowitoliczbowa\n", x+1, y+1);
            scanf("%d", &table[x][y]);
        }
    }
    printf("O to Twoja tablica\n");
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 5; y++){
            printf("%5d", table[x][y]);
        }

        printf("\n");
    }
    printf("A to Twoja tablica po podwojeniu\n");
    functionForExample9(table, 3);
    printf("\n");
}

void firstFunctionForExample2(int tab1[], int tabTarget[], int sizeTargetTable){
    for(int i = 0; i < sizeTargetTable; i++){
        int x = tab1[i];
        printf("%d\n", x);
        tabTarget[i] = x;
    }

}
void secondFunctionForExample2(int *tab1, int tabTarget[], int sizeTargerTable){
    for(int i = 0; i < sizeTargerTable; i++){
        tabTarget[i] = *tab1+i;
    }

}
int functionForExample3(int tab[], int size){
    int i = 0;
    int x = tab[i];

    for(int i = 0; i < size; i++){
        if(x <= tab[i]){
            x = tab[i];
        }else{
            continue;
        }

    }
    return x;
}
int functionForExample4(int tab[], int size){
    int i = 0;
    int y = 0;
    int x = tab[i];

    for(int i = 0; i < size; i++){
        if(x < tab[i]){
            x = tab[i];
            y = i;
        }else{
            continue;
        }

    }
    return y;

}
int functionForExample5(int tab[], int size){
    int i = 0;
    int y = tab[i];
    int x = tab[i];

    for(i = 0; i < size; i++){
        if(x < tab[i]){
            x = tab[i];
        }else{
            continue;
        }
    }
    for(i = 0; i < size; i++){
        if(tab[i] < y){
            y = tab[i];
        }
    }
    int avg = x - y;
    return avg;

}

//funkcja dwuwymiarowa
void functionForExample6(int to[][Y], int from[][Y], int numberOfTable){
    printf("przepisywanie wartosci\n");
    for(int x = 0; x < numberOfTable; x++){
        for(int y = 0; y < Y; y++){
            to[x][y]= from[x][y];
        }

    }
}

    void functionForExample66(int to[], int from[][Y], int numberOfTable){
    printf("czytanie wartosci\n");
    for(int i = 0; i< numberOfTable; i++){
        for(int j = 0; j < Y; j++){
            printf("tablica nr %d, element %d wartosc%d\n", i, j, from[i][j]);

        }

    }
        printf("skonczylem przepisywanie\n");
}
void FunctionForExample7(int *tab1, int tabTarget[]){
    for(int i = 2; i < 5; i++){
        tabTarget[i-2] = *tab1+i;
    }

}

void functionForExample8(int *tab1, int *tab2, int tabTarget[], int size){
    for(int i = 0; i < size; i++, tab1++, tab2++){
        printf("wartosc wskaznika 1 = %d\n", *tab1 );
        printf("wartosc wskaznika 2 = %d\n", *tab2 );
        tabTarget[i] = *tab1 + *tab2;
    }
}
void functionForExample9(int tab1[][5], int size){
    for(int x = 0; x < size; x++){
        for(int y = 0; y < 5; y++){
            printf("%5d", tab1[x][y] *2 );
        }
        printf("\n");
    }

}










