#include "CBackjun1110.h"

CBackjun1110::CBackjun1110()
{
}

CBackjun1110::~CBackjun1110()
{
}

void CBackjun1110::Start()
{
	int iFirstNum = 0, iResult = 0, iCount = 0;
	cin >> iFirstNum;
	iResult = iFirstNum;
	while (true)
	{
		iResult = (iResult % 10) * 10 + (iResult / 10 + iResult % 10) % 10;
		iCount++;
		if (iResult == iFirstNum)
			break;
	}

	cout << iCount;
}
/*
	int iFirstNum = 0, iResult = 0, iCount = 0;
	cin >> iFirstNum;
	iResult = iFirstNum;
	while (true)
	{
		iResult = (iResult % 10) * 10 + (iResult / 10 + iResult % 10) % 10;
		iCount++;
		if (iResult == iFirstNum)
			break;
	}

	cout << iCount;
	return 0;
*/