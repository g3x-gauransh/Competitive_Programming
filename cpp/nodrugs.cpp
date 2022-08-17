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

int main()
{
	fast
	T
	{   
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
		int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]);
        }
        bool flag=false;

        int f=a[n-1];
        if(f==mx){
            flag=true;
        }
        else{
            if(k>0){
                int count=1;
                while(f<=mx && count<l){
                    f+=k;
                    count++;
                }

                if(f>mx)
                    flag=true;
            }
            else{
                flag=false;
            }
        }
        
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
	}
	return 0;
}
