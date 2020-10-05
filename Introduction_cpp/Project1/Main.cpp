#include <stdio.h>
#include <iostream>
#include "tPoint.h"
using namespace std;

int main()
{
	printf("Hello World\n");

	tPoint pPoint;

	pPoint.nX = 4;
	pPoint.nY = 1;

	/*cin >> pPoint.nX; //cin est l'équivalent de scanf en C++, cependant il récupère une valeur non typée.
	cin >> pPoint.nY;*/


	affichePoint(pPoint); //Note : Penser aux normes de programmations MVC.

	return 0;
}