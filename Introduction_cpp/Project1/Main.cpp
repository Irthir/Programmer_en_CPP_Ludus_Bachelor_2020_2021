#include "CPoint.h"
#include <iostream>

using namespace std;

int main()
{
	//Création
	CPoint pPoint(0,0,"Patate");
	int nX = 0, nY = 0;


	cout << "Veuillez entrer la coordonnee en X du point." << endl;
	
	cin >> nX;
	pPoint.setnX(nX);

	cout << "Veuillez entrer la coordonnee en Y du point." << endl;

	cin >> nY;
	pPoint.setnY(nY);

	cout << "Notre point a pour coordonnees : X = " << pPoint.getnX() << " Y = " << pPoint.getnY() << " et pour nom : " << pPoint.m_strType << endl;

	return 0;
}