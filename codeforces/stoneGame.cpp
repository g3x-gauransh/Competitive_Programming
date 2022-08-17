#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
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
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.pb(x);
        }

        int min=INT_MAX;
        int max=INT_MIN;
        int maxpos;
        int minpos;

        for(int i=0;i<n;i++){
            if(a[i]<min)
                {   min=a[i];
                    minpos=i;
                }

            if(a[i]>max)
                {   max=a[i];
                    maxpos=i;
                }
        }
        //debug
        //
        int diff=abs(minpos-maxpos);
        int minright=0;
        int maxright=0;
        if(minpos>=n/2)
            {   minpos=n-minpos-1;
                minright=1;
            }
        if(maxpos>=n/2)
        {   maxpos=n-maxpos-1;
            maxright=1;
        }
        //cout<<"max:"<<maxpos<<" min:"<<minpos<<" diff:"<<diff<<endl;
        int ans=0;
        if(minpos<=maxpos){
            ans+=(minpos+1);
            min=-1;
        }    
        else{
            ans+=(maxpos+1);
            max=-1;
        }
        if(min==-1){
            if(diff<=maxpos){
                ans+=diff;
            }
            else{
                ans+=(maxpos+1);
            }
        }
        else{
            if(diff<=minpos){
                ans+=diff;
            }
            else{
                ans+=(minpos+1);
            }
        }
        cout<<ans<<endl;

	}
	return 0;
}
