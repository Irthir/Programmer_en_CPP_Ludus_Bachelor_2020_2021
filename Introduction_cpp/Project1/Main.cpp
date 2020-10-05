#include "CPoint.h"
using namespace std;

int main()
{
	/*
	printf("Hello World\n");

	tPoint pPoint;

	pPoint.m_nX = 4;
	pPoint.m_nY = 1;

	//cin >> pPoint.nX; //cin est l'équivalent de scanf en C++, cependant il récupère une valeur non typée.
	//cin >> pPoint.nY;


	pPoint.affichePoint(pPoint); //Note : Penser aux normes de programmations MVC.*/

	CPoint pPoint;

	//Appel de la méthode publique affichePoint()
	pPoint.affichePoint();

	return 0;
}