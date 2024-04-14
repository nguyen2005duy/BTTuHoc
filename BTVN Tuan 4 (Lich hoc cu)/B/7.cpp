#include <iostream>
#include <vector>

using namespace std;
void solution(vector<char> vec, int k, int n, int currentindex = 0, string currentword = "")
{
    if (currentindex == k)
    {
        cout << currentword<<endl;
        return;
    }
    for (int c = 0; c < n;c++)
    {
        solution(vec, k, n, currentindex + 1, currentword + vec[c]);
       
    }
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<char> vec(s.begin(), s.end());
    
    for (int i = 2;i <= 3;i++)
    {
    
        solution(vec, i, n);
    }
}