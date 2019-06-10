#include<iostream>
using namespace std;
  
int knapsack(int W, int wt[], int val[], int n) 
{ 

    int dp[n+1][W+1];
   for(int i=0; i<=n; i++){
       for(int j=0; j<=W; j++){
           if(i==0 || j==0)
                dp[i][j] = 0;
            else if(wt[i-1]>j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
 /*Here, we are using dp[i-1][j-wt[i-1]] coz if we take from the
 same row, there is a possibility that we are adding the 
 value that has already been taken
 for example, if you need max profit for 40, one way is 20, 20
 so if you go in the same row, youll take the same 20 twice,
 so if you take one from the current row and by j-wt[i-1] and
 the other 20 from the previous row, so that, that 20 was made
 when the weight 20 wsnt available*/

        /*check for 20 40 cell in the pic added*/
       }
   }
   return dp[n][W];
} 
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int W;
	    cin>>W;
	    int v[n],w[n];
	    for(int i=0; i<n; i++)
	        cin>>w[i];
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    cout<<knapsack(W,v,w,n)<<endl;
	}
	return 0;
}
