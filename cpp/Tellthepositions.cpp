#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        int roll;
        string name;
        int m1;
        int m2;
        int m3;
        int sum;
};

bool mysort(student a,student b){
    if(a.sum==b.sum){
        return a.roll<b.roll;
    }
    
    return a.sum>b.sum;
}

int main(){
    int n;
    cin>>n;
    vector<student>s(n);

    for(int i=0;i<n;i++){
        s[i].roll=i+1;
        cin>>s[i].name>>s[i].m1>>s[i].m2>>s[i].m3;
    }

    for(int i=0;i<n;i++){
        s[i].sum=s[i].m1+s[i].m2+s[i].m3;
    }

    sort(s.begin(),s.end(),mysort);

    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<s[i].name<<endl;
    }
    return 0;
}