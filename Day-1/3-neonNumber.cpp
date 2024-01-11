/* 3. Check a number is neon number or not
=>> A neon number is a positive integer whose square has the same sum of digits as the original number itself. In simpler terms, if you take a neon number, square it, and then add up all the digits in the square, you get the original number back!

Examples:
9: 9 squared is 81, and 8 + 1 = 9.
1: 1 squared is 1, and 1 + 0 = 1.
4: 4 squared is 16, and 1 + 6 = 7 (not equal to 4). */

#include <iostream>
using namespace std;

int addDigits(int num)
{
    int temp, sum;
    temp = num;
    sum = 0;
    while (temp / 10 != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    sum = sum + temp;
    return sum;
}

int main()
{
    int num, squNum;
    // cout << "Enter a number: ";
    // cin>>num;
    num = 9;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    if (num == addDigits(num*num))
    {
        cout << num << " is a Neon number" << endl;
    }
    else
    {
        cout << num << " is not a Neon number" << endl;
    }
    return 0;
}