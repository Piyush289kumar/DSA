/* Q2: Delete Middle Element of a Stack.*/

#include <bits/stdc++.h>

using namespace std;

void deleteMiddleElemet(stack<int> &stack, int size, int count)
{
    if (count == size / 2)
    {
        stack.pop();
        return;
    }

    int popElement = stack.top();
    stack.pop();

    deleteMiddleElemet(stack, size, count + 1);

    stack.push(popElement);
}

void print(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << " -> ";
        stack.pop();
    }
}

int main()
{

    stack<int> stack;

    cout << "Enter size of Stack : ";
    int size;
    cin >> size;

    int helperSize = size;
    cout << endl
         << "Enter Element of Stack : ";
    while (helperSize--)
    {
        int userInput;
        cin >> userInput;
        stack.push(userInput);
    }

    int count = 0;
    deleteMiddleElemet(stack, size, count);

    print(stack);

    return 0;
}