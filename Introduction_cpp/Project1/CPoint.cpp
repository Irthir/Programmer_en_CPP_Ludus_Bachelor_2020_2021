#include "CPoint.h"

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
