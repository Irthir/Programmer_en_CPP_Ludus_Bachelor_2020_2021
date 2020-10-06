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
	char* m_strType;
	static int nCompteur;

public:

	//Constructeurs
	CPoint(int nX=0,int nY=0);
	CPoint(int nX, int nY,const char* m_strType);

	//Destructeur
	~CPoint();

	//fonctions membres
	
	//procédure déplace point
	void deplacePoint(int nX, int nY);

	//méthode confondpoint
	bool confondPoint(CPoint &autrePoint);

	//Assesseurs
	int getnX()const;
	int getnY()const;
	string getstrType()const;

	//Mutateurs
	void setnX(int n_val);
	void setnY(int n_val);

	int static val_Compteur();

};

#endif