#include <iostream>
using namespace std;
#include "Labas.h"
#include "Laba7.h"
#include "Laba8.h"

void Laba7()
{
	int sub_laba_id = 0;
	bool sub_laba_query_rpt = true;
	while (sub_laba_query_rpt)
	{
		cout << "What Laba do you wish to proceed?" << endl << "1. Laba 7.1 Count Diagnals of NxN Array" << endl << "2. Laba 7.2 Shuffle Array from up to down" << endl << "3. Exit" << endl;

		cin >> sub_laba_id;
		switch (sub_laba_id)
		{
		case 1:
		{
			Laba7_1();
			break;
		}
		case 2:
		{
			Laba7_2();
			break;
		}
		case 3:
		{
			sub_laba_query_rpt = false;
			break;
		}
		default:
		{
			cout << "Invalid input" << endl;
			break;
		}
		}

	}
}

void Laba8()
{
	int sub_laba_id2 = 0;
	bool sub_laba_query_rpt2 = true;
	while (sub_laba_query_rpt2)
	{
		cout << "What Laba do you wish to proceed?" << endl << "1. Laba 8.1 Merge 2 strings" << endl << "2. Laba 8.2 Check if text without spaces would be symmetrical" << endl << "3. Exit" << endl;

		cin >> sub_laba_id2;
		switch (sub_laba_id2)
		{
		case 1:
		{
			Laba8_1();
			break;
		}
		case 2:
		{
			Laba8_2();
			break;
		}
		case 3:
		{
			sub_laba_query_rpt2 = false;
			break;
		}
		default:
		{
			cout << "Invalid input" << endl;
			break;
		}
		}

	}
}

