//matrix chain multiplication
#include<bits/stdc++.h>
using namespace std;
int matrix_mul(int arr[],int n){
    int dp[n][n];
    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }
    for(int l=2;l<n;l++){
        for(int i=0;i<n-l+1;i++){
            int j=i+l-1;
            dp[i][j]=INT_MAX;
            for(int k=i;k<j;k++){
                int q=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(q<dp[i][j]){
                    dp[i][j]=q;
                }
            }
        }
    }
    return dp[1][n-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
        cout<<matrix_mul(a,size)<<endl;
    }
}
// code is really simple but need to unders
