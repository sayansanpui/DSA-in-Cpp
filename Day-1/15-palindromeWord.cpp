// MOM AND DAD ARE NOT AT HOME ->  MOM DAD

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "MOM AND DAD ARE AT HOME, MADAM IS ALSO THERE";
    s = s + " ";
    while (s.length() > 0)
    {
        int a = s.find(" ");
        string s2 = s.substr(0, a);
        string s3 = s2;
        reverse(s2.begin(), s2.end());
        if (s2 == s3)
            cout << s3 << " ";
        s = s.substr(a + 1);
    }
}