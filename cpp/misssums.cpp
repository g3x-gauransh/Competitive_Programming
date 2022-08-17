#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	T
	{
		int n;
        cin>>n;
        vector<int> v;
        for(int i=1;i<=100000;i++){
            if(i&1){
                v.push_back(i);
                n--;
            }
            if(n<=0)
                break;
        }

        for(auto it:v)
            cout<<it<<" ";
        cout<<endl;
	}
	return 0;
}
