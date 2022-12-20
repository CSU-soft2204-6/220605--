#include <cmath>
#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)

{
	if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
		return true;
	else
		return false;
}
double S(double side1, double side2, double side3)
{
	double s, area;
	s = (side1 + side2 + side3) / 2.0;   //半周长S
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));   //海伦公式计算面积
	return area;
}