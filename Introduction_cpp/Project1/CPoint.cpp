#include "CPoint.h"
#include <string>

int CPoint::nCompteur = 0;
//Les constructeurs
CPoint::CPoint(int nX,int nY)
{
	this->setnX(nX);
	this->setnY(nY);
	this->m_strType = new char[100];
	strcpy_s(this->m_strType,100, "Defaut");
	nCompteur++;
}

CPoint::CPoint(int nX, int nY, const char* m_strType)
{
	this->setnX(nX);
	this->setnY(nY);
	this->m_strType = new char[100];
	strcpy_s(this->m_strType,100, m_strType);
	nCompteur++;
}

CPoint::~CPoint()
{
	delete[] m_strType;
	nCompteur--;
}

void CPoint::deplacePoint(int nX, int nY)
{
	this->m_nX += nX;
	this->m_nY += nY;
}

bool CPoint::confondPoint(CPoint &autrePoint)
//BUT : Comparer deux points et voir si ils sont confondus.
//ENTREE : Les références des deux points.
//SORTIE : Vrai si ils sont confondus, Faux le cas échéant.
{
	if (this->m_nX == autrePoint.m_nX && this->m_nY == autrePoint.m_nY)
		return true;
	else 
		return false;

	//Pour simplifier on peut aussi écrire : return (this->m_nX == autrePoint.getnX() && this->m_nY == autrePoint.getnY());
}

//Assesseurs
int CPoint::getnX() const
{
	return this->m_nX;
}

int CPoint::getnY() const
{
	return this->m_nY;
}

string CPoint::getstrType() const
{
	return this->m_strType;
}

//Mutateurs
void CPoint::setnX(int n_val)
{
	this->m_nX = n_val;
}

void CPoint::setnY(int n_val)
{
	this->m_nY = n_val;
}

int CPoint::val_Compteur()
{
	return nCompteur;
}
