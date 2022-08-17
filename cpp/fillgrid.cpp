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
        int n;
        cin>>n;
        int a[n][n];

        if(n==2){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=-1;  
                }
            }   
        }
        else{
            if(n%2){
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(i==j)
                            a[i][j]=1;
                        else
                            a[i][j]=-1;
                    }
                }
            }
            else{
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(i==j)
                            a[i][j]=-1;
                        else
                            a[i][j]=1;
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";       
            }
            cout<<endl;
        }
	}
	return 0;
}
