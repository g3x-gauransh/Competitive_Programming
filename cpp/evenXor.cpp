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

vector<int> nos;

void precompute(){
    nos.push_back(0);
    for(int i=3;i<1048576;i++){
        int temp=i;
        int count=0;
        while(temp>0){
            int r=temp%2;
            if(r==1)
                count++;
            temp/=2;
        }
        if(!(count&1))
            nos.push_back(i);
    }
}

int main()
{
	fast
    precompute();
	T
	{
		int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<nos[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
