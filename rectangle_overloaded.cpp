
#include <iostream>
using namespace std;

/* Class example also demonstrates access specifiers */

class Rectangle {
    private:
        int length;
        int breadth;
        

    public:
        int test;

        // Constructor
        Rectangle(int h, int w) {
            length = h;
            breadth = w;
        }
    
        int area() {
            int area = length * breadth;
            return area;
        }


        int operator +(Rectangle m) {     
        // Our own logic on what should happen when someone adds (+) 2 MyNumber's
          int total_area = area() + m.area();
          return total_area;  
       }    


        void draw() {
            cout<< "This will draw a rectangle with length "<< length << " and breadth " << breadth << endl;
        }
};

int main() {
    Rectangle r1 = Rectangle(10,20);
    Rectangle r2 = Rectangle(10,20);

    int total_area = r1 + r2;
    cout<< "Total area of 2 Rectangles is : " << total_area << endl;

}