/* Q3: Insert at Bottom in Stack.*/

#include <bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &stack, int num)
{
    if (stack.empty())
    {
        stack.push(num);
        return;
    }

    int popElement = stack.top();
    stack.pop();

    insertAtBottom(stack, num);

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
    cout << endl
         << "Enter Element of Stack : ";
    while (size--)
    {
        int userInput;
        cin >> userInput;
        stack.push(userInput);
    }

    int num;
    cout << endl << "Enter Num: ";
    cin >> num;
    insertAtBottom(stack, num);

    print(stack);

    return 0;
}