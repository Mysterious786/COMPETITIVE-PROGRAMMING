#include<bits/stdc++.h>
using namespace std;
int builtIn(int n){
   return __builtin_popcount(n);
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<< builtIn(n);
    return 0;
}