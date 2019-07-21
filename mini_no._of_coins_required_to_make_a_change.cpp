#include <bits/stdc++.h>
using namespace std;

long long int min_coins(int val[],int n,int v){
    long long int dp[v+1];
    dp[0]=0;
    for(int i=1;i<=v;i++){
        dp[i]=INT_MAX;
    }
    for(int i=0;i<=v;i++){//here we will have sum from 0 to sum
        for(int j=0;j<n;j++){
            if(val[j]<=i){
                dp[i]=min(dp[i],1+dp[i-val[j]]);
            }
        }        
    }
    return dp[v];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int v;
	    cin>>v;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<min_coins(arr,n,v)<<endl;
	}
	return 0;
}
