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

int solve(vector<int> arr,int n){
    // if(n==1){
    //     return 2*arr[0];
    // }
    int time=arr[0];
    int prev=0;
    for(int i=0;i<n-1;i++){
        if(prev+arr[i]<=time){
            time+=arr[i];
            prev+=arr[i];
        }
        else{
            time+=(prev+arr[i]-time);
            time+=arr[i];
            prev+=arr[i];
        }
    }
    return time;
}

int main()
{
	fast
	T
	{
		int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int ans=solve(arr,n);
        cout<<ans<<endl;
	}
	return 0;
}
