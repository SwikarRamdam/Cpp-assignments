// Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and function of the objects, and other useful functions. Use the classes to create objects in your program.
#include <iostream>
using namespace std;

class circle
{
private:
    int const pi = 3.14;
    int r, A, P;

public:
    void function()
    {
        cout << "Enter the radius of circle" << endl;
        cin >> r;
        A = pi * r * r;
        P = 2 * pi * r;
        cout << "Area and Perimeter of the circle are " << A << " and " << P << " respectively." << endl;
    }
};
class rectangle
{
private:
    int l, b, A, P;

public:
    void function()
    {
        cout << "Enter the length and breadth of rectangle" << endl;
        cin >> l >> b;
        A = l * b;
        P = 2 * (l + b);
        cout << "Area and Perimeter of the circle are " << A << " and " << P << " respectively." << endl;
    }
};

class triangle
{
private:
    int a, b, c, A, P, s;

public:
    void function()
    {
        cout << "Enter the base and height of triangle" << endl;
        cin >> a >> b >> c;
        P = (a + b + c);
        s = P / 2;
        A = s * (s - a) + s * (s - b) + s * (s - c);
        cout << "Area and Perimeter of the triangle are " << A << " and " << P << " respectively." << endl;
    }
};

int main()
{
    circle c;
    triangle t;
    rectangle r;
    char s;
    cout << "What is the shape of the object ?" << endl;
    cout << "r-rectangle" << endl
         << "t-triangle"<< endl
         << "c-circle" << endl;

    cin >> s;
    if (s == 'c')
        c.function();
    else if (s == 'r')
     r.function();
    else if (s == 't')
        t.function();
    else
        cout << "invalid command" << endl;
    return 0;
}