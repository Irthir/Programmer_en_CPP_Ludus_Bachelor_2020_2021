#include "CPoint.h"
#include <iostream>

using namespace std;

void EchangePoints(CPoint* pPoint, CPoint* pPoint1);

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

	cout << "Mon point 1 a pour position : X = " << pPoint.getnX() << " Y = " << pPoint.getnY() << " et pour type : " << pPoint.getstrType() << "." << endl;
	cout << "Mon point 2 a pour position : X = " << pPoing.getnX() << " Y = " << pPoing.getnY() << " et pour type : " << pPoing.getstrType() << "." << endl;
	EchangePoints(&pPoint, &pPoing);
	cout << "Mon point 1 a pour position : X = " << pPoint.getnX() << " Y = " << pPoint.getnY() << " et pour type : " << pPoint.getstrType() << "." << endl;
	cout << "Mon point 2 a pour position : X = " << pPoing.getnX() << " Y = " << pPoing.getnY() << " et pour type : " << pPoing.getstrType() << "." << endl;

	return 0;
}

void EchangePoints(CPoint *pPoint, CPoint *pPoint1)
//BUT : Echanger la position de deux points.
//ENTREE : Les pointeurs de ces deux points.
//SORTIE : La position de ces deux points échangés.
{
	int nX = 0, nY = 0;
	nX=pPoint->getnX();
	nY=pPoint->getnY();
	
	pPoint->setnX(pPoint1->getnX());
	pPoint->setnY(pPoint1->getnY());
	
	pPoint1->setnX(nX);
	pPoint1->setnY(nY);
}