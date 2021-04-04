#include <iostream>
                   
using namespace std;

class student{
    public:                             //Access specifier (By Default Private)
    string name;
    int age;
    bool gender;                        //0-> Male 1-> Female

    void printInfo(){
        cout<<"Name = "<<name<<endl; 
        cout<<"Age = "<<age<<endl; 
        cout<<"Gender = "<<gender<<endl;
    }
};

int main(){
//    student a;
//    a.name="Snehil";
//    a.age=21;
//    a.gender=0;

//    cout<<"Name = "<<a.name<<endl; 
//    cout<<"Age = "<<a.age<<endl; 
//    cout<<"Gender = "<<a.gender<<endl;

    //Array of Objects
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"Name = ";
        cin>>arr[i].name;
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