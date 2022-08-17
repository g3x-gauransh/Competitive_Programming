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

void SieveOfEratosthenes(int n, bool prime[],
                         bool primesquare[], ll a[])
{
    for (ll i = 2; i <= n; i++)
        prime[i] = true;
 
    for (ll i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;
 
    prime[1] = false;
 
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    ll j = 0;
    for (ll p = 2; p <= n; p++) {
        if (prime[p]) {
            a[j] = p;

            primesquare[p * p] = true;
            j++;
        }
    }
}
 
ll countDivisors(ll n)
{
    if (n == 1)
        return 1;
 
    bool prime[n + 1],primesquare[n*n+1];
 
    ll a[n];
 
    SieveOfEratosthenes(n, prime, primesquare, a);

    ll ans = 1;
 
    for (int i = 0;; i++) {
        
        if (a[i] * a[i] * a[i] > n)
            break;
 
        ll cnt = 1; 
        while (n % a[i] == 0) 
        {
            n = n / a[i];
            cnt = cnt + 1;
        }

        ans = ans * cnt;
    }
    
    if (prime[n])
        ans = ans * 2;
 
    else if (primesquare[n])
        ans = ans * 3;
 
    else if (n != 1)
        ans = ans * 4;
 
    return ans;
}

ll countOddSum(ll ar[], int n)
{
    ll temp[2] = { 1, 0 };
    ll result = 0, val = 0;
    for (int i = 0; i <= n - 1; i++) {
        val = ((val + ar[i]) % 2 + 2) % 2;
        temp[val]++;
    }
    result = (temp[0] * temp[1]);
    return (result);
}

ll countDivisors1(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
	fast
	// T
	// {
		
	// }
    int n;
    cin>>n;

    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    ll div[n];
    for(int i=0;i<n;i++){
        div[i]=countDivisors1(a[i]);
    }

    ll ans=countOddSum(div,n);
    cout<<ans<<endl;

    
	return 0;
}
