/* Q4: Sort Stack.*/

#include <bits/stdc++.h>
using namespace std;
void insertAtSortedElements(stack<int> &stack, int num)
{
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }
    int popItem = stack.top();
    stack.pop();
    insertAtSortedElements(stack, num);
    stack.push(popItem);
}
void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int popElement = stack.top();
    stack.pop();
    sortStack(stack);
    insertAtSortedElements(stack, popElement);
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
    sortStack(stack);
    print(stack);
    return 0;
}