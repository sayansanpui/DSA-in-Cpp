// SHAH RUKH KHAN -> KHAN RUKH SHAH

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Gopal Krishna Gandhi";
    string ans = "";
    int a = str.find(" ");
    int b = str.rfind(" ");
    ans = str.substr(b + 1) + " " + str.substr(a + 1, b - a - 1) + " " + str.substr(0, a);
    cout << ans;
}