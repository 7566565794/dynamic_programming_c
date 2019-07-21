/*
1
8
1 5 8 9 10 17 17 20 output ==22
1
2 1 1 
output 6
*/
#include <bits/stdc++.h>
using namespace std;

int cutting_rod(int val[],int n){
    int dp[n+1];
    dp[0]=0;
    
    for(int i=1;i<=n;i++){
        dp[i]=INT_MIN;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            dp[i]=max(dp[i],val[j]+dp[i-j-1]);
        }
    }
    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
    return dp[n];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<cutting_rod(arr,n)<<endl;
	}
	return 0;
}
