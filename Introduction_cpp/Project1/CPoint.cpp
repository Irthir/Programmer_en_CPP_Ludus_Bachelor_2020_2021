#include "CPoint.h"
#include <stdio.h>

void CPoint::affichePoint() const
//BUT : Afficher les coordonnées d'un point dans la console.
//ENTREE : Le-dit point.
//SORTIE : Ses coordonnées X et Y affichées.
{
	printf("Mon point a pour coordonnees : X = %d Y = %d \n", m_nX, m_nY);
}