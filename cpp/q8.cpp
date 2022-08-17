#include<iostream>
using namespace std;
class Cylinder{
    public:    
        float lenght;
        float height;
        float pi=3.14;

        float volume();
        float surface_area();
        float area();
};

float Cylinder::volume(){
    return lenght*height*pi*lenght;
}

float Cylinder::surface_area(){
    return ( (2*pi*lenght*lenght) + (2*pi*lenght*height));
}

float Cylinder::area()
{
    return pi*lenght*lenght;
}

int main()
{
    Cylinder c;
    //cout<<"Lenght:";
    cin>>c.lenght;
    //cout<<"Height:";
    cin>>c.height;
    cout<<"Surface Area:"<<c.surface_area()<<endl;
    cout<<"Volume:"<<c.volume()<<endl;
    cout<<"Area:"<<c.area()<<endl;
    return 0;
}