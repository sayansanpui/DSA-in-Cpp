/**/

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
    sum = sum + temp;
    return sum;
}

int main()
{
    int num, squNum;
    // cout << "Enter a number: ";
    // cin>>num;
    num = 522;
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