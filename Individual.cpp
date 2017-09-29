#include <iostream>
#include <windows.h>
#include <string>
#include <cstring>
#include <string.h>


using namespace std;

class CPoint					
{
protected:  int x,y;
public:
	CPoint::CPoint() {}
	

	CPoint::CPoint (int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	CPoint::~CPoint() {}
	

	void CPoint::setCPoint(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	int CPoint::getCPoint()
	{
		return x;
		return y;
	}

	void CPoint::input() {
		cout << "Введите координаты" << endl;
		cout << "x="; cin >> x;
		cout << "y="; cin >> y;

	}
	
	void CPoint::output() {
		cout << "x=" << x << " " << "y=" << y;
	}
};


class ColoredPoint : public CPoint
{
protected:
	int x1, y1;
	string color;

public:
	ColoredPoint(){}
	ColoredPoint(string color);

	ColoredPoint(int x2, int y2)
	{
		x1 = x2;
		y1 = y2;
	}
	ColoredPoint::~ColoredPoint() {}



	int ColoredPoint::setColoredPoint(int x2, int y2)
	{
		x1 = x2;
		y1 = y2;
	}

	void ColoredPoint::setColoredPoint1(string color1)
	{
		color = color1;
		
	}

	int ColoredPoint::getColoredPoint()
	{
		return x1;
		return y1;
		
	}
	string ColoredPoint::getColoredPoint1()
	{
		return color;
		
	}

	void ColoredPoint::input1()
	{
		cout << "Введите координаты" << endl;
		cout << "x="; cin >> x1;
		cout << "y="; cin >> y1;
	}
	void ColoredPoint::output1() {
		cout << "x=" << x1 << " " << "y=" << y1 << "\n";
	}

	void ColoredPoint::input11()
	{
		cout << "Введите цвет" << endl;
		cin >> color;
	}

	void ColoredPoint::output11() {
		cout << "Цвет: " << color << "\n"   << endl;;
	}

};



class CLine : public CPoint ///////////////////
{
protected:
	int x2, y2, x3, y3;

public: 
	CLine() {}
	

	CLine(int x4, int y4, int x5, int y5)
	{
		x2 = x4;
		y2 = y4;
		x3 = x5;
		y3 = y5;
	}

	CLine::~CLine() {}

	int CLine::setCLine(int CLine_x2, int CLine_y2, int CLine_x3, int CLine_y3)
	{
		x2 = CLine_x2;
		y2 = CLine_y2;
		x3 = CLine_x3;
		y3 = CLine_y3;
	}

	int CLine::getCLine()
	{
		return x2, y2, x3, y3;
	
	}

	void CLine::input21()
	{
		cout << "Введите координаты: " << endl;
		cout << "x="; cin >> x2;
		cout << "y="; cin >> y2;
		cout << "x1="; cin >> x3;
		cout << "y1="; cin >> y3;
	}

	void CLine::output21() {
		cout << "x=" << x2 << " " << "y=" << y2 << " " << "x1=" << x3 << " " << "y1=" << y3 << "\n";
	}

};


class ColoredLine : CLine
{
protected:
	int x4, y4, x5, y5;
	string color1;

public :

	ColoredLine() {}
	ColoredLine(string color1);

	ColoredLine(int x7, int y7, int x8, int y8)
	{
		x4 = x7;
		y4 = y7;
		x5 = x8;
		y5 = y8;
	}
	ColoredLine::~ColoredLine() {}

	int  ColoredLine::setColoredLine(int x7, int y7, int x8, int y8)
	{
		x4 = x7;
		y4 = y7;
		x5 = x8;
		y5 = y8;
	}

	int  ColoredLine::setColoredLine1(string color2)
	{
		color1 = color2;
		
	}

	int ColoredLine::getColoredLine()
	{
		return x4, y4, x5, y5;
		
	}

	string ColoredLine::getColoredLine1()
	{
		return color1;
	}

	void ColoredLine::input21()
	{
		cout << "Введите координаты" << endl;
		cout << "x="; cin >> x4;
		cout << "y="; cin >> y4;
		cout << "x1="; cin >> x5;
		cout << "y1="; cin >> y5;
	}
	void ColoredLine::output21() {
		cout << "x=" << x4 << " " << "y=" << y4 << " " "x1=" << x5 << " " << "y2=" << y5 << "\n";
	}

	void ColoredLine::input22()
	{
		cout << "Введите цвет" << endl;
		cin >> color1;
	}

	void ColoredLine::output22() {
		cout << "Цвет: " << color1 << "\n" << endl;;
	}

};

class CPolyLine : CLine
{
protected:
	int x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11;

public: 
	CPolyLine() {}
	

	CPolyLine (int x21, int y21, int x22, int y22, int x23, int y23, int x24, int y24, int x25, int y25, int x26, int y26 )
	{
		x6 = x21;
		y6 = y21;
		x7 = x22;
		y7 = y22;
		x8 = x23;
		y8 = y23;
		x9 = x24;
		y9 = y24;
		x10 = x25;
		y10 = y25;
		x11 = x26;
		y11 = y26;
	}
	CPolyLine::~CPolyLine() {}

	int CPolyLine::setCPolyLine(int x21, int y21, int x22, int y22, int x23, int y23, int x24, int y24, int x25, int y25, int x26, int y26)
	{
		x6 = x21;
		y6 = y21;
		x7 = x22;
		y7 = y22;
		x8 = x23;
		y8 = y23;
		x9 = x24;
		y9 = y24;
		x10 = x25;
		y10 = y25;
		x11 = x26;
		y11 = y26;
		

	}

	int CPolyLine::getCPolyLine() 
	{
		return x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11;
	}




	void CPolyLine::input31()
	{
		cout << "Введите координаты многоугольника: " << endl;
		cin >> x6 >> y6 >> x7 >> y7 >> x8 >> y8 >> x9 >> y9 >> x10 >> y10 >> x11 >> y11;
		
	}

	void CPolyLine::output31() {
		cout << "(x=" << x6 << " " << "y=" << y6 << ")  " << " (x1=" << x7 << " " << "y2=" << y7 << ")  " << "(x3=" << x8;
		cout << " " << "y3=" << y8 << ")  " << "(x4=" << x9 << " " << "y4=" << y9 << ")  " << " " << " "  "(x5=" << x10 << " " << "y5=" << y10 << ")  " << "(x6=" << x11 << " " << "y6=" << y11 << ")  " << endl;
	}



};							///////////////////





int main()
{ 
	setlocale(0, "Russian");


	CPoint getC(1,2);

	
	ColoredPoint getC1(3, 4);
	ColoredPoint getC2("blue");

	CLine getL(1, 2, 3, 4);

	ColoredLine getL1(4, 3, 2, 1);
	ColoredLine getL2("red");

	CPolyLine getP(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);




	do {
		cout << "\tВыберите объект..." << endl;
		cout << "1. Точка." << endl;
		cout << "2. Цветная точка." << endl;
		cout << "3. Линия." << endl;
		cout << "4. Цветная линия." << endl;
		cout << "5. Многоугольник." << endl;
		cout << "6. Выход." << endl;

		int s;
		cin >> s;
		switch (s)
		{
		case 1:
			cout << "\tМеню" << endl;
			cout << "\t1. Создать точку." << endl;
			cout << "\t2. Показать точку." << endl;

			int num;
			cin >> num;
			switch (num)
			{
			case 1:
				getC.input();
				
				break;

			case 2:
				getC.output();
				break;
			default:
				break;
			}
			break;

		case 2:                              
			cout << "\tМеню" << endl;
			cout << "\t1. Создать  цветную точку." << endl;
			cout << "\t2. Показать цветную точку." << endl;
			int n;
			cin >> n;
			switch (n)
			{
			case 1:
				getC1.input1();
				getC2.input11();
				break;
			case 2:
				getC1.output1();
				getC2.output11();
				break;
			default:
				break;
			}

			break;

		case 3:                                
			cout << "\tМеню" << endl;
			cout << "\t1.Создать линию" << endl;
			cout << "\t2.Показать линию" << endl;
			int n3;
			cin >> n3;
			switch (n3)
			{
			case 1:
				getL.input21();
				break;
			case 2:
				getL.output21();
				break;
			default:
				break;
			}
			break;

		case 4:                                 
			cout << "\tМеню" << endl;
			cout << "\t1. Создать цветную линию." << endl;
			cout << "\t2. Показать цветную линию." << endl;
			int n4;
			cin >> n4;
			switch (n4)
			{
			case 1:
				getL1.input21();
				getL1.input22();
				break;
			case 2:
				getL1.output21();
				getL1.output22();
				break;
			default:
				break;
			}
			break;

		case 5:
			cout << "\tМеню" << endl;
			cout << "\t1. Создать многоугольник." << endl;
			cout << "\t2. Показать многоугольник." << endl;
			int n5;
			cin >> n5;
			switch (n5)
			{
			case 1:
				getP.input31();
				break;
			case 2:
				getP.output31();
				break;
			default:
				break;
			}
			break;
			
		
		
		
		case 6:                           
			cout << "Выход.\n";
			exit(EXIT_SUCCESS);
		default:
			break;
	
	}
	}while (1);


	return 0;
}

ColoredPoint::ColoredPoint(string color)
{
}

ColoredLine::ColoredLine(string color1)
{
}