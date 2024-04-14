#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i =0;i<n;i++)
    {
        cin>>vec[i];
    }
    bool end = false;
    for (int i =0 ; i<n;i++)
    {
        for (int j = i+1;j<n;j++)
        {
            if(vec[i]+vec[j]==0)
            {
                cout<<vec[i]<<" "<<vec[j];
                end = true;
                break;
            }
        }
        if (end) {break;}
    }
}