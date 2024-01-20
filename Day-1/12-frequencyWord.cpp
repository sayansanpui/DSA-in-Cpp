/* The quick brown fox jumps over the lazy dog  ->  the frequency of the word “the" -> 2 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "the quick brown fox jumps over the lazy dog the";
    s = s + " ";
    string s1 = "";
    string s2 = "";
    cout << "enter the word: ";
    cin >> s1;
    int count = 0;
    while (s.length() > 0)
    {
        int a = s.find(" ");
        s2 = s.substr(0, a);
        if (s2 == s1)
            count++;
        s = s.substr(a + 1);
    }
    if (count != 0)
        cout << "the count is: " << count;
    else
        cout << "the word is not present in the string.";
    return 0;
}