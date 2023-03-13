#include<bits/stdc++.h>
using namespace std;
int builtIn(int n){
   return __builtin_popcount(n);
}
int main(){
    int n;
   int countBits(int n){
// code here
if(n==0)
return 0;
int x=log2(n);
int first=(x * pow(2,x-1));
int second=(n-pow(2,x) +1);
int rest=n-pow(2,x);
int ans=first + second + countBits(rest);
return ans;
}
