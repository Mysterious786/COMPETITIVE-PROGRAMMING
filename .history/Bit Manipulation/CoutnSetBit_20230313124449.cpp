// Brian Kerningam's Algorithmn
#include<bits/stdc++.h>
using namespace std;
int brianKerningamBitCount(int n){
    int res =0;
    while(n>0){
        n = n&(n-1);
        res++;
    }
    res
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<< brianKerningamBitCount(n);
    return 0;
}