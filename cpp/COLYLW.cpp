// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,r,g,b;
//         cin>>n>>r>>g>>b;
//         long long avg;
//         avg=(r+g+b)/3;
//         if(r<avg || b<avg){
//             avg= min(r,b);
//         }
//         if(avg>n){
//             avg=n;
//         }
//         cout<<avg<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

bool good(ll n,ll mid,ll r,ll g,ll b){

    return (r-mid)+(b-mid)+g >=mid;
}

int main()
{
	fast
	T
	{
        ll n,r,g,b;
        cin>>n>>r>>g>>b;
        ll left=0;
        ll right=min(n,min(r,b));

        ll ans=0;
        while(left<=right){
            ll mid=(left+right)/2;
            if(good(n,mid,r,g,b)){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
