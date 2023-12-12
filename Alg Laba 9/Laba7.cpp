
#include <iostream>
using namespace std;
#include "Laba7_manip.h"
#include "Laba7.h"

int Laba7_1()
{
    //Задаем размеры массива NxN
    cout << "Enter your N" << endl;
    int sizeX;
    cin >> sizeX;
    int sizeY = sizeX;

    //Создаем Массив через функцию
    float** Array = Create_Array(sizeX, sizeY);
    //Задаем значения массива рандомными от 0 до 99и
    Array = Set_random_Array(Array, sizeX, sizeY);
    //показываем массив
    Show_Array(Array, sizeX, sizeY);
    //Получаем значения диагоналей, паралельных (и равной) побочной
    get_diagonals(Array, sizeX, sizeY);

    delete[] Array;
    return 0;
}

int Laba7_2()
{
    //Задаем размеры массива NxM
    cout << "Enter your N" << endl;
    int sizeX;
    cin >> sizeX;
    cout << "Enter your M" << endl;
    int sizeY;
    cin >> sizeY;


    //Создаем Массив через функцию
    float** Array = Create_Array(sizeX, sizeY);
    //Задаем значения массива рандомными от 0 до 99и
    Array = Set_random_Array(Array, sizeX, sizeY);

    Shuffle_Array(Array, sizeX, sizeY);

    delete[] Array;

    return 0;
}