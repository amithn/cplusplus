
#include <iostream>
using namespace std;

/* Class example also demonstrates access specifiers */

class Calculator {
    public:
        int add(int first, int second) {
            return first + second;
        }

        int add(int first, int second, int third) {
            return first + second + third;
        }

};

int main() {
    Calculator c = Calculator();
    cout<<" Calculate sum :" << c.add(20, 10) << endl;
    cout<<" Calculate sum :" << c.add(20, 10, 5) << endl;
}