/* 6. Write a programme to display all pronic numbers in the range from 1 to N
=>> Definition: A pronic number is a number that is the product of two consecutive integers. In other words, it's of the form n(n+1), where n is any integer.

Examples:
6 = 2 * 3
12 = 3 * 4
20 = 4 * 5
30 = 5 * 6 */

#include <iostream>
using namespace std;

int main()
{
    int num, sum, i;
    // cout << "Enter the limit: ";
    // cin>>num;
    num = 30;
    i = 0;
    sum = 0;
    cout << "Pronic Numbers are: " << endl;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    while (sum < num)
    {
        sum = i * (i + 1);
        cout << sum << ", ";
        i++;
    }
    return 0;
}