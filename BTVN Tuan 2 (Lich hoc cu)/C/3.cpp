#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    n = n*2-1;
    for (int i =0;i<(n+1)/2;i++)
    {
        for (int j = 0;j<(n+1)/2-i;j++)
        {
            cout<<" ";
        }
        for (int j =0;j<i*2+1;j++)
        {
            cout<<"*";
        }
   cout<<endl;
    }
}