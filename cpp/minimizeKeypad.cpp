#include<bits/stdc++.h>
using namespace std;

bool comp(pair<char,int> &a,pair<char,int>&b){
    return a.second > b.second;
}

int solve(string s){
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    vector<pair<char,int>>arr;
    for(auto it: m){
        arr.push_back(it);
    }
    sort(arr.begin(),arr.end(),comp);
    int i=1;
    int ans=0;
    for(auto it:arr){
        if(i>18){
            int temp=it.second*3;
            ans+=temp;
        }
        else if(i>9){
            int temp=it.second*2;
            ans+=temp;
        }
        else{
            ans+=it.second;
        }
        i++;
    }
    return ans;
}

int main()
{
	string s;
    cin>>s;
    int ans=solve(s);
    cout<<ans<<endl;
	return 0;
}
