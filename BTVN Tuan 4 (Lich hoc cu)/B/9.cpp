#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n,0));
    int n1 = n;
    for (int i =0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[x][y]=1;
    }
    
        bool found = false;
        for (int i =0;i<n;i++)
        {
            int count1 = 0;
            int count2 = 0;
            for (int j = 0;j<n;j++)
            {
                 if (vec[i][j]==1)
                 {
                    count1++;
                 }
                 if (vec[j][i]==1)
                 {
                    count2++;
                 }
            }
            if (count1>1||count2>1)
            {
                found = true; break;
            }
        }
    if (found) {cout<<"yes";}
    else
    {
        while (n1>0)
        {
            int count1 = 0;
            int count2 = 0;
            int i =0;
            int j = n-n1;
            while (i<n&&j<n)
            {
                if (vec[i][j]==1)
                {
                    count1++;
                }
                if (vec[j][i]==1)
                {
                    count2++;
                }
                i++;
                j++;
            }
           if (count1>1||count2>1)
           {
            found=true;
           }
           n1--;
           if (found)
           {break;}
        }
        if (found)
        {
            cout<<"yes";
        }
        else {cout<<"no";}
    } 
}