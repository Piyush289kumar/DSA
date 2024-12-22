/* Q1: Program to find Smallest and Largest Word in a String

Input : "This is a test string"
Output : Minimum length word: a
         Maximum length word: string
Input : "GeeksforGeeks A computer Science portal for Geeks"
Output : Minimum length word: A
         Maximum length word: GeeksforGeeks

*/

#include <bits/stdc++.h>

using namespace std;

pair<string, string> findSmallestAndLargestString(string str)
{

    stack<char> charStack;

    string temp = "";

    string smallest = "";
    string largest = "";

    // Add space to the end for last word count
    str += " ";
    for (char ch : str) 
    {
        if (ch != ' ')
        {
            charStack.push(ch);
        }
        else
        {
            while (!charStack.empty())
            {
                temp += charStack.top();
                charStack.pop();
            }

            if (smallest == "" || temp.size() < smallest.size())
            {
                smallest = temp;
            }
            if (largest == "" || temp.size() > largest.size())
            {
                largest = temp;
            }

            temp = "";
        }
    }

    reverse(smallest.begin(), smallest.end());
    reverse(largest.begin(), largest.end());
    // Resposne

    pair<string, string> ans;
    ans.first = smallest;
    ans.second = largest;

    return ans;

}

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    pair<string, string> res = findSmallestAndLargestString(str);

    cout << endl << endl;
    cout << "Smallest => " << res.first;
    cout << endl;
    cout << "Largest => " << res.second;
}