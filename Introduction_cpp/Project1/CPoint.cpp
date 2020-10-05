#include "CPoint.h"
#include <stdio.h>

//Les constructeurs
CPoint::CPoint()
{
	setnX(0);
	setnY(0);
}

CPoint::CPoint(int nX, int nY)
{
	setnX(nX);
	setnY(nY);
}

void CPoint::affichePoint() const
//BUT : Afficher les coordonnées d'un point dans la console.
//ENTREE : Le-dit point.
//SORTIE : Ses coordonnées X et Y affichées.
{
	printf("Mon point a pour coordonnees : X = %d Y = %d \n", getnX(), getnY());
}

//Accesseurs
int CPoint::getnX() const
{
	return m_nX;
}

int CPoint::getnY() const
{
	return m_nY;
}

//Mutateurs
void CPoint::setnX(int n_val)
{
	m_nX = n_val;
}

void CPoint::setnY(int n_val)
{
	m_nY = n_val;
}
