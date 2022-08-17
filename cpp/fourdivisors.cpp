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

int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           int count=2;
            int temp=nums[i]+1;
            int flag=1;
            for(int j=2;j*j<nums[i];j++){
                //cout<<"working";
                if(count>4){
                    flag=0;
                    break;
                }
                if(nums[i]%j==0){
                    temp+=j;
                    temp+=(nums[i]/j);
                    count+=2;
                }
            }
            cout<<nums[i]<<":"<<temp<<" "<<count<<endl;
            if(count<4)
                flag=0;
            if(flag){
                ans+=temp;
            }
        }
        return ans;
    }

int main()
{
	fast
    int n;
    cin>>n;
	vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=sumFourDivisors(a);
    cout<<ans<<endl;
	return 0;
}
