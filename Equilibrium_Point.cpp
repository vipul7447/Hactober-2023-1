//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        int sum = 0;
        int leftsum = 0;
        
        for(int i =0; i < n; i++){
            sum += a[i];
        }
        
        for(int i = 0; i < n; i++){
            sum = sum - a[i];
            if(leftsum == sum){
                return i+1;
            }
            leftsum += a[i]; 
        }
        return -1;
    }

};
