#include<iostream>

using namespace std;

int main(){
    int a=10;       //stored in stack statically.

    //declaring integers dynamically.
    int *p=new int();
    *p=10;

    cout<<p<<" "<<*p<<endl;
    delete(p);

    cout<<p<<" "<<*p<<endl;     //here p has become a dangling pointer as the memory it preciously pointed to has already been freed. 

    //declaring arrays dynamically.
    // int n;
    // cin>>n;

    p=new int[3];               //no need to declare p again as it is already present as a dangling pointer and hence can be reused.
    for(int i=0;i<3;i++){
        cin>>*p;            //or cin>>p[i]. Advantage of using this is that p's address don't need to be iterated in this case.
        p++;               //so p++ won't be needed. Also p-=3 is not needed in that case. 
    }

    p-=3;           //to bring back p to the starting address.

    for(int i=0;i<3;i++){
        cout<<*p<<" ";
        p++;
    }

    delete[]p;      //this format is used to deallocate/free the dynamic memory for an array.

    p=NULL;                 //now p is not pointing to any location
                           //and will get destroyed after the main function pops out of the stack after return 0.
    return 0;
}

//NOTE- If memory is not freed after use in DMA then it will lead to a memory leak
//i.e. there would be objects stored in the heap which can't be accessed by the running code.