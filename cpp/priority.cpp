#include <bits/stdc++.h>

using namespace std;

struct process{
    int bt;
    int prio;
    int pid;
};

bool comp(process a,process b){
    return a.prio<b.prio;
}

void avgTime(process p[],int n){
    vector<int> tat(n);
    vector<int> wt(n);
    vector<int> ct(n);
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=p[i].bt;
        ct[i]=sum;
    }

    for(int i=0;i<n;i++){
        tat[i]=ct[i]; 
    }

    for(int i=0;i<n;i++){
        wt[i]=tat[i]-p[i].bt;
    }

    int total_tat=0,total_wt=0;
    for(int i=0;i<n;i++){
        total_wt+=wt[i];
        total_tat+=tat[i];
    }
    cout<<"Avg tat:"<<(float)total_tat/n<<endl;
    cout<<"Avg wt:"<<(float)total_wt/n;
}

void solve(process p[],int n){
    sort(p,p+n,comp);
    
    cout<<"Order of scheduling"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" ";
    }
    cout<<endl;

    avgTime(p,n);
}

int main(){
    int n;
    cout<<"Enter number of process:"<<endl;
    cin>>n;
    process p[n];
    cout<<"Enter bt and priority:"<<endl;
    for(int i=0;i<n;i++){
        cin>>p[i].bt>>p[i].prio;
        p[i].pid=i;
    }

    solve(p,n);
    return 0;
}