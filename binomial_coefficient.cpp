#include<bits/stdc++.h>
using namespace std;
long long int bino_coeff(long long int n,long long int k){
long long int dp[n+1][k+1];
    if(n<k){ //this condition u should not forget otherwise ur solution wont be accepted.
        return 0;
    }
    for(long long int i=0;i<=n;i++){
        for(long long int j=0;j<=min(i,k);j++){
            if(j==0 || j==i){
                dp[i][j]=1;
            }
            else{
                dp[i][j]=(dp[i-1][j-1]%1000000007+dp[i-1][j]%1000000007)%1000000007;
            }
        }
    }
    return dp[n][k];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int k;
        cin>>k;
        cout<<bino_coeff(n,k)<<endl;
    }
}
