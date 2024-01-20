/* Check a number is duck number or not
=>> A duck number is a positive whole number (not zero itself) that contains at least one zero, but not as the leading digit. So, numbers like 3210, 7056, and 102 are all proud members of the duck family. However, numbers like 0123 and 008 are excluded, because their zeros lead the way like confident swans.
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "enter the no : ";
    cin >> str;
    if (str[0] == '0')
        cout << "Not a duck no";
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0')
            {
                cout << "Duck no";
                return 0;
            }
        }
        cout << "Not a duck no";
    }
}

// 123
// 01203 -> 1203
// 1203