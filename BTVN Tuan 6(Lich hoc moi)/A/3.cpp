#include <iostream>
using namespace std;
void print(int x)
{
    cout<<&x<<endl<<x<<endl;
}
void printthamtri(int &x)
{
    cout<<&x<<endl<<x;
}
int main ()
{
    int x= 0;
    cout<<&x<<endl<<x<<endl;
    print(x);
    printthamtri(x);
    
}// X có cùng giá trị nhưng khác địa chỉ bộ nhớ, nhưng khi truyền tham biến, x có cùng giá trị và cùng dchij bộ nhớ