#include<iostream>
using namespace std;
class student{
    string name;
    int roll_no;
    int marks;
    int percentage;

    public:
    
    void readdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll Number:";
        cin>>roll_no;
        cout<<"Enter marks:";
        cin>>marks;
        cout<<"Enter Percentage:"
        cin>>percentage;
    }
};
int main(){

    return 0;
}