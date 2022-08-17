#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	T
	{
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        int c=INT_MAX;
        for(int i=0;i<n;i++){
            c=min(c,(a[0]+b[i])%n);
        }
        vector<int>p;
        for(int i=0;i<n;i++){
            int r=(a[0]+b[i])%n;
            if(r==c){
                p.push_back(i);
            }
        }
        vector<int> ans;
        if(p.size()==1){
            int f=p[0];
            int q=0;
            for(int i=f;i<n;i++,q++){
                ans.push_back((a[q]+b[i])%n);
            }
            for(int i=0;i<f;i++,q++){
                ans.push_back((a[q]+b[i])%n);
            }
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            int f1=p[0];
            int f2=p[1];
            int q=0;
            vector<int>ans1;
            vector<int> ans2;
            for(int i=f1;i<n;i++,q++){
                ans1.push_back((a[q]+b[i])%n);
            }
            for(int i=0;i<f1;i++,q++){
                ans1.push_back((a[q]+b[i])%n);
            }
            q=0;
            for(int i=f2;i<n;i++,q++){
                ans2.push_back((a[q]+b[i])%n);
            }
            for(int i=0;i<f2;i++,q++){
                ans2.push_back((a[q]+b[i])%n);
            }

            if(ans1<ans2)
            {
                for(int i=0;i<n;i++)
                    cout<<ans1[i]<<" ";
                cout<<endl;
            }
            else{
                for(int i=0;i<n;i++){
                    cout<<ans2[i]<<" ";
                }
                cout<<endl;
            }
        }
	}
	return 0;
}
