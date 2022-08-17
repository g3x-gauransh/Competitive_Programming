string ben="",kevin="";

    // int i=0;
    // int j=0;
    // int count=0;
    int i=0;
    while(!s.empty()){
        // cout<<"s: "<<s<<" ";
        // cout<<"ben: "<<ben<<" ";
        // cout<<"kevin: "<<kevin<<" ";
        // cout<<endl;
        // count++;
        if(ben.empty()){
            ben+=s[i];
            
            continue;
        }

        if(s[0]<=ben[ben.size()-1]){
            ben.append(s,0,1);
            //i++;
            s=s.substr(1);
            //j++;
        }
        else{
            kevin=kevin+ben[ben.size()-1];
            ben=ben.substr(0,ben.size()-1);
        }
    }
    for(int i=ben.size()-1;i>=0;i--){
        kevin=kevin+ben[i];
    }
    // cout<<s<<endl;
    // cout<<ben<<endl;
     cout<<kevin<<endl;
    // cout<<count<<endl;   