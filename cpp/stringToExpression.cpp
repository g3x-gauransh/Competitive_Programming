#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int num1=0,num2=0;
    bool flag=true;    //for selecting num1 or num2(num1==false num2==true)
    int p=1;
    int operationPos=-1;
    int ans;
    for(int i=n-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57){
            if(flag){
                num2+=(s[i]-48)*p;
            }
            else{
                num1+=(s[i]-48)*p;
            }
            p*=10;
        }
        else if(s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/'){
            flag=false;
            p=1;
            operationPos=i;
        }
    }
        if(s[operationPos]=='*'){
            ans=num1*num2;
        }
        if(s[operationPos]=='+'){
            ans=num1+num2;
        }
        if(s[operationPos]=='-'){
            ans=num1-num2;
        }
        if(s[operationPos]=='/'){
            ans=num1/num2;
        }
    cout<<ans<<endl;
    return 0;
}