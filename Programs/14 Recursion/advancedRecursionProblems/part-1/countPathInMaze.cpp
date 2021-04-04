#include<iostream>

using namespace std;

int countPathMaze(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }

    if(i>=n || j>=n){
        return 0;
    }

    return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);

}

int main(){
    int n,i,j;          //n->size of square matrix(Maze), (i,j) is the starting coordinate 
    cin>>n>>i>>j;

    cout<<countPathMaze(n,i,j);

    return 0;
}