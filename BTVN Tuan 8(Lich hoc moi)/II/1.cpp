#include <iostream>
#include<cmath>
using namespace std;
struct point{
    double a,b;
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
double khoangCach(point a, point b){
    double result;
    result = sqrt(pow(a.a + b.a, 2) + pow(a.b + b.b, 2));
    return result;
}

// void print(point a){
//     std::cout<< a.x << " " <<a.y;
// }
// point mid_point(const point a,const point b){
//     point result;
//     result.x = (a.x + b.x)*1.0/2;
//     result.y = (a.y + b.y)*1.0/2;

//     return result;
// }
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
    if(b.contains(c)){
        cout<< "YES";
    }else cout<< "NO";
    return 0;
}