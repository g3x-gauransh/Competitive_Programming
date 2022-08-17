#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
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

        if(n%4==0){
            cout<<"YES"<<endl;
            vector<int>v1,v2;
            int f=0;
            int c=n/2;
            int a=1;
            int b=n;
            while(c){
                if(!f){
                    v1.push_back(a);
                    a++;
                    f=1;
                }
                else{
                    v1.push_back(b);
                    b--;
                    f=0;
                }
                c--;
            }

            for(int i=a;i<=b;i++)
                v2.push_back(i);


            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());

            for(auto i:v1){
                cout<<i<<" ";
            }
            cout<<endl;
            for(auto i:v2){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
