#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	// T
	// {
        
	// }
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;

    int cost=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if((i<(n-1)) && a[i]==b[i+1]){
                    cost++;
                    i++;
                }
                else{
                    cost++;
                }
            }
        }
        cout<<cost<<endl;
	return 0;
}
