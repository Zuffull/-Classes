#include <iostream>
#include <vector>

#include "Rectangle.h"
#include "ArrayRectangles.h"

using namespace std;

int main()
{
    Rectangle r1(1, 5);
    Rectangle r2(5);
    Rectangle r3;

    cout << r1.Perimeter() << endl;
    cout << r2.isSquares() << endl;
    cout << r3.Area() << endl;

    r1.replaceSides();

    cout << r3.getSideA() << endl;
    cout << r3.getSideB() << endl;

    vector<Rectangle> rects2;

    rects2.push_back(r1);
    rects2.push_back(r2);
    rects2.push_back(r3);

    ArrayRectangles recs1(rects2);

    cout << recs1.AddRectangle(r3) << endl;

    cout << recs1.NumberMaxArea() << endl;
    cout << recs1.NumberMinPerimeter() << endl;
    cout << recs1.NumberSquare() << endl;
}
