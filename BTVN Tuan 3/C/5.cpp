#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int m ;
    int n;
    cin>>m>>n;
    int a = 0;
    int cas = 1;
    int count  = 1;
    vector<vector<int>> vec(m,vector<int>(n));
    while (count<=m*n)
    {
        switch (cas)
        {
            case 1:
            for (int j =a;j<n-a;j++)
            {
                 vec[a][j] = count;
                 count++;
            }
            count--;
            cas++;
            break;
            case 2:
            for (int i = a;i<m-a;i++)
            {
                vec[i][n-a-1]=count;
                count++;
            }
            count--;
            cas++;
            break;
            case 3:
              for (int j = m-a-1;j>=a;j--)
            {
                vec[m-a-1][j]=count;
                count++;
            }
            count--;
            cas++;
            break;
            case 4:
             for (int i = m-a-1;i>=a+1;i--)
             {
                vec[i][a] = count;
                count++;
             }
             count--;
             cas = 1;
             break;
        }
        
    }
    for (int i =0;i<m;i++)
    {
        for (int j =0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}