#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << "_";
    for (size_t i = 0;i < s.length();i++)
    {
        cout << s[i];
    }
    cout << "_";
    cout << endl;
    cout << "_";
    for (size_t i = 0;i <= s.length();i++)
    {
        cout << s[i];
    }
    cout << "_";
    cout << endl;
   /* cout << "_";
    for (size_t i = 0;i <= s.length() + 1;i++)
    {
        cout << s[i];
    }
    cout << "_";*/ 
    //Loi truy cap qua string
}