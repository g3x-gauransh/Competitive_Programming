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
typedef pair<int,int> pi;

int firstUnique(string s){
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int ans=-1;

    for(int i=0;i<s.size();i++){
        if(m[s[i]]==1){
            ans=i+1;
            break;
        }
    }
    return ans;
}

int main()
{
	string s;

    cin>>s;
    int ans=firstUnique(s);
    cout<<ans<<endl;
	return 0;
}
