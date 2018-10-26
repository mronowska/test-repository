// Kalkulator.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;



int main()
{
	char oblicz;
	printf("###############KALKULATOR###############\n");
	do
	{
		oblicz = ' ';
		
		float pierwsza, druga;
		int wybor;
		float wynik;
		char znak;
		bool blad;

		
		cout << "\nWpisz pierwsza liczbe: ";
		cin >> pierwsza;
		cout << "Bledne dane: " << cin.fail() << endl;
		cout << "Wpisz druga liczbe: ";
		cin >> druga;
		cout << "Bledne dane: " << cin.fail() << endl;
		cout << "Wybierz dzialanie: \n1. + \n2. - \n3. * \n4. /" << endl;
		cin >> wybor;
		cout << "Bledne dane: " << cin.fail() << endl;
		switch (wybor) {
		case 1:
			wynik = pierwsza + druga;
			break;
		case 2:
			wynik = pierwsza - druga;
			break;
		case 3:
			wynik = pierwsza * druga;
			break;
		case 4:
			if (druga != 0) {
				wynik = pierwsza / druga;
				break;
			}

		}

		switch (wybor) {
		case 1:
			znak = '+';
			break;
		case 2:
			znak = '-';
			break;
		case 3:
			znak = '*';
			break;
		case 4:
			znak = '/';
			break;
		}

		if (druga != 0 && cin.fail()!=1)
			cout << "Wynik: \n" << pierwsza << " " << znak << " " << druga << " = " << wynik << endl;
		else
			cout << "\nBLAD DANYCH!" << endl;

		cout << "\n\nChcesz wykonac kolejne obliczenia? \nJesli tak, wcisnij \"T\" lub \"N\". \nJesli nie, wcisnij dowolny klawisz." << endl;
		cin >> oblicz;


	} while (oblicz =='t' || oblicz == 'T');

	system("pause");

    return 0;
}

