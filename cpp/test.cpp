#include<iostream>
using namespace std;
int main(){
    int *ptr=new int;
    *ptr=7;
    delete ptr;
    cout<<*ptr<<endl;
    cout<<ptr;
    return 0;
}