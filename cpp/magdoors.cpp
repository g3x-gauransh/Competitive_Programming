#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
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
		string s;
        cin>>s;
        //int n=s.length();

        int i=0;
        int count=0;
        while(s[i]!='0' && i<s.length())
            i++;

        while(i<s.length()){
            if(s[i]!=s[i+1]){
                count++;
            }
            i++;
        }
        cout<<count<<endl;
	}
	return 0;
}
