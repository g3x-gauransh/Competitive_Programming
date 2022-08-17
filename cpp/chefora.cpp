#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T ll t;cin>>t;while(t--)
using namespace std;

const int N=1e5+1;

ll chefora[N];

ll ll_pow(ll base, ll exp)
{
    ll result = 1;
    while (exp>0)
    {
        if (exp % 2==1)
           result *= base;
        exp /= 2;
        base *= base ;
        base= base %MOD;
        result%=MOD;
    }
    return result%MOD;
}

void precompute(){
    for(ll i=1;i<N;i++){
        ll temp=i;
        ll count=0;
        while(temp>0){
            count++;
            temp/=10;
        }
        count--;
        temp=i;
        ll num=temp/10;
        temp=temp*ll_pow(10,count);
        ll rev=0;
        while(num>0){
            rev = rev*10 + num%10;
            num/=10;
        }

        temp+= rev;
        chefora[i]=temp;
    }
}

ll prefix[N];


int main()
{
	fast
    precompute();
    
    prefix[0]=0;

    for(int i=1;i<N;i++){
        prefix[i] = chefora[i]+ prefix[i-1];
        
    }
    // for(int i=0;i<=10;i++)
    //     cout<<prefix[i]<<" ";    
    
    // cout<<endl;

	T
	{
        ll r,l;
        cin>>l>>r;
        ll temp;
        
        ll sum = prefix[r]-prefix[l];

        temp = ll_pow(chefora[l],sum);

        temp %= MOD;
        cout<<temp<<endl;
	}
	return 0;
}