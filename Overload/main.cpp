#include <iostream>

using namespace std;

int add(int i1, int i2) {
    return i1 + i2;
}

float add(float f1, float f2) {
    return f1 + f2;
}

struct Point {
    float x, y;

    Point(float x = 0, float y = 0) : x{ x }, y{ y } {}

    void Add(Point p) {
        x += p.x;
        y += p.y;
    }

    void print() {
        cout << x << " " << y << endl;
    }
};


// ew i hate this so much
Point operator + (Point p1, Point p2) {
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    return result;
}

// actual vomit why would you do this
Point operator - (Point p1, Point p2) {
    Point result;
    result.x = p1.x * p2.x;
    result.y = p1.y * p2.y;

    return result;
}

// like i understand why but ew
bool operator < (Point p1, Point p2) {
    return p1.x < p2.x && p1.y < p2.y;
}


int main()
{
    //cout << add(55, 345) << endl;
    //cout << add(3.1f, 8.1f) << endl;

    Point p1(1.6f, 3.9f);
    Point p2(9.1f, 7.3f);

    Point p3 = p1 + p2;
    p3.print();
    
    Point p4 = p3 - p1;
    p4.print();

    cout << (p1 < p4) << endl;
}
