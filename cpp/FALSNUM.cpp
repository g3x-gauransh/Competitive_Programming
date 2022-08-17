#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	T
	{
        string a;
        cin>>a;
        string temp=a;
        int size=a.size();
        int flag=0;
        if(a[0]=='1'){
            flag=1;
        }
        string p="1";

        if(flag==1){
            a[0]='0';
            a=p+a;
        }
        else{
            a=p+a;
        }
        cout<<a<<endl;
	}
	return 0;
}
