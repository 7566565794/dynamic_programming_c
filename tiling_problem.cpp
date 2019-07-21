#include <iostream>
using namespace std;

long long int tiles(int n){
    long long int dp[n];
    dp[0]=1;
    dp[1]=2;
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n-1];
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<tiles(n)<<endl;
	}
	return 0;
}
