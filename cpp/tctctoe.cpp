#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	T
	{
        string s[3];
        for(int i=0;i<3;i++){
            cin>>s[i];
        }
        int counto=0,countx=0,wino=0,winx=0,c=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){   
                if(s[i][j]=='X')
                    countx++;
                else if(s[i][j]=='O')
                    counto++;
                else
                    c++;
            }
        }
        // for x:
        if(s[0][0]=='X' &&s[0][1]=='X' &&s[0][2]=='X')
            winx=1;
        if(s[1][0]=='X' &&s[1][1]=='X' &&s[1][2]=='X')
            winx=1;
        if(s[2][0]=='X' &&s[2][1]=='X' &&s[2][2]=='X')
            winx=1;

        if(s[0][0]=='X' &&s[1][0]=='X' &&s[2][0]=='X')
            winx=1;
        if(s[0][1]=='X' &&s[1][1]=='X' &&s[2][1]=='X')
            winx=1;
        if(s[0][2]=='X' &&s[1][2]=='X' &&s[2][2]=='X')
            winx=1;

        if(s[0][0]=='X' &&s[1][1]=='X' &&s[2][2]=='X')
            winx=1;
        if(s[0][2]=='X' &&s[1][1]=='X' &&s[2][0]=='X')
            winx=1;
        
        // for 0
        if(s[0][0]=='O' &&s[0][1]=='O' &&s[0][2]=='O')
            wino=1;
        if(s[1][0]=='O' &&s[1][1]=='O' &&s[1][2]=='O')
            wino=1;
        if(s[2][0]=='O' &&s[2][1]=='O' &&s[2][2]=='O')
            wino=1;

        if(s[0][0]=='O' &&s[1][0]=='O' &&s[2][0]=='O')
            wino=1;
        if(s[0][1]=='O' &&s[1][1]=='O' &&s[2][1]=='O')
            wino=1;
        if(s[0][2]=='O' &&s[1][2]=='O' &&s[2][2]=='O')
            wino=1;

        if(s[0][0]=='O' &&s[1][1]=='O' &&s[2][2]=='O')
            wino=1;
        if(s[0][2]=='O' &&s[1][1]=='O' &&s[2][0]=='O')
            wino=1;

        //cout<<"wo="<<wino<<" "<<"wx="<<winx<<endl;
        //cout<<"cx="<<countx<<" "<<"co="<<counto<<" c="<<c<<endl;
        if((winx==1 && wino==1) || (countx-counto<0)|| (countx-counto>1))
            cout<<"3"<<endl;
        else if(countx==0 && counto==0 && c==9)
            cout<<"2"<<endl;
        else if(winx==1 && wino==0 && countx>counto)
            cout<<"1"<<endl;
        else if(wino==1 && winx==0 && countx==counto)
            cout<<"1"<<endl;
        else if(winx==0 && wino==0 && c==0)
            cout<<"1"<<endl;
        else if(winx==0 && wino==0 && c>0)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }  
    return 0; 
}
