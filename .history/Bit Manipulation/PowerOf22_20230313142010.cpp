//Unset the right most set bit...
//Power of two will only have one set bit


#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n){
    if(n==0) return false;
    if(n==1) return true;
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