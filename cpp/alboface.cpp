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

ll highestPowerof2(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p);
}

bool power(ll n){
    if(n!=0 && (n & (n-1))==0)
        return true;
    else
        return false;
}

void solve(){
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"Alice"<<endl;
        return ;
    }
    if(n==2){
        cout<<"Bob"<<endl;
        return;
    }

    if(n%2==0){
        if(power(n+2)==true){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
        return;
    }
    if(n%2!=0){
        if(power(n+1)==true){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
        return;
    }
    return;
}

int main()
{
	fast
	T
	{
        // ll n;
        // cin>>n;

        // // ll x=highestPowerof2(n);

        // // ll diff=n-x;    
        // // //cout<<diff<<" "<<x<<" ";

        // if(n==1){
        //     cout<<"Alice"<<endl;
        // }
        // else if(n==2)
        //     cout<<"Bob"<<endl;
        // // else{
        // //     if(diff%2)
        // //         cout<<"Alice"<<endl;
        // //     else
        // //         cout<<"Bob"<<endl;
        // // }
        // else{
        //     if(n%2==0){
        //         if(pow(n+2)){
        //             cout<<"Bob"<<endl;
        //         }
        //     else
        //         cout<<"Alice"<<endl;
        //     }
        //     else{
        //         if(pow(n+1))
        //             cout<<"Alice"<<endl;
        //         else
        //             cout<<"Bob"<<endl;
        //         }

        // }
        
        solve();
	}
	return 0;
}
