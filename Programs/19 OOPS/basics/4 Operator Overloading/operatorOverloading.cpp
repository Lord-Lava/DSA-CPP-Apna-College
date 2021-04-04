#include <iostream>
                   
using namespace std;

class student{
    string name;
    
    public:

    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }//default constructor

    student(string s, int a, bool g){
        name=s;
        age=a;
        gender=g;
        cout<<"Parameterised constructor"<<endl;
    }//parameterised constructor

    student(student &a){
        name = a.name;
        age=a.age;
        gender=a.gender;
        cout<<"Copy constructor"<<endl;
    }

    //Destructor
    ~student(){
        cout<<"Destructor called"<<endl;
    }

    
    void setName(string s){
        name=s;
    }
    
    void getName(string s){
        cout<<name<<endl;
    }

    void printInfo(){                       
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }

    //operator overloading
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }

};   

int main(){
    student a("Urvi",20,1);
    student b("Rahul",21,0);
    student c(a);
    
    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
                   
   return 0;
}