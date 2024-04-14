#include <iostream>

struct point{
  int x, y;
};
void print(point a){
    std::cout<< a.x << " " <<a.y;
}
point mid_point(const point a,const point b){
    point result;
    result.x = (a.x + b.x)*1.0/2;
    result.y = (a.y + b.y)*1.0/2;

    return result;
}
int main()
{
    point a,b;
    a.x = 10;
    a.y = 20;
    print(a);
    b.x = 4;
    b.y =6;
    point c = mid_point(a,b);
    print(c);
    return 0;
}