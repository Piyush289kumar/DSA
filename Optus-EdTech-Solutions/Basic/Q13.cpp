/*Q13: Evaluate Reverse Polish Notation*/

#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st;

    for (const string &ch : tokens)
    {
        if (ch == "+" || ch == "-" || ch == "*" || ch == "/")
        {
            // Pop the top two elements
            int operantA = st.top();
            st.pop();
            int operantB = st.top();
            st.pop();

            // Compute the result based on the operator
            if (ch == "+")
            {
                st.push(operantB + operantA);
            }
            else if (ch == "-")
            {
                st.push(operantB - operantA);
            }
            else if (ch == "*")
            {
                st.push(operantB * operantA);
            }
            else if (ch == "/")
            {
                st.push(operantB / operantA);
            }
        }
        else
        {
            // Push the number (convert string to integer)
            st.push(std::stoi(ch));
        }
    }

    return st.top();
}

int main()
{
    int n;
    cin >> n;
    vector<string> tokens;

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        tokens.push_back(x);
    }

    cout << (evalRPN(tokens) ? "True" : "False");
    return 0;
}
