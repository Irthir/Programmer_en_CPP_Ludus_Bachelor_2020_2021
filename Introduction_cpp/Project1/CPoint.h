#ifndef CPOINT_H
#define CPOINT_H
#pragma once

#include <string>
using namespace std;

class CPoint
//DEFINITION : Ceci est un point avec deux entiers représentants sa position dans un plan 2D.
{
private:
	//Données membres
	int m_nX;
	int m_nY;

public:
	std::string m_strType;

	//Constructeurs
	CPoint();
	CPoint(int nX, int nY, string m_strType);

	//fonctions membres
	void deplacePoint(int nX, int nY);

	//Assesseurs
	int getnX()const;
	int getnY()const;

	//Mutateurs
	void setnX(int n_val);
	void setnY(int n_val);

};

#endif