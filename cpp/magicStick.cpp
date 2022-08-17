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

int main()
{
	fast
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cost[n];
    for(int i=0;i<n;i++)
        cin>>cost[i];
    
    vector<pair<int,int>> c;
    for(int i=0;i<n;i++){
        c.push_back({cost[i],i});
    }
	return 0;
}
