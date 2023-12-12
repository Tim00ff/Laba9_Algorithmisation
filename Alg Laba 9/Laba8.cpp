#include <iostream>
#include <string>
using namespace std;
#include "Laba8_manip.h"
#include "Laba8.h"






int Laba8_2()
{
    flushcin();
    bool is_symmetrical = true;
    string str;
    cout << "Enter your string" << endl;
    getline(cin, str);

    string* str2 = new string[str.size()];


    for (int i = 0; i < str.size(); i++)
    {
        str2[i] = str[i];
    }

    int sizeNew = CountString(str2, str.size());
    str2 = DeleteSpaces(str2, sizeNew);

    for (int i = 0; i < sizeNew - 1 - i; i++)
    {
        if (str2[i] == str2[sizeNew - 1 - i])
        {
            cout << "*";
        }
        else
        {
            cout << "-";
            is_symmetrical = false;
        }
    }


    if (is_symmetrical == true)
    {
        cout << endl << "Text is symmetrical";
    }
    else
    {
        cout << endl << "Text is NOT symmetrical";
    }
    return 0;
}
int Laba8_1()
{
    flushcin();
    int counter = 0;
    int counter2 = 0;
    string string1, string2;
    cout << "Enter your first string" << endl;
    getline(cin, string1);
    cout << "Enter your second string" << endl;
    getline(cin, string2);

    string* sum = new string[string1.size() + string2.size()];
    while (counter < string1.size())
    {
        sum[counter] = string1[counter];
        counter++;
    }
    while (counter < string1.size() + string2.size())
    {
        sum[counter] = string2[counter2];
        counter++;
        counter2++;
    }

    for (int i = 0; i < string1.size() + string2.size(); i++)
    {
        cout << sum[i];
    }
    cout << endl;
    delete[] sum;
    return 0;
}