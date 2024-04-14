#include <iostream>
#include <vector>
using namespace std;
void solve(vector<vector<long>> steps) {
   int n;
   n = steps.size();
   long long int x = 9999999999;
   long long int y=999999999999;
   for (int i = 0;i<int(steps.size());i++)
   {
       
           if (steps[i][0]<x)
           {
               x=steps[i][0];
           }
           if (steps[i][1]<y)
           {
               y = steps[i][1];
           }
       
   }
 cout<< x*y;
}
int main ()
{
    int n;
    cin>>n;
    vector<vector<long>> vec(n,vector<long>(2));
    for (int i =0 ; i <n;i++)
    {
        for (int j = 0;j<2;j++)
        {
            cin>>vec[i][j];
        }
    }
    solve(vec);
}
