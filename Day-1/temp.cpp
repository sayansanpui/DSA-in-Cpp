

// #include <iostream>
// #include <string>
// using namespace std;

// int main() 
// {
//     string s = "the quick brown fox jumps over the lazy dog";
//     string s1 = "";
//     string s2 = "";
//     cout << "enter the word: ";
//     cin >> s1;
//     int count = 0;

//     while (s.length() > 0) 
//     {
//         int a = s.find(' ');
//         s2 = s.substr(0, a);
//         if (a != string::npos)
//             s = s.substr(a + 1);
//         else
//             s = "";
//         if (s2 == s1)
//             count++;
//     }

//     if (count != 0)
//         cout << "the count is: " << count;
//     else
//         cout << "the word is not present in the string.";

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// int main() 
// {
//     char A[] = "How are  you";
//     int i, word=1;
    
//     for (i = 0; A[i] != '\0'; i++)
//     {
//         if (A[i]==' ' && A[i-1]!=' ')
//         {
//             word++;
//         }
//     }
//     cout<<word;

//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

int main() 
{
    char A[] = "How are  you the for";
    int i=0, j, word=0;
    
    while(A[i] != '\0')
    {
        for (j = i; A[j] != ' '; j++)
        {
            if ((A[i]=='t')&&(A[i+1]=='h')&&(A[i+2]=='e')&&(A[i+3]==' '))
            {
                word++;
                i+=3;
                break;
            }
        }
        i=j;
        
        if (A[i]==' ' && A[i-1]!=' ')
        {
            i++;
        }
    }
    cout<<word;

    return 0;
}