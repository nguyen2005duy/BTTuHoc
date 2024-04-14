#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n>0)
    {
        n--;
        int len;
        cin>>len;
        vector<int> vec(len);
        int sum = 0 ;
        for (int i = 0;i<len;i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }
        int found = false;
         int sum1=0;
        for (int i = 0;i<len;i++)
        {
            if (i>=1)
            {
                sum1+=vec[i-1];
            }
            int sum2 = sum-sum1-vec[i];
            if (sum1==sum2)
            {
                found = true;
            }
            if (found){break;}
        }
        if (found)
        {
            cout<<"YES";
        }
        else {cout<<"NO";}
    }
}