/* Q1: 204. Count Primes - Sieve of Eratosthenes
Medium

Given an integer n, return the number of prime numbers that are strictly less than n.


Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:

Input: n = 0
Output: 0

Example 3:

Input: n = 1
Output: 0

 

Constraints:

    0 <= n <= 5 * 106

*/

#include<iostream>
#include<vector>

using namespace std;

int countPrimes(int n) {

    if (n <= 2) return 0;
    
    vector<bool> prime(n + 1, true);
    int count = 0;

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if(prime[i] == true){
            count++;

            for(int j = i*2; j<n; j=j+i){
                prime[j] = false;
            }          
        }
    }

    return count;
}


int main(){

    int n = 10;

    cout << "RESPONSE ==> " << countPrimes(n);

    return 0;

}