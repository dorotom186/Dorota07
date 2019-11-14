#include"pch.h"
#include<iostream>
#include<ctime>
#include<cmath>
const int n = 10;
int main()
{
	using namespace std;
	int tab[n];
	int min, max, max_el, srednia, suma = 0;

	cout << "podaj zakres: ";
	cin >> min >> max;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % (max - min + 1) + min;
		cout << tab[i] << " ";
	
	}
	max_el = tab[0];
	for (int i = 1; i < n; i++)
	{
		if (tab[i] > max_el)
			max_el = tab[i];
	}
	srednia = tab[0];
	for (int i = 1; i < n; i++)
	{
		suma += tab[i];
		srednia = suma / n;
	}
	cout << "\nsrednia = " << srednia;
	
	float min_odl = abs(tab[0] - srednia);
	int naj_el = 0;
	for (int i = 1; i < n; i++)
	{
		if (abs(tab[i] - srednia) < min_odl)
		{
			min_odl = abs(tab[i] - srednia);
			naj_el = i;
		}

	}
	cout << "\nelement najblizszy sredniej = " << tab[naj_el];

	int x;
	cout << "\npodaj x: ";
	cin >> x;
	
	int i;
	for (i = 0; i < n; i++)
	{
		if (tab[i] == x)
		{
			break;
		}

	}
	if (i < n)
		cout << "element jest pod numerem: " << i << endl;
	else
		cout << "elementu nie ma";
	int pot2 = 1;
	for (i = 0, 1 < n, i++)
	{
		tab[i] = pot2;
		pot2 * = 2;
		cout << tab[i] << " ";
	}


	return 0;
}