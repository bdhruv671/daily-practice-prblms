//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int factorial(int N)
    {if ( N == 0 or N == 1)return 1;
        //Your code here
        return N*factorial(N-1);
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution ob;
	    cout<<ob.factorial(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends