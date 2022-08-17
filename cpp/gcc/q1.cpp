using namespace std;
#include <string>
#include <iostream>

int solution(int n){
    // code here
    int first=n/3;
    // int second= first*2;

    int mod=n%3;

    if(mod==2)
        mod=1;

    return 2*first+mod;
}

/*  Do not edit below code */
int main() {
	int n;
	cin >> n;	
    int answer=solution(n);
	cout << answer << endl;	
}