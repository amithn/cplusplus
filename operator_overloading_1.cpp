#include <iostream>    
using namespace std;    


class MyNumber    
{    
   private:    
      int value; 

   public:    
       MyNumber(int n) {
           value = n;
       }    

       MyNumber operator +(MyNumber m) {     
        // Our own logic on what should happen when someone adds (+) 2 MyNumber's
          value = value + m.value + 10;   
          return *this;  
       }    

       void print() {     
           cout<<"The value is: "<< value;     
       }    
};    


int main()    
{    
    MyNumber m1 = MyNumber(10);
    MyNumber m2 = MyNumber(20);

    m1 = m1 + m2;

    m1.print();
    
}    