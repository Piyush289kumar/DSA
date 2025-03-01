/* Q36: Array is Same of Not.*/

#include<bits/stdc++.h>
using namespace std;

string isSame(vector<int> numsA, vector<int> numsB){
    if(numsA.size() != numsB.size()){
        return "Not Same";
    }

    sort(numsA.begin(), numsA.end());
    sort(numsB.begin(), numsB.end());

    return (numsA == numsB);
}

int main(){
    vector<int> numsA = {1,2,3};
    vector<int> numsB = {1,2,3};

    cout << isSame(numsA, numsB) << endl;

}