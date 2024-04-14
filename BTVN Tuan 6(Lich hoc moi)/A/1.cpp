#include <iostream>
using namespace std;
int main ()
{
    int c  = 0;
    int a[3] = {0,0,0};
    int d= 0;
    char b[3] = {0,0,0};
    int *p = a;
    for (int i =0;i<=2;i++)
    {
        cout<<p+i<<endl;
    }

    for (int i =0;i<=2;i++)
    {
       	cout << (void *)&b[i]<<endl;
    }
    cout<<&c<<" "<<&d;
}//cac dia chi cua phan tu mang a cach nhau 4 o bo nho, mang b cung cach nhau mot khoang bang nhau giua cac phan tu;
// bien c co dia chi bo nho gan nhu la mang a, va bien d cung co dia chi bo nho gan mang b