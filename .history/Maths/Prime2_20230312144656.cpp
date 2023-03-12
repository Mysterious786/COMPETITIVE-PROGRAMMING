#include<bits/stdc++.h> ///STANDARD LIBRARY
using namespace std;
bool isPrime(int n){
    if(n<=1) return false; ///Edge case
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;

    }
    return true;
}
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    isPrime(num)?cout<<"Yes":cout<<"No"<<endl;
}
