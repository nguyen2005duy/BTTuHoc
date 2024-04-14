#include <iostream>
#include<string>
using namespace std;
struct point {
    double a, b;
   
};
struct rect {
    point left;
    double w, h;

};
struct ship {
    rect r;
    string id; 
    int dx, dy;
    void move() {
        r.left.a += dx;
        r.left.b += dy;
    }
};
void printz(point a) {
             std::cout<< a.a << " " <<a.b;
        }
void display(const ship& ship) {
    cout << ship.id << '\n';
    printz(ship.r.left);
    cout<<endl;
}

int main()
{
    rect b;
    point c;
    c.a = 5;
    c.b = 25;
    b.left = c;
    b.w = 10;
    b.h = 5;
    ship s;
    s.r = b;
    s.dx = 1;
    s.dy = 1;
    s.id = "NDD";
    bool moves = true;
    display(s);
    while (moves)
    {
        cout<<"MOVE?";
        cin>>moves;
        if (moves)
        {
            s.move();
        }
        cout<<endl;
    display(s);
    
    }

    return 0;
}