#include "CBackjun1264.h"

CBackjun1264::CBackjun1264()
{
}

CBackjun1264::~CBackjun1264()
{
}

void CBackjun1264::Start()
{
	char chTyping[256] = {NULL};
	int iCount = 0;

	cin >> chTyping;


	for (int i = 0; i < (int)sizeof(chTyping); i++)
	{
		if (!strcmp(&chTyping[i], "a") || !strcmp(&chTyping[i], "e") || !strcmp(&chTyping[i], "o") ||
			!strcmp(&chTyping[i], "A") || !strcmp(&chTyping[i], "E") || !strcmp(&chTyping[i], "O") ||
			!strcmp(&chTyping[i], "u") || !strcmp(&chTyping[i], "i") || !strcmp(&chTyping[i], "I") ||
			!strcmp(&chTyping[i], "U"))
			iCount++;
	}
	cout << iCount << endl;
	
}
