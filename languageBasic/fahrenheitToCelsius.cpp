#include <iostream>
#include<cmath>

using namespace std;

double fahrenheitToCelsius(double fahrenheitValue)
{

    double celsius = (fahrenheitValue - 32) / 1.8;

    cout << "Fahrenheit : " << fahrenheitValue << endl;
    cout << "Celsius : " << celsius << endl;

    return 0;
}

int main()
{
    fahrenheitToCelsius(90);

    return 0;
}