#include<iostream>
using namespace std;
class a{
    int b;
    public: 
        a(){
            b=0;
            cout<<"Constructor Called"<<endl;
        }
        a(int p){
            b=p;
        }
        a(int p,int q){
            b=p+q;
        }
        int getans(){
            return b;
        }
};
int main(){
    a obj1,obj2(1),obj3(3,4);
    cout<<obj1.getans()<<" "<<obj2.getans()<<" "<<obj3.getans()<<endl;
    return 0;
}