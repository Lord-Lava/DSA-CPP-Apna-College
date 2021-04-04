#include<iostream>

using namespace std;

bool isPalindrome(int n,char* arr){

    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }
    // int i=0;
    // while(arr[i]!='\0'){
    //     if(arr[i]!=arr[n-i-1]){
    //         return false;
    //         }
    //         i++;
    // }

    return true;
}

int main(){
    int n;
    cin>>n;

    char arr[n+1];

    cin>>arr;

    if(isPalindrome(n,arr)){
        cout<<arr<<" is Palindrome"<<endl;
    }
    else{
        cout<<arr<<" is not palindrome"<<endl;
    }

    return 0;
}