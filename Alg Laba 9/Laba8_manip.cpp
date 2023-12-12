
#include <iostream>
#include <string>
using namespace std;
#include "Laba8_manip.h"



string* DeleteSpaces(string* strin, int size)
{
    string* newstring = new string[size];
    int counter = 0;
    for (int i = 0; i < size;)
    {
        if (strin[i + counter] != " ")
        {
            newstring[i] = strin[i + counter];
            i++;
        }
        else
        {
            counter += 1;
        }
    }

    return newstring;
    delete[] strin;

}

int CountString(string* str, int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] != " ")
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}

void flushcin()
{
    cout << "Enter any symbol to flush cin"<<endl;
    string dob;
    while (getline(cin, dob))
        if (dob != "")
            break;
}
