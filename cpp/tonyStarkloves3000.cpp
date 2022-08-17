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

int gcd(int a,int b){
    if(a==0)    
        return b;
    return gcd(b%a,a);
}

void SieveOfEratosthenes(int n, bool prime[],
                         bool primesquare[], int a[])
{
    for (int i = 2; i <= n; i++)
        prime[i] = true;
 
    for (int i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;
 
    prime[1] = false;
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    int j = 0;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            a[j] = p;

            primesquare[p * p] = true;
            j++;
        }
    }
}
 
int countDivisors(int n)
{
    if (n == 1)
        return 1;
 
    bool prime[n + 1], primesquare[n * n + 1];
 
    int a[n];
 
    SieveOfEratosthenes(n, prime, primesquare, a);

    int ans = 1;
 
    for (int i = 0;; i++) {
        
        if (a[i] * a[i] * a[i] > n)
            break;
 
        int cnt = 1; 
        while (n % a[i] == 0) 
        {
            n = n / a[i];
            cnt = cnt + 1; // incrementing power
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

int divisors[1000001];

int main()
{
    fast
    // for(int i=1;i<=1000000;i++){
    //     divisors[i]=countDivisors(i);
    // }
    
	T
	{
		int l,r,x;
        cin>>l>>r>>x;
        int ans=0;
        for(int i=l;i<=r;i++){
            if(gcd(countDivisors(i),3000)==x)
                ans++;
        }
        cout<<ans<<endl;
	}
	return 0;
}
