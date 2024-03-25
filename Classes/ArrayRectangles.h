#pragma once

#include <iostream>
#include <vector>
#include "Rectangle.h"

using namespace std;

class ArrayRectangles {
private:
    vector<Rectangle> rectangles;

public:
    ArrayRectangles(int n) {
        rectangles.resize(n); 
    }

    ArrayRectangles(vector<Rectangle>& rectangles) : rectangles(rectangles) {}

    bool AddRectangle(Rectangle& rectangle) {
        for (Rectangle& rect : rectangles) {
            if (rect.getSideA() == 0 && rect.getSideB() == 0) {
                rectangles.push_back(rectangle);
                return true;
            }
        }
        return false;
    }

    int NumberMaxArea() {
        if (rectangles.empty()) {
            return -1; 
        }

        int maxIndex = 0;
        double maxArea = rectangles[0].Area();

        for (size_t i = 1; i < rectangles.size(); i++) {
            if (rectangles[i].Area() > maxArea) {
                maxArea = rectangles[i].Area();
                maxIndex = i;
            }
        }

        return maxIndex;
    }

    int NumberMinPerimeter() {
        if (rectangles.empty()) {
            return -1; 
        }

        int minIndex = 0;
        double minPerimeter = rectangles[0].Perimeter();

        for (size_t i = 1; i < rectangles.size(); i++) {
            if (rectangles[i].Perimeter() < minPerimeter) {
                minPerimeter = rectangles[i].Perimeter();
                minIndex = i;
            }
        }

        return minIndex;
    }

    int NumberSquare() {
        int count = 0;
        for (Rectangle& rect : rectangles) {
            if (rect.isSquares()) {
                count++;
            }
        }
        return count;
    }
};
