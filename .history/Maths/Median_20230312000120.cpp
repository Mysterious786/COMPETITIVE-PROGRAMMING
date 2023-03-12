#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i =0;i<n;i++){
        int elemnt;
        cout<<"Enter the value of element"<<endl;
        cin>>elemnt;
        v.push_back(elemnt);
    }
    sort(v.begin(),v.end());
    if(n%2!=0) cout<< v[n/2];
    else{
        int a = v[n/2)];
        int b = v[(n/2)+1];
        cout<<a+b/2;
    }
    return 0;

}