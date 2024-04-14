#include <iostream>
#include<cmath>
using namespace std;
struct point{
    int a,b;
};
struct rect{
    point left;
    double w,h;
    bool contains(const point& a){
        point right = toRight();
        if( a.a >= left.a && a.b < left.b && a.a <= right.a && a.b >= right.b){
            return true;
        }else return false;
    }
    point toRight(){
        point result;
        result.a = left.a + w;
        result.b = left.b - h;
        return result;
    }
};

int main()
{
    point a;
    a.a = 10;
    a.b = 20;
    rect b;
    point c;
    c.a = 5;
    c.b = 25;
    b.left = c;
    b.w = 10;
    b.h = 5;
    if(b.contains(a)){
        cout<< "YES";
    }else cout<< "NO";
    return 0;
}