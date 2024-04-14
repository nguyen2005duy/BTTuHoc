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
    c.a=40;
    c.b=35;
    rect d;
    d.left = c;
    ship s;
    s.r = b;
    s.dx = 1;
    s.dy = 1;
    s.id = "NDD";
    ship s1;
    s1.id ="DVH";
    s1.r = d;
    s1.dx = 2;
    s1.dy = 2;
    bool moves = true;
    display(s);
    display(s1);
    cout<<endl;
    while (moves)
    {
        cout<<"MOVE?"<<endl;
        cin>>moves;
        if (moves)
        {
            s.move();
            s1.move();
        }
        cout<<endl;
    display(s);
    display(s1);
    
    }

    return 0;
}