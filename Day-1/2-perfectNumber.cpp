/* 2. Check a no is perfect or not.
=>> a perfect number is a fascinating concept. It refers to a positive integer that is equal to the sum of its positive divisors, excluding the number itself. In simpler terms, a perfect number finds perfect balance by being equal to the sum of its parts, except for itself.

Examples:
consider the number 6. Its divisors are 1, 2, and 3. If we add these divisors (1 + 2 + 3), we get 6. Therefore, 6 is a
28 (1 + 2 + 4 + 7 + 14)
496 (1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248) */

#include <iostream>
using namespace std;

int perfectNumber(int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int num;
    // cout << "Enter a number: ";
    // cin>>num;
    num = 496;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    if (perfectNumber(num) == num)
    {
        cout << num << " is a Perfect Number";
    }
    else
    {
        cout << num << " is not a Perfect Number";
    }
    return 0;
}