#include "Backjun1085.h"

Backjun1085::Backjun1085()
{
}

Backjun1085::~Backjun1085()
{
}

void Backjun1085::Start()
{
	cin >> m_iX >> m_iY >> m_iW >> m_iH;

	int iCountX= 0 , iCountY = 0;

	if ((m_iW - m_iX) < m_iX)
		iCountX = (m_iW - m_iX);
	else
		iCountX = m_iX;

	if ((m_iH - m_iY) < m_iY)
		iCountY = (m_iH - m_iY);
	else
		iCountY = m_iY;

	if (iCountX <= iCountY)
		cout << iCountX;
	else
		cout << iCountY;

	return;
}

/*
#include<iostream>
using namespace std;

int main()
{
	int iX, iY, iW, iH;

	cin >> iX >> iY >> iW >> iH;

	int iCountX = 0, iCountY = 0;

	if ((iW - iX) < iX)
		iCountX = (iW - iX);
	else
		iCountX = iX;

	if ((iH - iY) < iY)
		iCountY = (iH - iY);
	else
		iCountY = iY;

	if (iCountX <= iCountY)
		cout << iCountX;
	else
		cout << iCountY;

	return 0;
}
*/