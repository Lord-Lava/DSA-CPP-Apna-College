#include<iostream>

using namespace std;

int max(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}

bool pyT(int a, int b, int c){
    if(a==max(a,b,c) && a*a==b*b+c*c){
            return true;
        }
    else if(b==max(a,b,c) && b*b==a*a+c*c){
            return true;
        }
    else if(c==max(a,b,c) && c*c==a*a+b*b){
            return true;
        }
    else {
        return false;
    }
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