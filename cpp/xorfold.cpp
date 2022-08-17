#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	T
	{
        int n,m;
        cin>>n>>m;
        string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='1')
                {
                    count++;
                }
            }
        }
        if(count%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
	}
	return 0;
}
