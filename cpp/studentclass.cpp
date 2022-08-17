#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    float marks;
    float percentage;

    public:
        void readdata(){
            cout<<"Name:";
            cin>>name;
            cout<<"Roll No.:";
            cin>>roll;
            cout<<"Marks:(Out of 30)";
            cin>>marks;
        }

        void displaydata(){
            cout<<"Name:"<<name<<endl;
            cout<<"Roll No.:"<<roll<<endl;
            cout<<"Marks:"<<marks<<endl;
            cout<<"Percentage:"<<percentage<<endl;
        }
        void computedata(){
            percentage = (float)((marks*100)/30);
        }
}s[30];

int main(){
    for(int i=0;i<2;i++){
        s[i].readdata();
        s[i].computedata();
        s[i].displaydata();
    }
    return 0;
}