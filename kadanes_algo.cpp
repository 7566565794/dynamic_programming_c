//largest contigous sum aub array..
#include <iostream>
using namespace std;
int longest_conti_subarray(int arr[],int n){
    int max_so_far=0;
    int max_ending_here=0;
    
    for(int i=0;i<n;i++){
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here<0){
            max_ending_here=0;
        }
        if(max_so_far<max_ending_here){
            max_so_far=max_ending_here;
        }
    }
    if( max_so_far == 0 )
    {
        return arr[0];
    }
    else{
        return max_so_far;    
    }
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<longest_conti_subarray(arr,n)<<endl;
	}
	return 0;
}
