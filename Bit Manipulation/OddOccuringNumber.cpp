//Brute Force Approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count%2 != 0) {
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;

}