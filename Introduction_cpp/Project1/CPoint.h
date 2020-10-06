#ifndef CPOINT_H
#define CPOINT_H
#pragma once

#include <string>
using namespace std;

class CPoint
//DEFINITION : Ceci est un point avec deux entiers repr�sentants sa position dans un plan 2D.
{
private:
	//Donn�es membres
	int m_nX;
	int m_nY;
	std::string m_strType;

public:

	//Constructeurs
	CPoint(int nX=0,int nY=0);
	CPoint(int nX, int nY, string m_strType);

	//fonctions membres
	
	//proc�dure d�place point
	void deplacePoint(int nX, int nY);

	//m�thode confondpoint
	bool confondPoint(CPoint &autrePoint);

	//Assesseurs
	int getnX()const;
	int getnY()const;
	string getstrType()const;

	//Mutateurs
	void setnX(int n_val);
	void setnY(int n_val);

};

#endif