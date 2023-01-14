#include<iostream>
using namespace std;

class Shape
{
public:
	virtual double area() const = 0;
};

class Circle :public Shape
{
public:
	Circle(double r) :radius(r)
	{

	}
	virtual double area() const
	{
		return 3.14159 * radius * radius;
	}
protected:
	double radius;
};

class Square :public Shape
{
public:
	Square(double s) :side(s)
	{

	}
	virtual double area() const
	{
		return side * side;
	}
protected:
	double side;
};

class Rectangle :public Shape
{
public:
	Rectangle(double w, double h) :width(w), height(h)
	{

	}
	virtual double area() const
	{
		return width * height;
	}
protected:
	double width, height;
};

class Trapezoid :public Shape
{
public:
	Trapezoid(double t, double b, double h) :top(t), bottom(b), height(h)
	{

	}
	virtual double area() const
	{
		return 0.5 * (top + bottom) * height;
	}
protected:
	double top, bottom, height;

};

class Triangle :public Shape
{
public:
	Triangle(double a, double b, double c) :length1(a), length2(b), length3(c) 
	{

	}
	virtual double area() const
	{
		double p = (length1 + length2 + length3) / 2;
		return sqrt(p * (p - length1) * (p - length2) * (p - length3));
	}
protected:
	double length1, length2, length3;

};

int main()
{
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3,4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	Shape* pt[5] =
	{
		&circle,&square,&rectangle,&trapezoid,&triangle
	};
	double areas = 0.0;
	for (int i = 0; i < 5; i++)
	{
		areas = areas + pt[i]->area();
	}
	cout << "total of all areas=" << areas << endl;
	return 0;
}
