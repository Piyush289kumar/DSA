/*
Q2: Selection of MPCS exams include a fitness test which is conducted on ground. There will be a
batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their
oxygen level after every round. After trainee are finished with all rounds, calculate for each
trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as
the most fit trainee. If more than one trainee attains the same highest average level, they all
need to be selected.
Display the most fit trainee (or trainees) and the highest average oxygen level.
Note:
•
•
•
The oxygen value entered should not be accepted if it is not in the range between 1
and 100.
If the calculated maximum average oxygen value of trainees is below 70 then declare
the trainees as unfit with meaningful message as “All trainees are unfit.
Average Oxygen Values should be rounded.
Example 1:
•
INPUT VALUES
95
92
95
92
90
9290
92
90
•
OUTPUT VALUES
o Trainee Number : 1
o Trainee Number : 3
Note:
Input should be 9 integer values representing oxygen levels entered in order as
Round 1
•
•
•
Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 2
•
•
•
Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 3
•
•
•
Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Output must be in given format as in above example. For any wrong input final output should
display “INVALID INPUT”
*/

#include <bits/stdc++.h>
using namespace std;

void selectTranees()
{

    int trainees = 3;
    int rounds = 3;

    vector<vector<int>> oxyLevels(trainees, vector<int>(rounds));

    for (int round = 0; round < rounds; round++)
    {
        for (int trainee = 0; trainee < trainees; trainee++)
        {
            cin >> oxyLevels[trainee][round];
            if (oxyLevels[trainee][round] < 1 || oxyLevels[trainee][round] > 100)
            {
                cout << "INVALID INPUT" << endl;
                return;
            }
        }
    }

    vector<int> avgOxy(trainees, 0);
    int maxAvg = 0;
    for (int trainee = 0; trainee < trainees; trainee++)
    {
        int currSum = 0;
        for (int round = 0; round < rounds; round++)
        {
            currSum += oxyLevels[trainee][round];
        }

        avgOxy[trainee] = (currSum / rounds);
        maxAvg = max(maxAvg, avgOxy[trainee]);
    }

    if (maxAvg < 70)
    {
        cout << "All trainees are unfit.";
        return;
    }

    for (int trainee = 0; trainee < trainees; trainee++)
    {
        if (maxAvg == avgOxy[trainee])
        {
            cout << "Trainee Number : " << trainee + 1 << endl;
        }
    }
}

int main()
{
    selectTranees();
    return 0;
}