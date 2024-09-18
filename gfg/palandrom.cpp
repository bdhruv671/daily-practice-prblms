//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool isPalin(int N)
    {
        
        string str = to_string(N);
        if(str == string(str.rbegin(),str.rend()))return 1;
        return 0;
        //Your code here
        //You may use a helper function if you like
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
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends