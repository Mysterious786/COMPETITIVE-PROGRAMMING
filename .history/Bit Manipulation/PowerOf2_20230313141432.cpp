#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n){
    if(n==0) return false;
    while(n!=1){
        if(n%2!=0) return false;
        n/=2;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<powerOfTwo(n);
    return 0;
}