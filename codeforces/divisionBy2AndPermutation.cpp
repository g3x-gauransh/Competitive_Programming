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
	T
	{
		int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flg=1;
        set<int> s;
        for(int i=0;i<n;i++){
            while(a[i]>n){
                a[i]/=2;
            }
            while(s.find(a[i])!=s.end() && a[i]>0){
                a[i]/=2;
            }
            if(a[i]==0)
                flg=0;
            else{
                s.insert(a[i]);
            }
        }
        sort(a.begin(),a.end());

        bool flag=true;
        for(int i=0;i<n;i++){
            if(a[i]<i+1){
                flag=false;
                break;
            }
            else{
                while(a[i]>i+1){
                    a[i]/=2;
                }
                if(a[i]!=i+1){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==false)
            cout<<"NO"<<endl;
        else    
            cout<<"YES"<<endl;
	}
	return 0;
}
