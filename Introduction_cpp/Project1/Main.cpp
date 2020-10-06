#include "CPoint.h"
#include <iostream>

using namespace std;

int main()
{
	//Création
	CPoint pPoing;

	CPoint pPoint(8,9,"Patate");
	
	CPoint tabPoint[100];

	for (int i = 0; i < 100;i++)
		tabPoint[i] = pPoint;

	cout << "Mon point a pour position : X = "<< pPoint.getnX() << " Y = "<< pPoint.getnY() << " et pour type : "<< pPoint.getstrType() << "." << endl;

	pPoint.deplacePoint(35, 75);

	cout << "Mon point a pour position : X = " << pPoint.getnX() << " Y = " << pPoint.getnY() << " et pour type : " << pPoint.getstrType() << "." << endl;

	cout << pPoint.confondPoint(pPoing) << endl;


	cout << pPoint.confondPoint(pPoint) << endl;

	return 0;
}