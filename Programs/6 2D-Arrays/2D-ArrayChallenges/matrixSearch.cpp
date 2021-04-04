//asked in Samsung, Expedia.

//works only for sorted matrix.
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int target;
    cin>>target;

    int mat[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }

    int r=0, c=m-1;

    bool found=0;
    while(r<n and c>=0){
        if(mat[r][c]==target){
            found=1;
            cout<<r<<" "<<c<<endl;
            break;    
        }

        if(mat[r][c]>target){
            c--;
        }

        else{
            r++;
        }
    }

    if(found){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}