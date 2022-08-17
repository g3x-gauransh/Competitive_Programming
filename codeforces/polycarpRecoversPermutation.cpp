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
        list<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        if(v[0]!=maxi || v[n-1]!=maxi){
            cout<<"-1"<<endl;
        }
        else{
            list<int> l;
            while(!v.empty()){
                if((*v.begin())<(*v.end())){
                    
                }
            }

        }

        
	}
	return 0;
}
