#include <iostream>

#define a 1;
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{

    // int a = 1;
    int b = 2;

    cout << "RESPONSE ==> " << getMax(a,b);

    return 0;
}