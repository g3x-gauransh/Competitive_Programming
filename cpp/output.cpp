#include<bits/stdc++.h>
using namespace std;

// int fun(){
//     static int num=10;
//     return num--;
// }

int main(){
    //cout<<fun()<<endl;
    // for(fun();fun();fun()){
    //     cout<<fun()<<endl;
    // }
    // int fun={
    //     printf("C for loop ")
    // };
    // cout<<fun<<endl;
    // int x=5;
    // for(x=0;x<=fun;x++){
    //     printf("%x ",x);
    // }

    int a=130;
    char *ptr;
    ptr=(char*)&a;
    printf("%d",*ptr);
    return 0;
}