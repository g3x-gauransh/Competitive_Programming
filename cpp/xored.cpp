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
		int n,x;
        cin>>n>>x;
        if(n==1){
            cout<<x<<endl;
            continue;
        }    
        vector<int> a(n);
        int temp_xor=0;
        for(int i=0;i<n-1;i++){
            a[i]=i;
            temp_xor^=i;
        }
        int last=temp_xor^x;
        int setBit=(1LL<<18);

        if(last>=(n-1) && last<=500000)
            a[n-1]=last;
        else{
            a[n-1]=last^setBit;
            if((a[0]^setBit)==a[n-1])
                a[1]^=setBit;
            else
                a[0]^=setBit;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
