#include "CPoint.h"
#include <iostream>

using namespace std;

int main()
{
	//Création
	CPoint pPoint(8,9,"Patate");
	
	CPoint tabPoint[100];

	for (int i = 0; i < 100;i++)
		tabPoint[i] = pPoint;

	return 0;
}