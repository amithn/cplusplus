
#include <iostream>
using namespace std;

/* Class example also demonstrates access specifiers */

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        int test = 2;

        Rectangle(int h, int w) {
            this->length = h;
            this->breadth = w;
        }
    
        int area() {
            return length * breadth;
        }
};

int main() {
    Rectangle r1 = Rectangle(10,20);
    cout<< "area is "<< r1.area() << "\n";
    cout<< "value of public member = " << r1.test;
}