#include<bits/stdc++.h>
using namespace std;

// class Base{
//     public:
//         virtual void display(){
//             cout<<"Base Class"<<endl;
//         }
//         void show(){
//             cout<<"Base class show"<<endl;
//         }
// };
// class Child: public Base{
//     public:
//     void display(){
//         cout<<"Child class"<<endl;
//     }
//     // void show(){
//     //     cout<<"child class show"<<endl;
//     // }
// };
class test{
    const int x;
    public:
        test(int i):x(i){
            //x=i;
        }

    int getx(){
        return x;
    }
};

int main(){
    
    // Child ch;
    // Base &bs=ch;
    // bs.display();
    // ch.show();
    test t(10);
    cout<<t.getx();
    return 0;
}