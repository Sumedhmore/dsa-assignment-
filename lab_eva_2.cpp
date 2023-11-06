#include <bits/stdc++.h>
using namespace std;

class figure
{
public:
    virtual void draw() = 0;
};

class rectangle : public figure
{
public:
    void draw()
    {
        cout << "this is a rectangle" << endl;
    }
};
class triangle : public figure
{
public:
    void draw()
    {
        cout << "this is a triangle" << endl;
    }
};
class circle : public figure
{
public:
    void draw()
    {
        cout << "this is a circle" << endl;
    }
};

int main()
{
    rectangle r1;
    circle c1;
    triangle t1;
    r1.draw();
    c1.draw();
    t1.draw();
}