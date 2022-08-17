#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
 
// swap not needed
if((a > 0 && b > 0) ||
   (a < 0 && b < 0) ||
   (a > 0 && b < 0 ))
return false;
 
// swap needed
if(a < 0 && b > 0)
return true;
 
// swap not needed
if((a == 0 && b < 0) ||
   (a > 0 && b == 0))
return false;
 
// swap needed
if((a == 0 && b > 0) ||
   (a < 0 && b == 0))
return true;
 
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int negcount=0;
    int poscount=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<0)     
            negcount++;
        else    
            poscount++;
        a.push_back(x);   
    }
    cout<<negcount<<" "<<poscount<<endl;
    
    sort(a.begin(),a.end(),comp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int l=1;
    int r=negcount;

    while(l<n && r<n){
        swap(a[l],a[r]);
        l+=2;
        r+=2;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}