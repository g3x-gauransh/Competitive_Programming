#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> freq(26,0);
    queue <char> q;
    while(1){
        char c;
        cin>>c;
        freq[c-'a']++;
        if(freq[c-'a']<=1){
            q.push(c);
        }
        else{
            break;
        }
    }
    while(!q.empty()){
        if(freq[q.front()-'a']==1){
            cout<<q.front()<<endl;
            break;
        }
        else{
            q.pop();
        }
    }
    return 0;
}