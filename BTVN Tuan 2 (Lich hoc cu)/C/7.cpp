#include <iostream>
 using namespace std;
 int main ()
 {
    int n;
    cin>>n;
    int key = -99999;
    for (int i =0;i<n;i++)
    {
        int k ;
        cin>>k;
        if(k!=key)
        {
            cout<<k<<" ";
            key=k;
        }
    }
 }