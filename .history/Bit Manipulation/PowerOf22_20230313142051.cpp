//Unset the right most set bit...
//Power of two will only have one set bit
//Just do an and with one number less and if its 0 return true

#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n){
    if(n==0) return false;
   
    return true;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<powerOfTwo(n);
    return 0;
}