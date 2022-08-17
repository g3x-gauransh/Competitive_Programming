#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

vector<int> f(11,-1);

int fact(int n){
    if(n==2)    
        return 2;

    if(f[n]!=-1)    
        return f[n];

    return f[n]= n*fact(n-1);
}

int main()
{
	fast
	T
	{
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        
        if()
	}
	return 0;
}
