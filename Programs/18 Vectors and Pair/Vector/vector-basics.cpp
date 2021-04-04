#include <iostream>
#include <vector>

using namespace std;

int main(){
    //declaration

    //M-1
    
    //vector<data-type> name-of-vector;
    vector<int> v;

    //M-2

    //vector<data-type> name-of-vector (number-of-elements,each-element-value);

    vector<int> v2 (3,50); // allocates a vector of size 3 with every element as 50
    // 50 50 50

    //insertion

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //display / traversal

    //M-1

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }// 1 2 3

    //M-2

    vector<int>::iterator it;
    for (it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl; //since iterator 'it' is a pointer, thus to display the value pointed by it we have to dereference it with a *   
    }// 1 2 3

    //M-3
    // this method is only used for displaying the elements and can't be used for traversal

    for(auto element:v){        //auto keyword automatically identifies and assigns the data type as per the input
        cout<<element<<endl;
    }

    //pop_back function -> removes the last element of the vector

    v.pop_back(); // 1 2

    return 0;
}