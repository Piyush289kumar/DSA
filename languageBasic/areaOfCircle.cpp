#include <iostream>
#include <cmath>

using namespace std;

void areaOfCircle(int radius)
{
    double circleArea = M_PI * (radius * radius);

    cout << "Area of Circle is : " << circleArea;
}

int main()
{

    double radius;
    cout << "Enter Radius : ";
    cin >> radius;
    areaOfCircle(radius);
    return 0;
}