/* Q29: TCS NQT Coding Question – 29
Problem Statement – A doctor has a clinic where he serves his patients. The doctor’s consultation fees are
different for different groups of patients depending on their age. If the patient’s age is below 17, fees is 200
INR. If the patient’s age is between 17 and 40, fees is 400 INR. If patient’s age is above 40, fees is 300 INR.
Write a code to calculate earnings in a day for which one array/List of values representing age of patients
visited on that day is passed as input.
Note:



Age should not be zero or less than zero or above 120
Doctor consults a maximum of 20 patients a day
Enter age value (press Enter without a value to stop):
Example 1: Input
20
30
40
50
2
3
14
Output Total Income 2000 INR
*/

#include <bits/stdc++.h>
using namespace std;

int findFees(vector<int> &nums)
{
    int totalFees = 0;
    for (auto num : nums)
    {
        if (num < 17)
        {
            totalFees += 200;
        }
        else if (num <= 40)
        {
            totalFees += 400;
        }
        else
        {
            totalFees += 300;
        }
    }
    return totalFees;
}

int main()
{

    vector<int> nums;
    string input;

    while (nums.size() < 20)
    {
        getline(cin, input);

        if (input.empty())
        {
            break;
        }

        try
        {
            int age = stoi(input);
            if (age <= 0 || age > 120)
            {
                cout << "INVALID INPUT" << endl;
                return 0;
            }
            nums.push_back(age);
        }
        catch (exception &error)
        {
            cout << "INVALID INPUT" << endl;
            return 0;
        }
    }

    cout << "Total Income " << findFees(nums) << " INR" << endl;

    return 0;
}