/* Check a number is duck number or not
=>> A duck number is a positive whole number (not zero itself) that contains at least one zero, but not as the leading digit. So, numbers like 3210, 7056, and 102 are all proud members of the duck family. However, numbers like 0123 and 008 are excluded, because their zeros lead the way like confident swans.
*/

#include <iostream>
using namespace std;

bool duckNumber(int num)
{
    int temp, count;
    temp = num;
    count = 0;
    while (temp / 10 != 0)
    {
        if (temp % 10 == 0)
        {
            count++;
        }
        temp = temp / 10;
    }
    if ((temp != 0) && (count > 0))
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    // cout << "Enter a number: ";
    // cin>>num;
    num = 102;
    if (num < 0)
    {
        cout << num << " is not a positive integer" << endl;
        return 0;
    }

    if (duckNumber(num))
    {
        cout << "It is a Duck Number";
    }
    else
    {
        cout << "It is not a Duck Number";
    }
    return 0;
}