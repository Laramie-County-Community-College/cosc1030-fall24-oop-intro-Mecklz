#include "Triangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Triangle::SetBase(double userBase) {
   base = userBase;
}

void Triangle::SetHeight(double userHeight) {
   height = userHeight;
}

void Triangle::GetInput() {
   double base;
   double height;

   cout << "Input the triangles base: ";
   cin >> base;

   cout << "Input the traingles height: ";
   cin >> height;

   SetBase(base);
   SetHeight(height);

}

double Triangle::GetArea() const {
   return 0.5 * base * height;
}

void Triangle::PrintInfo() const {
   cout << fixed << setprecision(2);
   cout << "Base: " << base << endl;
   cout << "Height: " << height << endl;
   cout << "Area: " << GetArea() << endl;
}