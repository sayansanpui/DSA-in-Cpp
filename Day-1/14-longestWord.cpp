// TATA FOOTBALL ACADEMY WILL PLAY AGAINST MOHAN BAGAN  -> Longest word: FOOTBALL,  Length: 8

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "TATA FOOTBALL ACADEMY WILL PLAY AGAINST MOHAN BAGAN";
    s = s + " ";
    string ans = "";
    while (s.length() > 0)
    {
        int a = s.find(" ");
        string s2 = s.substr(0, a);
        if (s2.length() > ans.length())
            ans = s2;
        s = s.substr(a + 1);
    }
    cout << ans << " " << ans.length();
}