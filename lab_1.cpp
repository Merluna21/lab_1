#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

class Square {
private:
	double side;
public:

	Square() : side(0) {}
	
	double Counting() {
		double area = side * side;
		return area;
	}

	void Setside() {
		cout << "Введіть сторону квадрата: " << endl;
		cin >> side;
	}

	void print_sqr()
	{
		if (side < 0)
			cout << "\nВи ввели від'ємне значення сторони" << endl;
		else
		{
			cout << "Сторона квадрата: " << side << endl;
			cout << "Сторона квадрата: " << Counting() << endl << endl;
		}
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	Square a;
	a.Setside();
	a.Counting();
	a.print_sqr();
	return 0;
}