﻿/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//для рандома
#include<cstdlib>
//для cout setw(3)
#include<iomanip>
using namespace std;
#include "Laba7_manip.h"



int Show_Array(float** Array, int sizeX, int sizeY)
{
    for (int i = 0; i < sizeY; ++i)
    {
        for (int j = 0; j < sizeX; ++j)
        {
            cout << setw(3) << Array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
float** Create_Array(int sizeX, int sizeY)
{

    //Создаем 2д массив или массив из массива. 
    float** Array = new float* [sizeY];
    for (int i = 0; i < sizeY; ++i)
    {
        Array[i] = new float[sizeX];
    }
    return Array;
}

float** Set_random_Array(float** Array, int sizeX, int sizeY)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < sizeY; ++i)
    {
        for (int k = 0; k < sizeX; ++k)
        {
            Array[i][k] = rand() % 100;
        }
    }
    return Array;
}

int get_diagonals(float** Array, int sizeX, int sizeY)
{
    bool last = false;
    float min_sum = 10000;
    float temp_sum = 0;
    float temp_sum2 = 0;
    //Задаем временные координаты в матрице j(TempX) и TempY
    int tempY = 0;

    cout << "Sum of your diagnals:" << endl;

    for (int i = 0; i < sizeX; ++i)
    {
        for (int j = i; j > -1; --j)
        {

            temp_sum += Array[tempY][j];
            temp_sum2 += Array[sizeY - tempY - 1][sizeX - j - 1];
            tempY++;
            if (i == sizeX - 1)
            {
                last = true;
            }

        }

        tempY = 0;
        if (min_sum > min(temp_sum, temp_sum2)) { min_sum = min(temp_sum, temp_sum2); }
        cout << temp_sum << " ";
        temp_sum = 0;
        if (last == false)
        {
            cout << temp_sum2 << " ";
        }
        temp_sum2 = 0;
    }
    cout << endl << "smallest sum is " << min_sum << endl;
    return 0;
}

int Shuffle_Array(float** Array, int sizeX, int sizeY)
{
    //Массив до
    cout << endl << "Before" << endl;
    Show_Array(Array, sizeX, sizeY);


    int temp = 0;
    int temp2 = 0;

    for (int i = 0; i < sizeX; ++i)
    {
        temp = Array[0][i];
        Array[0][i] = Array[sizeY - 1][i];
        for (int j = 1; j < sizeY; ++j)
        {
            temp2 = Array[j][i];
            Array[j][i] = temp;
            temp = temp2;
        }
    }

    //Массив после
    cout << endl << endl << "After" << endl;
    Show_Array(Array, sizeX, sizeY);

    return 0;
}