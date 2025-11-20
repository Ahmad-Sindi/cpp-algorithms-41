// Algorithm Challenge
// 41 Weeks and Days

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float num_ofHours, days, weeks;

    cout << "Enter your working hours: ";
    cin >> num_ofHours;

    days = num_ofHours / 24;
    weeks = days / 7;

    cout << weeks << " Weeks\n";
    cout << "==========\n";
    cout << days << " Days\n";

    return 0;
}
