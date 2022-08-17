#include<iostream>
using namespace std;
class cop{
    int a,b;
    public:

        cop(int x,int y){
            a=x;
            b=y;
        }
        cop(const cop &c1){
            a=c1.a;
            b=c1.b;
        }
        void getans(){
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    cop p1(2,3);
    cop p2=p1;
    p1.getans();
    p2.getans();
    return 0;
}