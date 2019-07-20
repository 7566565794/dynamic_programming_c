#include <bits/stdc++.h>
using namespace std;
int min_cost(vector<vector<int>>v,int l1){
    int dp[l1][l1];
    dp[0][0]=v[0][0];
    // for(int i=0;i<l1;i++){
    //     dp[i][0]=v[i][0]+dp[i-1][0];
    // }
    
    for(int i=0;i<l1;i++){
        dp[0][i]=v[0][i];
    }
    for(int i=1;i<l1;i++){
        for(int j=0;j<l1;j++){
            if(j==0){
                dp[i][0]=max(dp[i-1][0]+v[i][j],dp[i-1][1]+v[i][j]);
            }
            else if(j==l1-1){
                dp[i][j]=max(dp[i-1][j]+v[i][j],dp[i-1][j-1]+v[i][j]);
            }
            else{
                dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]))+v[i][j];
            }
            
        }
    }
    int lar=dp[l1-1][0];
    for(int i=0;i<l1;i++){
        
        lar=max(lar,dp[l1-1][i]);
    }
    return lar;
    // return dp[l1-1][l1-1];
}
int main() {
	int t;
	cin>>t;

	for(int i=0;i<t;i++){
	    int l1;
	    cin>>l1;
	    vector<vector<int>>v(l1); 
	    for(int i=0;i<l1;i++){
	        for(int j=0;j<l1;j++){
	            int l2;
	            cin>>l2;
	            v[i].push_back(l2);
	            }
	    }
	    cout<<min_cost(v,l1)<<endl;
	   //for(int i=0;i<l1;i++){
	   //     for(int j=0;j<l1;j++){
	   //         cout<<v[i][j];
	   //         }
	   // }
	}
}
