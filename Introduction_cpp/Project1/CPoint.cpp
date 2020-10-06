#include "CPoint.h"

//Les constructeurs
CPoint::CPoint(int nX,int nY)
{
	this->setnX(nX);
	this->setnY(nY);
	this->m_strType = "Defaut";
}

CPoint::CPoint(int nX, int nY, string m_strType)
{
	this->setnX(nX);
	this->setnY(nY);
	this->m_strType = m_strType;
}

void CPoint::deplacePoint(int nX, int nY)
{
	this->m_nX += nX;
	this->m_nY += nY;
}

bool CPoint::confondPoint(CPoint autrePoint)
{
	if (this->m_nX == autrePoint.getnX() && this->m_nY == autrePoint.getnY())
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
