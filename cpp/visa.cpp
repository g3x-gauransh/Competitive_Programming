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
            int x1,x2,y1,y2,z1,z2;
            cin>>x1>>x2>>y1>>y2>>z1>>z2;
            if(x2>=x1){
                if(y2>=y1){
                    if(z2<=z1){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }
