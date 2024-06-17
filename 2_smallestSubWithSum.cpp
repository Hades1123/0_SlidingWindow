//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
		int windowSum = 0, start = 0, end = 0, result = INT_MAX;
		while(end < n)
		{
			while(windowSum < x && end < n)
			{
				windowSum += arr[end++];
			}
			while(windowSum > x && start < end)
			{
				result = min(result, end - start + 1);
				windowSum -= arr[start++];
			}
		}
		return (result != INT_MAX ? result : 0);
	}
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends