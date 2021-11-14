
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/* Class example also demonstrates access specifiers */

class Petrol {
    private: 
        int litres;

    public:
        Petrol(int l) {
            litres = l;
        }

        int fill() {
            return litres;
        }     
};


class Car {

    private:
        string name;
        int fuel;
    
    public:

        Car(string name, int fuel) {
            this->name = name;
            this->fuel = fuel;
        }

        int checkFuelLevel() {
            return fuel;
        }

        Car operator + (Petrol &p) {
            fuel = fuel + p.fill();
            return *this;
        }
};


int main() {
    Car benz = Car("Mercedes Benz", 20);
    

    // Check fuel in the Benz
    cout<<"Fuel in the Benz before is: "<< benz.checkFuelLevel() << " Litres" << endl;

    Petrol p = Petrol(10);

    // Adding fuel to the car, using '+' symbol is normally not possible with C++, but since we have overloaded the operator 
    // '+' for the user defined types Car (with Petrol) we are able to use the below expression.
    benz = benz + p;
    
    cout<<"Fuel in the Benz after is: "<< benz.checkFuelLevel() << " Litres" << endl;
}