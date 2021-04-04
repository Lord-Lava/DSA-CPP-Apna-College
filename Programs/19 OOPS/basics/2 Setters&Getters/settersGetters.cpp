//used to input and output (set and get) private data members.

#include <iostream>
                   
using namespace std;

class student{
    string name;
    
    public:

    int age;
    bool gender;

    //setter
    void setName(string s){
        name=s;
    }
    //getter
    void getName(string s){
        cout<<name<<endl;
    }

    void printInfo(){                       //Note that printInfo function also acts as a type of getter.
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }

};   

int main(){
   student arr[3];

   for (int i = 0; i < 3; i++)
   {
       string s;
       cout<<"Name = ";
       cin>>s;
       arr[i].setName(s);
       cout<<"Age = ";
       cin>>arr[i].age;
       cout<<"Gender = ";
       cin>>arr[i].gender;
   }

   cout<<endl;
   
   for(int i=0;i<3;i++){
       arr[i].printInfo();
   }
                   
   return 0;
}