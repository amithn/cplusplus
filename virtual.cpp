
#include <iostream>
#include <string>

using namespace std;

class Shape {
    public:
        virtual string name() = 0;
        virtual int area() = 0;
    };

class Rectangle : public Shape {
    private:
        int length;
        int breadth;

    public:

        Rectangle(int h, int w) {
            this->length = h;
            this->breadth = w;
        }

        string name() {
            return "Rectangle";
        }
    
        int area() {
            int area = length * breadth;
            return area;
        }
};

class Square : public Shape {
    private:
         int length;

    public:

        Square(int length) {
             this->length = length;
        }

        string name() {
            return "Square";
        }

        int area() {
            int area = length ^ 2;
            return area;
        }  
};

int main() {

    // Without virtual functions

    Rectangle rect = Rectangle(20,30);
    Square square = Square(10);

    cout<< "Area of this "<< rect.name() << " is "  << rect.area() << "\n";
    cout<< "Area of this "<< square.name() << " is "  << square.area()<< "\n";

    // Using virtual functions
    Shape *shape1 = new Rectangle(20,30);
    Shape *shape2 = new Square(10);

    cout<< "Area of this "<< shape1->name() << " is "  << shape1->area()<< "\n";
    cout<< "Area of this "<< shape2->name() << " is "  << shape2->area()<< "\n";
}