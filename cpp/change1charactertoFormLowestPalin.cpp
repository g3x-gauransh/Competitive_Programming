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

string palin(string temp){
    // string s=temp;
    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='a')
    //         continue;
    //     else{
    //         s[i]='a';
    //         return s;
    //     }
    // }
    // return "IMPOSSIBLE";
        string s=temp;
        int n = temp.size();
        if(n==1) return "IMPOSSIBLE";
        for(int i=0;i<(n/2);i++){
            if(temp[n-i-1]!='a'){
                temp[i] = 'a';
                return temp; 
            }
        }
        temp[n-1] = 'b';
        if(s<temp)
            return "IMPOSSIBLE";
        return temp;
}

int main()
{
	string s;
    cin>>s;
    string ans=palin(s);
    cout<<ans<<endl;
	return 0;
}
