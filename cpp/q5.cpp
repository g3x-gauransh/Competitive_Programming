#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int big = a>b?(a>c?a:c):(b>c?b:c) ;
    cout<<"The largest Number is "<<big<<endl;
    return 0;
}