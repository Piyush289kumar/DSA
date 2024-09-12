/* Q2: GCD - Greatest Common Divisor.

Formula => GCD( a - b, b ) ;
*/


#include<iostream>

using namespace std;

int findGCD(int a, int b){
    
    if(a == 0) return b;
    if(b == 0) return a;

    if (a>b)
    {
        return findGCD(a-b, b);
    }
    else
    {
        return findGCD(b-a, a);
    }

}

int main(){
    int a = 24;
    int b = 72;
    cout << "RESPONSE ==> " << findGCD(a, b);

    return 0;
}