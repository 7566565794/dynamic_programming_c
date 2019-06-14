#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n){
   int dp[n];
   for(int i=0;i<n;i++){
       dp[i]=1;
   }
   for(int i=1;i<n;i++){
       for(int j=0;j<i;j++){
           if(arr[j]<arr[i]){
               dp[i]=max(dp[i],dp[j]+1);
           }
       }
   }
     return *max_element(dp, dp+n);// this function 'max_element' is used to search for the maxi value present in the entire 
	// array. this function is present in bits/stdc++.h
}

  
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<lis(arr,n)<<endl;
	}
	return 0;
}
