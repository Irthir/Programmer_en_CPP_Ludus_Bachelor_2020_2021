#include "CPoint.h"
#include <iostream>
using namespace std;

int main()
{
	//Création
	CPoint pPoint;
	int nZ = 0;

	cout << "Veuillez entrer la coordonnee en X du point." << endl;
	
	cin >> nZ;
	pPoint.setnX(nZ);

	cout << "Veuillez entrer la coordonnee en Y du point." << endl;

	cin >> nZ;
	pPoint.setnY(nZ);

	cout << "Notre point a pour coordonnees : X = " << pPoint.getnX() << " Y = " << pPoint.getnY() << endl;

	return 0;
}