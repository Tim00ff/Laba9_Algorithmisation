#include <iostream>
#include <string>
#include "Labas.h"
using namespace std;

int main()
{
	int laba_id = 0;
	bool laba_query_rpt = true;
	while (laba_query_rpt)
	{
		cout << "What Laba do you wish to proceed?" << endl << "1. Laba 7" << endl << "2. Laba 8" << endl << "3. Exit" << endl;

		cin >> laba_id;
		switch (laba_id)
		{
		case 1:
		{
			Laba7();
			break;
		}
		case 2:
		{
			Laba8();
			break;
		}
		case 3:
		{
			laba_query_rpt = false;
			break;
		}
		default:
		{
			cout << "Invalid input" << endl;
			break;
		}
	}

	}
	return 0;
}