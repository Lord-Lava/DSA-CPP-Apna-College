#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int currLen=0, maxLen=0;
    int st,maxSt;                   //st is analogous to currLen and maxSt is analogous to maxLen.
    // int i=0;  used in case you use while instead of for.

    //or while(1){
    for(int i=0;i<n;i++){
        if(arr[i] == ' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxSt=st;
            }
            
            st=i+1;             //i+1 since at ith index there is a space and the word is starting from i+1th index.
            currLen=0;
        }

        else{
            currLen++;
        }

        // if(arr[i]=='\0'){
        //     break;
        // }
        // i++;
    }
//} this bracket is for while loop.

    cout<<maxLen<<endl;

    for(int i=0;i<maxLen;i++){
        cout<<arr[maxSt+i];
    }

    cout<<"\n"<<maxSt<<endl;
    return 0;
}