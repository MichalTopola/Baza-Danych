// ConsoleApplication21.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<limits>
using namespace std;
int wczytajOsobe(string name[], string surnename[], int number[]) {
	int i = 0;

	bool error = 0;
	do {
		++i;
		cout << "Podaj imie " << i << " osoby"<<endl;
		getline(cin, name[i]);
		cout << "Podaj nazwisko " << i << " osoby: " << endl;
		getline(cin, surnename[i]);
		do {
			cout << "Podaj numer " << i << " osoby: " << endl;
			cin >> number[i];
			cin.fail();
			error = cin.fail();
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} while (error == true);
	} while (i < 3);
	return 0;
}
	


int wypiszOsobe(string name[], string surnename[], int number[]) {
	int i=0;
	do {
		++i;
		cout << "Imie " << i << " osoby to :" << name[i] << endl;
		cout << "Nazwisko " << i << " osoby to :" << surnename[i] << endl;
		cout << "Numer " << i << " osoby to: " << number[i] << endl;
		
	} while (i < 3);
	return 0;
}

int main()
{
	string name[4];
	string surnename[4];
	int howOld[4];
	
	wczytajOsobe(name, surnename, howOld);
	wypiszOsobe(name, surnename, howOld);


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
