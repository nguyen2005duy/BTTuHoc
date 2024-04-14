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
    bool end1 = false;
    for (int i =0 ; i<n;i++)
    {
        for (int j = i+1;j<n;j++)
        {
            for (int k = j+1;k<n;k++)
            {
                if (vec[i]+vec[j]+vec[k]==0)
                {
                    end = 1;
                    end1 = 1;
                    cout<<vec[i]<<" "<<vec[j]<<" "<<vec[k];
                    break;
                    
                }
            }
            if (end1)
            {
                break;
            }
        }
        if (end) {break;}
    }
}