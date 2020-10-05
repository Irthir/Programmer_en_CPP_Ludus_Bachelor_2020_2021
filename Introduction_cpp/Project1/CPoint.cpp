#include "CPoint.h"

//Les constructeurs
CPoint::CPoint()
{
	this->setnX(0);
	this->setnY(0);
	this->m_strType = "pivot";
}

CPoint::CPoint(int nX, int nY, string m_strType)
{
	this->setnX(nX);
	this->setnY(nY);
	this->m_strType = m_strType;
}

//Accesseurs
int CPoint::getnX() const
{
	return this->m_nX;
}

int CPoint::getnY() const
{
	return this->m_nY;
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
