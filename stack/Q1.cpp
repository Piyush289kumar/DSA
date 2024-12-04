/* Q1: Reverse a String Using Stack.*/

#include<bits/stdc++.h>

using namespace std;

string reverseString(string str){
    
    stack<char> stack;

    for (int idx = 0; idx < str.size(); idx++)
    {
       stack.push(str[idx]);
    }

    string res;

    while (!stack.empty())
    {
        res.push_back(stack.top());
        stack.pop();
    }
    
    return res;
    
}

int main(){
    
    string str;

    cout << "Enter String : ";
    cin >> str;

    string res = reverseString(str);

    cout << "RESPONSE ==> " << res;
    
    return 0;    
}