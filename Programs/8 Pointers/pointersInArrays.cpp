//arr is a constant pointer, thus pointer arithmetic can't be performed on it.
#include<iostream>

using namespace std;

int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;          //arr (name of array) behaves in a similar way as a pointer and points to the 0th element.

    //printing array using pointer ptr.
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;                  //ptr increments and points to the next index in the array.
    }

    //printing array using default arr pointer.
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;       //arr+i here and not arr+4i as arr is an indexing pointer and points to the next index rather than the next memory location.
        // arr++;                   illegal as arr is a constant pointer.        
    }



    return 0;
}