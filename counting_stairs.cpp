#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     long long int dp[100000];
    dp[0]=1;
    dp[1]=1;
    for(long long int i=2;i<=100000;i++){
        dp[i]=(dp[i-1]%1000000007+dp[i-2]%1000000007)%1000000007;
    }
    while(t--){
        int n;
        cin>>n;
   
    cout<<dp[n]<<endl;
    }
    return 0;
}
//please note here the solution is actually O(1) u are just 1 time computing
//all the values from 0 to 100000 and whenever asked u are just fetching
//the value which is really good so if ur program is giving timeout error u can 
// u can optimize it like this out of the box thinking.//very efficient solution.
