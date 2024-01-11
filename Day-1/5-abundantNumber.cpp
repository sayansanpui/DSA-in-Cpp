/* 5. Check a number is abandoned number or not 
=>> an abundant number, also known as an excessive number, is a positive integer whose sum of proper divisors (all factors except itself) is greater than the number itself. In simpler terms, if you add up all the factors of an abundant number except the number itself, you get a sum that's bigger than the number itself.

Examples:
consider the number 12. Its proper divisors are 1, 2, 3, 4, and 6. Adding these up, we get 1 + 2 + 3 + 4 + 6 = 16, which is larger than 12. Thus, 12 is an abundant number.
*/

#include <iostream>
using namespace std;

int abundantNumber(int num)
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
    num = 12;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    if (abundantNumber(num) > num)
    {
        cout << num << " is a Abundant Number";
    }
    else
    {
        cout << num << " is not a Abundant Number";
    }
    return 0;
}