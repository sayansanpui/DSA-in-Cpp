/* 8. A happy number is defined as take a positive number and replace the number by the sum  
    of the squares of his digits repeat the process until the number equals one. If the number 
    ends with one then it is called as happy number  31=3^2+1^2=9+1=10=1+0=1 */

#include <iostream>
using namespace std;

int digitsSquar(int num)
{
    int temp, sum;
    temp = num;
    sum = 0;
    while (temp / 10 != 0)
    {
        sum = sum + ((temp % 10)*(temp % 10));
        temp = temp / 10;
    }
    sum = sum + ((temp % 10)*(temp % 10));
    return sum;
}

bool happyNumber(int num)
{
    int sum=num;
    while ((sum!=1) && (sum<100))
    {
        sum = digitsSquar(sum);
        if (sum==1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int num;
    // cout << "Enter a number: ";
    // cin>>num;
    num = 55;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    if (happyNumber(num))
    {
        cout << num << " is a Happy number" << endl;
    }
    else
    {
        cout << num << " is not a Happy number" << endl;
    }
    return 0;
}