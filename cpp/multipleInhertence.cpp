#include<iostream>

using namespace std;
class A{
    public:
    int x;
    A(){
        x=4;
    }
};

class B{
    public:
    int y;
    B(){
        y=3;
    }
};

class C:public A,public B{
    int z;
    
    public:
    C(){
        z=x+y;
    }
        void display(){
            cout<<z<<endl;
        }
};

int main(){
    C obj;
    obj.display();
    return 0;
}