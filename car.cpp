
#include <string>

class Vehicle {
    int numTyres; 
    int color;
    int type;  // Electric or Fuel 
    int doors;
    string numplate;

    int getNumTyres() {
        return numTyres;
    }
}



class Steering {

}

class FuelTank {
    int totalCapacity;
    int diameter;
    int fuelType; 

    int fill() {

    }

    int consume() {

    }

    int getStatus() {
    }
}

class Car: Vehicle {
    Steering s;
    FuelTank f;
    Dashboard dashboard;


}

int main() {
    Car car1;

}