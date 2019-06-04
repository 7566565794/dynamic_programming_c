#fibbonacci through dynamic programming question
#include <iostream>
using namespace std;
  
int fibbo(int n) 
{ 
  int f[n+2];    
  int i; 
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      f[i] = (f[i-1] + f[i-2])% (1000000007);//at this line u need to understand that ur
      #output is exceeding here so inorder to avoid it u need to use modulus operator 
  } 
  
  return f[n]; 
} 
 
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<(fibbo(n))<<endl;//point to note is u might try to converge ur output using modulus while printing but please
      #make a note here is since ur output has already exceeded limit while calculating so even if u try to converge it later 
      #that will not make any sense.
	}
	return 0;
}
