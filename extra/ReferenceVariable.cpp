#include <iostream>

using namespace std;

int main()
{

    int i = 10;
    int &j = i;

    cout << "I ==> " << i << endl;
    cout << "J ==> " << j << endl;

    return 0;

}