#include<iostream>

using namespace std;


bool pyT(int a, int b, int c){
  int x = max(a,max(b,c));
  int y,z;

  if(x==a){
      y=b;
      z=c;
  }
  else if(x==b){
      y=a;
      z=c;
  }
  else{
      y=a;
      z=b;
  }

  if(x*x==y*y+z*z)
    return true;
    else
    return false; 
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(pyT(a,b,c)){
        cout<<"Pythagorean triplet";
    }
    else{
        cout<<"Not a pythagorean triplet";
    }

    return 0;
}