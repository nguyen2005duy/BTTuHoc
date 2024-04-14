#include <iostream>
using namespace std;
void print(int x)
{
    cout<<&x<<endl<<x<<endl;
}
void printthamchieu(int &x)
{
    cout<<&x<<endl<<x;
}
int main ()
{
    int x= 0;
    cout<<&x<<endl<<x<<endl;
    print(x);
    printthamchieu(x);
    
}// X có cùng giá trị nhưng khác địa chỉ bộ nhớ, nhưng khi truyền tham chiếu, x có cùng giá trị và cùng đchỉ bộ nhớ