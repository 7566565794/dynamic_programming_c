using namespace std;
int longest_comm(char s1[],char s2[],int l1,int l2){
    int dp[l1+1][l2+1];
    for(int i=0;i<=l1;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=l2;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
     /*for(int i=0;i<=l1;i++){
        for(int j=0;j<=l2;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return dp[l1][l2];
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int l1;
        int l2;
        cin>>l1;
        cin>>l2;
        char s1[l1];
        char s2[l2];
        for(int i=0;i<l1;i++){
            cin>>s1[i];
        }
        // cout<<"first string="<<s1;
        for(int i=0;i<l2;i++){
            cin>>s2[i];
        }
        cout<<longest_comm(s1,s2,l1,l2)<<endl;
    }
	return 0;
}
