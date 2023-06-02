#include<iostream>
using namespace std;

int main()
{
	unsigned long long unllMoney = 1, unllPeople = 1;
	cin >> unllMoney >> unllPeople;

	cout << (unllMoney / unllPeople) << endl << (unllMoney % unllPeople);
}