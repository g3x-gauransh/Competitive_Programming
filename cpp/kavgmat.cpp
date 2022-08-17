#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

vector <vector<int> > a;
int getsum(int y1,int x1,int d){
    if(d==0)
        return 0;
    int y2=d+y1-1, x2=d+x1-1;
    return a[y2][x2] - a[y2][x1-1] -a[y1-1][x2] +a[y1-1][x1-1];
}

int main()
{
	fast
	T
	{
        int n,m,k,i,j;
        cin>>n>>m>>k;
        a.clear();
        a.resize(n+1,vector <int> (m+1));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++){
                a[i][j] += (a[i][j-1] +a[i-1][j] - a[i-1][j-1]);
            }
        }
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=m;j++){
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int max_poss_len =min( n-i+1 ,m-j+1 );  
                int l=0;
                int r=max_poss_len;
                int mid;
                while(l<r){
                    mid= (l+r+1)/2;

                    if(k > (getsum(i,j,mid)) / (mid*mid))
                        l=mid;
                    else
                        r=mid-1;
                }
                ans += max_poss_len-1;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
