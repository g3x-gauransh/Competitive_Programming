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
	int n;
    cin>>n;

    char s[100];
    cin>>s;

    string ben="",kevin="";

    int i=0;
    // int j=0;
    // int count=0;
    while(i<n){
        // cout<<"s: "<<s<<" ";
        // cout<<"ben: "<<ben<<" ";
        // cout<<"kevin: "<<kevin<<" ";
        // cout<<endl;
        // count++;
        if(ben.empty()){
            ben=ben+s[i++];
            continue;
        }

        if(s[i]<=ben[ben.size()-1]){
            ben=ben+s[i];
            //i++;
            i++;
            //j++;
        }
        else{
            kevin=kevin+ben[ben.size()-1];
            ben=ben.substr(0,ben.size()-1);
        }
    }
    for(int i=ben.size()-1;i>=0;i--){
        kevin=kevin+ben[i];
    }
    char ans[kevin.length()];
    for(int i=0;i<kevin.length();i++){
        ans[i]=kevin[i];
    }
    // cout<<s<<endl;
    // cout<<ben<<endl;
     cout<<ans<<endl;
    // cout<<count<<endl;

	return 0;
}
