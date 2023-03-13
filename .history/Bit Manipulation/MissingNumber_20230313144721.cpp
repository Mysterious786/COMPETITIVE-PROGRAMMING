#include <bits/stdc++.h>
using namespace std;
class Solution{

  public:

    int MissingNumber(vector<int>& array, int n) {

     int totalXor = 0;
     for(int i = 0;i<n-1;i++){
         totalXor ^= ((i+1)^array[i]);
    }
    return totalXor^n;}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}