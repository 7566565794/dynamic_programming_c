#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int palin_part(string s){
    int n=s.length();
    int dp[n][n];
    bool p[n][n];
    
    for(int i=0;i<n;i++){
        dp[i][i]=0;
        p[i][i]=true;
    }
    
    for(int l=2;l<=n;l++){
        for(int i=0;i<n-l+1;i++){//no. of places in which we have to fill
            int j=i+l-1;// finding column corresponding to i.
            
            if( l == 2 )
                p[i][j]=(s[i]==s[j]);
            else
                p[i][j]=(s[i]==s[j] && p[i+1][j-1]);
                
           if(p[i][j]==true)
                dp[i][j]=0;
            else{
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+1);
                }
            }
        }
    }
    return dp[0][n-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<palin_part(s)<<endl;
    }
}

// this approach is not so efficient approach and its time complexity is o(n^2)
