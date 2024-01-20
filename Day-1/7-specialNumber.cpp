/* 7. Check a number is special number or not
=>> If the sum of the factorial of the digits in the number is equal to the number itself
Examples:
145 is said to be a special number. Since, 1!+4!+5!=145, it is a special number . Calculations- 1!=1, 4!=24 and 5!=120 after adding them, 1 + 24 + 120 we get 145. Hence we can say that it is a special number. */

#include <iostream>
using namespace std;

int fact(int num)
{
    int sum = 1;
    for (int i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int specialNumber(int num)
{
    int temp, sum;
    temp = num;
    sum = 0;
    while (temp / 10 != 0)
    {
        sum = sum + fact(temp % 10);
        temp = temp / 10;
    }
    sum = sum + fact(temp);
    return sum;
}

int main()
{
    int num;
    // cout << "Enter a number: ";
    // cin>>num;
    num = 145;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    if (num == specialNumber(num))
    {
        cout << num << " is a Special number" << endl;
    }
    else
    {
        cout << num << " is not a Special number" << endl;
    }
    return 0;
}