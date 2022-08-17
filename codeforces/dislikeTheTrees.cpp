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

vector<int> precompute(){
    vector<int> a;
    int i=1;
    while(true){
        if(a.size()==1001)
            break;
        if(i%3!=0 && i%10!=3){
            a.push_back(i);
        }
        i++;
    }
    return a;
}

int main()
{
	fast
    vector<int>ans;
    ans =precompute();
    T
	{
        int k;
        cin>>k;
        cout<<ans[k-1]<<endl;
	}
	return 0;
}
