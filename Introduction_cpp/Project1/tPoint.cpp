#include <stdio.h>
#include "tPoint.h"

void affichePoint(tPoint pPoint)
//BUT : Afficher les coordonnées d'un point dans la console.
//ENTREE : Le-dit point.
//SORTIE : Ses coordonnées X et Y affichées.
{
	printf("Mon point a pour coordonnees : X = %d Y = %d \n", pPoint.nX, pPoint.nY); //%u pour l'entier non signé.
}
