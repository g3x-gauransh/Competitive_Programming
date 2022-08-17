#include<iostream>
using namespace std;

int result=0;

bool isSafe(int n,int i,int j){
    return i<n && j<n && i>=0 && j>=0;
}

void RatInMaze(int **maze,int ** visited,int n,int i,int j){
    if(maze[n-1][n-1]==1){
        return ;
    }
    if(i==n-1 && j==n-1){
        result++;
        return;
    }
    if(!isSafe(n,i,j)){
        return ;
    }

    visited[i][j]=1;

    //up
    if(isSafe(n,i-1,j) && maze[i-1][j]==0 && visited[i-1][j]==0){
        RatInMaze(maze,visited,n,i-1,j);
    }
    //down
    if(isSafe(n,i+1,j) && maze[i+1][j]==0 && visited[i+1][j]==0){
        RatInMaze(maze,visited,n,i+1,j);
    }
    //right
    if(isSafe(n,i,j+1) && maze[i][j+1]==0 && visited[i][j+1]==0){
        RatInMaze(maze,visited,n,i,j+1);
    }
    //left
    if(isSafe(n,i,j-1) && maze[i][j-1]==0 && visited[i][j-1]==0){
        RatInMaze(maze,visited,n,i,j-1);
    }

    visited[i][j]=0;
}

int main(){
    int n;
    cin>>n;
    int ** input= new int*[n];
    int **visited = new int*[n];
    for(int i=0;i<n;i++){
        input[i]=new int[n];
        visited[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>input[i][j];
            visited[i][j]=0;
        }
    }

    RatInMaze(input,visited,n,0,0);
    cout<<result<<endl;
    return 0;
}