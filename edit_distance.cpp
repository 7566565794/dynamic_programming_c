#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int edit_dis(char s1[],char s2[],int l1,int l2){
    // cout<<l1<<""<<l2<<" "<<s1<<" "<<s2<<endl;
    int dp[l1+1][l2+1];
    for(int i=0;i<=l2;i++){
        dp[0][i]=i;
    }
    for(int i=0;i<=l1;i++){
        dp[i][0]=i;
    }
    //please take care of l1 and l2,l1 is for s1 and should come row wise and l2 is for s2 and should come column wise.
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
       }
    }
    return dp[l1][l2];

}
int main() {
    int t;
    cin>>t;
    while(t--){
        int l1;
        cin>>l1;
        int l2;
        cin>>l2;
        char s1[l1];
        char s2[l2];
        int count=0;
        cin>>s1;
        cin>>s2;
        // cout<<l1<<""<<l2<<" "<<s1<<" "<<s2<<endl;
        // cout<<count<<endl;
        cout<<edit_dis(s1,s2,l1,l2)<<endl;
    }
	return 0;
}
/* wrong way of taking the input if we take input like below our solution will be accepted reason coz 
when u are taking input techincally ur last character in the string will be null character so u have to take 1 more location 
as null best way to take input is above method just take through cin 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int l1;
	    int l2;
	    cin>>l1;
	    cin>>l2;
	    char str1[l1];
	    char str2[l2];
	    for(int i=0;i<l1;i++){// please dont take like this request for any charater even for longest common subseq
	        cin>>str1[i];
	    }
	    for(int i=0;i<l1;i++){
	        cin>>str2[i];
	    }*/
