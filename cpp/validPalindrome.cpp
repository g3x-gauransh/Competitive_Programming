#include<bits/stdc++.h>
using namespace std; 
 
 bool isPalindrome(string s) {
        
        string ans="";
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                st.push(s[i]);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                st.push(s[i]+32);
            }
        }
        while(!st.empty()){
            char t=st.top();
            st.pop();
            ans=ans+t;
        }
        cout<<ans;
        for(int i=0;i<ans.size()/2;i++){
            if(ans[i]!=ans[ans.size()-i-1])
                return false;
        }
        return true;
    }
int main(){
    string s;
    cin>>s;

    cout<<isPalindrome(s);
    return 0;
}