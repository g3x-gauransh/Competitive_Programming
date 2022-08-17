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

ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
	fast
	T
	{
		int n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll arrgcd=arr[0];
        for(int i=0;i<n;i++){
            arrgcd=gcd(arr[i],arrgcd);
        }
        if(arrgcd==1){
            //cout<<arrgcd<<endl;
            int num1=arr[0];
            int num2;
            for(int i=1;i<n;i++){
                if(gcd(num1,arr[i])==1){
                    num2=arr[i];
                }
            }
            int count1=0;
            int count2=0;
            for(int i=0;i<n;i++){
                if(gcd(num1,arr[i])!=1)
                    count1++;
                if(gcd(num2,arr[i])!=1)
                    count2++;
            }
            if(count1==n-1 || count2==n-1){
                cout<<"1"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        else{
                cout<<n<<endl;
        }
        
	}
	return 0;
}
