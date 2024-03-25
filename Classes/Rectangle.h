#pragma once

#include <iostream>

using namespace std;

class Rectangle
{
private:
	int sideA;
	int sideB;
public:
	Rectangle(int a, int b) : sideA(a), sideB(b) {};
	Rectangle(int a) : sideA(a), sideB(5) {};
	Rectangle() : sideA(4), sideB(5) {};

	int getSideA() {
		return sideA;
	}

	int getSideB() {
		return sideB;
	}

	void setSideA(int a) {
		sideA = a;
	}

	void setSideB(int b) {
		sideB = b;
	}

	int Area() {
		return sideA * sideB;
	}

	int Perimeter() {
		return (sideA * 2) + (sideB * 2);
	}

	bool isSquares() {
		if (sideA == sideB) {
			return true;
		}
		return false;
	}

	void replaceSides() {
		int temp = sideA;
		sideA = sideB;
		sideB = temp;
	}
};

