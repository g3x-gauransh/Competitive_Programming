#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=1,y=1,z=1;
    cout<<(++x || ++y && ++z)<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}