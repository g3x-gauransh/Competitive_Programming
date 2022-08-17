#include<iostream>
using namespace std;


int main() {
    
   int i, j;
    int n;
    cin>>n;
    int m=(n/2)+1;
    for(i=1; i<=m; i++)
    {
        for(j=i; j<m; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=m; i>=1; i--)
    {
        for(j=i; j<=m; j++)
        {
            cout<<" ";
        }
        for(j=2; j<(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}