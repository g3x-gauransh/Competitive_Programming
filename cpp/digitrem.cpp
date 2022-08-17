#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define EPS 1e-9
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	T
	{
        ll n,d;
        cin>>n>>d;
        
        vector<ll> digits;

        ll temp=n;
        ll count=0;

        while(temp>0){
            ll r=temp%10;
                digits.push_back(r);

            temp/=10;
        }
        reverse(digits.begin(),digits.end());
        ll pos=0;
        for(ll i=0;i<digits.size();i++){
            if(digits[i]==d)
            {
                pos=i;
                count++;
                break;
            }
        }

        if(count==0){
            cout<<"0"<<endl;
        }
        else{
            ll len=digits.size();

            // cout<<round(pow(10,len-pos-1))<<" ";
            
            ll clo=(d+1)*(ll)(pow(10,len-pos-1)+EPS);


            ll newnum=0;
            ll f=1;
            for(ll i=len-1;i>=pos;i--){
                newnum+=f*digits[i];
                f*=10;
            }

            ll sub=clo-newnum;
            f=1;
            ll ones=0;
            for(ll i=len-1;i>=0;i--){
                if(digits[i]==d){
                    ones+=1*f;
                }
                f*=10;
            }

            if(d==0){
                if(digits[len-1]!=d){
                    ones-=(digits[len-1]-1);
                }
                cout<<ones<<endl;

            }
            else if(d==9){
                
            }
            else{
                ll ans=min(ones,sub);
                cout<<ans<<endl;
            }
                cout<<clo<<" "<<newnum<<" ";
                cout<<ones<<" "<<sub<<endl;

            
        } 

    }
	return 0;
}
