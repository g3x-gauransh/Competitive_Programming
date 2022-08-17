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

int main()
{
	fast
	T
	{
		int n;
        cin>>n;
        string s;
        cin>>s;
        char minChar='z';
        int minPos=1;
        string ans(1,s[0]);
        // cout<<ans<<endl;
        for(int i=0;i<n;i++){
            if(s[i]<minChar){
                
                //cout<<"working"<<endl;
                if((minPos*2)>=(i+1)){
                    //cout<<"s[i]:"<<s[i]<<" ";
                    minChar=s[i];
                    //cout<<"minChar:"<<minChar<<" ";
                    minPos=i+1;
                    ans=s.substr(0,i+1);
                }
                else{
                    break;
                }
            }
        }
        //cout<<"Ans:"<<endl;
        string ans2=ans;
        reverse(ans2.begin(),ans2.end());
        cout<<ans+ans2<<endl;
	}
	return 0;
}
