#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int countdiv(int n)
{
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                count++;
            }
            else{
                count+=2;
            }
        }
    }
    return count;
}
int main()
{
	fast
	T
	{
        int a,b;
        cin>>a>>b;
        int ans;
        int diff=abs(a-b);
        if(diff==0){
            cout<<"-1"<<endl;
        }
        else{
            ans =countdiv(diff);
        }
        cout<<ans<<endl;
	}
	return 0;
}
