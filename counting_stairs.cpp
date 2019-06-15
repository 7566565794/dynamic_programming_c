// our code which is not getting accepted i dont know y.
#include <iostream>
using namespace std;
void count_stairs(int n){
    int dp[100000];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=100000;i++){
        dp[i]=(dp[i-1]%1000000007+dp[i-2]%1000000007)%1000000007;
    }
    cout<<dp[n]<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // cout<<count_stairs(n)<<endl;
	}
	return 0;
}

// efficient solution which is getting accepted and i dont know y??
#include <iostream>
#include<math.h>
using namespace std;
long long int m=pow(10,9)+7;
int main() {
	//code
	int t;cin>>t;
	long long int arr[100000];
	    arr[0]=1;arr[1]=1;
	    for(int i=2;i<=100000;i++)
	    {
	        arr[i]=(arr[i-1]%m+arr[i-2]%m)%m;
	    }
	while(t--)
	{
	    int n;cin>>n;
	    cout<<arr[n]<<"\n";
	}
	return 0;
}
