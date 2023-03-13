// Brian Kerningam's Algorithmn
// Iterate till the given number is greater than 0
//with each ieration perform 
#include<bits/stdc++.h>
using namespace std;
int brianKerningamBitCount(int n){
    int res =0;
    while(n>0){
        n = n&(n-1);
        res++;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<< brianKerningamBitCount(n);
    return 0;
}