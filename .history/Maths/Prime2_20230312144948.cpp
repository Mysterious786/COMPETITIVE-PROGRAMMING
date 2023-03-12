// Efficient Solution 


#include<bits/stdc++.h> ///STANDARD LIBRARY
using namespace std;
bool isPrime(int n){
    if(n<=1) return false; ///Edge case
    if(n==2||n==3) return true;
    for(int i=5;i<=sqrt(n);i=i+6){
        if(n%i==0||(n%(i+2)==0)) return false;

    }
    return true;
}
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    isPrime(num)?cout<<"Yes":cout<<"No"<<endl;
    return 0;
}
// Other rules 
