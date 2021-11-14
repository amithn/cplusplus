
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
            length = h;
            breadth = w;
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

        Square(int l) {
             length = l;
        }

        string name() {
            return "Square";
        }

        int area() {
            int area = length * length;
            return area;
        }  
};

class Triangle : public Shape {
    private:
         int height;
         int base;

    public:

        Triangle(int h, int b) {
             height = h;
             base = b;
        }

        string name() {
            return "Triangle";
        }

        int area() {
            int area = (base * height)/2;
            return area;
        }  
};

int main() {

  //  Without virtual functions

    // Rectangle rect = Rectangle(20,30);
    // Square square = Square(10);

    // cout<< "Area of this "<< rect.name() << " is "  << rect.area() << "\n";
    // cout<< "Area of this "<< square.name() << " is "  << square.area()<< "\n";

    // Using virtual functions
    Shape *shape1 = new Rectangle(20,30);
    Shape *shape2 = new Square(10);
    Shape *shape3 = new Triangle(10, 5);

    cout<< "Area of this "<< shape1->name() << " is "  << shape1->area()<< "\n";
    cout<< "Area of this "<< shape2->name() << " is "  << shape2->area()<< "\n";
    cout<< "Area of this "<< shape3->name() << " is "  << shape3->area()<< "\n";
}