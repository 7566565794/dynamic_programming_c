using namespace std;

bool contains(string s, vector<string>dict, int n){
    // cout<<s;
    int flag = 1;
    for(int i=0; i<n; i++){
        flag = 1;
        // cout<<dict[i];
        if(s.length()!=dict[i].length()){
            flag = 0;
        }
        for(int j=0; j<s.length(); j++){
            if(s[j]!=dict[i][j])
                flag = 0;
        }
        if(flag==1)
            break;
    }
    return flag;
}

bool wordBreak(string s, vector<string>dict, int n){
    int len = s.length();
    bool dp[len+1];
    memset(dp,false,sizeof(dp));
    for(int i=1; i<=len; i++){
        if(dp[i]==false && contains(s.substr(0,i),dict,n))
            dp[i] = true;
        if(dp[i]==true){
            // cout<<"here";
            if(i==len)
                return true;
            for(int j=i+1; j<=len; j++){
                if(dp[j]==false && contains(s.substr(i,j-i),dict,n))
                    dp[j] = true;
                if(dp[j] && j==len)
                    return true;
            }
        }
    }
    return false;
    
}

int main()
 {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<string>dict;
	    for(int i=0; i<n; i++){
	        string s;
	        cin>>s;
	        dict.push_back(s);
	    }
	    string s;
	    cin>>s;
	    cout<<wordBreak(s,dict,n)<<endl;
	   //cout<<contains(s,dict,n)<<endl;
	}
	return 0;
}
