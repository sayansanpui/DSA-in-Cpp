/* 1. Check Number is Niven number or not.
=>> A Niven number, also known as a Harshad number, is a positive integer that is divisible by the sum of its digits in a given base (usually base 10).
This means you can add up the individual digits of the number, and if the original number is divisible by that sum, it's a Niven number.
Examples:

18 is a Niven number because 1 + 8 = 9, and 18 is divisible by 9.
21 is a Niven number because 2 + 1 = 3, and 21 is divisible by 3.
100 is not a Niven number because 1 + 0 + 0 = 1, and 100 is not divisible by 1. */

#include <iostream>
using namespace std;

int main()
{
    int num, sum, temp;
    // cout << "Enter a number: ";
    // cin>>num;
    num = 21;
    temp = num;
    sum = 0;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    while (temp / 10 != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    sum = sum + temp;
    if (num % sum == 0)
    {
        cout << num << " is a Niven number" << endl;
    }
    else
    {
        cout << num << " is not a Niven number" << endl;
    }
    return 0;
}