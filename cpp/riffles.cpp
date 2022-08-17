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

vector<int> nextPos;

void decompose(int src,vector<int>& cycle,vector<bool>& visited){
    if(visited[src])
        return;
    visited[src]=1;

    cycle.push_back(src);
    decompose(nextPos[src],cycle,visited);
}

int main()
{
	fast
	T
	{
		int n;
        int k;
        cin>>n>>k;
        nextPos.resize(n+1);
        vector<int> arr(n+1,0);
        vector<bool>visited(n+1,0);

        int index=1;
        for(int i=1;i<=n;i+=2){
            nextPos[i]=index++;
        }
        for(int i=2;i<=n;i+=2){
            nextPos[i]=index++;
        }

        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                vector<int> cycle;
                decompose(i,cycle,visited);
                int len=cycle.size();
                for(int j=0;j<len;j++){
                    arr[cycle[(j+k)%len]]=cycle[j];
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
