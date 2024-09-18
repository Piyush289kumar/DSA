#include <iostream>

#define A 2

using namespace std;

inline int getMax(int a, int& b)
{
    return (a > b) ? a : b;
}
int main()
{

    int b = 2;

    cout << "RESPONSE ==> " << getMax(A, b);

    return 0;
}