//counting numbeer of ways to make a given sum
#include <bits/stdc++.h>
using namespace std;
int total_ways(int val[],int n,int sum){
    int dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));//initializing all the values with 0.
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(val[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]+dp[i][j-val[i-1]];
            }
        }
    }
    /*for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return dp[n][sum];
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
	    int sum;
	    cin>>sum;
	    cout<<total_ways(arr,n,sum)<<endl;
	}
	return 0;
}
