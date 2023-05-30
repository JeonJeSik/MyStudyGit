#include "Backjun1100.h"

Backjun1100::Backjun1100()
{
}

Backjun1100::~Backjun1100()
{
}

void Backjun1100::Start()
{
	char chBoard = { NULL };
	int iCount = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chBoard;
			if ('F' == chBoard && ((0 == i % 2 && 0 == j % 2) || (1 == i % 2 && 1 == j % 2)))
				iCount++;				
		}
		cout << endl;
	}
	cout << iCount;
}
/*
	char chBoard = { NULL };
	int iCount = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chBoard;
			if ('F' == chBoard && ((0 == i % 2 && 0 == j % 2) || (1 == i % 2 && 1 == j % 2)))
				iCount++;
		}
		cout << endl;
	}
	cout << iCount;
*/