#include <iostream>
                   
using namespace std;

class Ground{
    int Rooms;
protected:
    void put();
public:
    void get();
};
class Middle: private Ground{       //all properties of ground gets privately inherited in Middle and can't be further inherited by other classes
    int Labs;
public:
    void Take();
    void Give();
};
class Top: public Middle{
    int Roof;
public:
    void In();
    void Out();
};

int main(){
   //Question1 -> Type of Inheritance ? (Multilevel)
   //Question2 -> Write the names of all the members, which are directly accessible by the member function Give() of class Middle.
   //Ans-> Data Members: Labs. Member Functions: Put(),Get(),Take(),Give().
   //Question3 -> Write the names of all the members, which are directly accessible by the member fucntion Out() of class Top.
   //Ans-> Data Members: Roof. Member Functions: In(),Out(),Take(),Give(). Note-> can't access member funcitons of Ground as it is privately inherited in Middle.                
   //Question4 -> Write the names of all the members, which are directly accessible by the object T of class Top declared in main() funtion.
   //Ans-> Take(), Give(), In(), Out(). but not Roof as it is private and access is happening from outside of the class.
   
   Top T;
   
   return 0;
}