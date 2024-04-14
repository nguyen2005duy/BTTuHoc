#include <iostream>
#include <ctime>
using namespace std;
int main ()
{
    srand(time(NULL));
    int n = 30;
    int a[30];
    for (int i = 0;i<30;i++)
    {
        a[i]=rand()%100+1;
    }
    for (auto const i:a)
    {
        cout<<i<<" ";
    }
  
    for (int i = 0 ;i<n;i++)
    {
        for (int j =0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp  = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<endl;
    for (int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}