//1. Calculate the xor of all elements
//2. If two xor having same bit then the result is 0 whereas viceversa
// 1^0 = 1
// 0^0 = 0
//1^1 = 0
//Now if we didnt got 0 after xor that means at some position the bit might have differ producing a set bit 
//  Now any first bit set or last bit set
// Now makgite two bucket first and second
//Do the xor start from 0 with checking if & of that numbers
//
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        vector<long long int> ans;
      long long  int totalXor = 0;
        for(long long  int i=0;i<n;i++){
            totalXor ^=arr[i];
        }
        long long  int sn = totalXor & ~(totalXor-1);
        long long  int first =0;
        long long  int second = 0;
        for(long long  int i=0;i<n;i++){
            if((sn&arr[i])!=0){
                first^=arr[i];
            }
            else{
                second^=arr[i];
            }
        }
        if(first>second){
        ans.push_back(first);
        ans.push_back(second);}
        else{
             ans.push_back(second);
        ans.push_back(first);
        }
      return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends