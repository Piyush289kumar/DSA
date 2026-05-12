#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<string> nums = {"baa", "abcd", "abca", "cab", "cad"};

    cout << "ORG : " << endl;
    for(auto num : nums){
        cout << num << endl;
    }

    sort(nums.begin(), nums.end());

    cout << endl << "Sorted: " << endl;
    for(auto num : nums){
        cout << num << endl;
    }

    return 0;
}