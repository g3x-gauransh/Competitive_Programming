#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5]={{1,2,3,4,5},{4,5,6,7,8},{7,8,9,0,1},{1,2,3,4,5},{4,5,6,7,8}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    int r=4;
    int c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==c && j==r){
                cout<<arr[i][j]<<" ";
                c++;
                r--;
            }
        }
    }
    return 0;
}