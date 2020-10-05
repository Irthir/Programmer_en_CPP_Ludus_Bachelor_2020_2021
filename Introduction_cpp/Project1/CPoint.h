#ifndef CPOINT_H
#define CPOINT_H


#pragma once
class CPoint
//DEFINITION : Ceci est un point avec deux entiers représentants sa position dans un plan 2D.
{
private:
	//Données membres
	int m_nX;
	int m_nY;

public:
	//fonctions membres
	void affichePoint() const;
};

#endif