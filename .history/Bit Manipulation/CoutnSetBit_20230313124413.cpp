// Brian Kerningam's Algorithmn
#include<bits/stdc++.h>
using namespace std;
int brianKerningamBitCount(int n){
    while(n>0){
        n = n&(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<< brianKerningamBitCount(n);
    return 0;
}