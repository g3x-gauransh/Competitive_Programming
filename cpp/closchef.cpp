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

bool search(vector<ll>a,ll k){
    int start=0;
    int end=a.size()-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(a[mid]==k)
            return true;
        else if(a[mid]>k)
            end=mid-1;
        else    
            start=mid+1;
    }
    return false;
}

int main()
{
	fast
	T
	{
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a.begin(),a.end());

        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;

        ll s1=a[0]*a[1];
        ll s2=a[n-1]*a[n-2];
        ll s3=a[n-1]*a[0];

        //cout<<s1<<s2<<s3<<endl;
	
        if(search(a,s1) && search(a,s2) && search(a,s3)){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    
    }
	return 0;
}
