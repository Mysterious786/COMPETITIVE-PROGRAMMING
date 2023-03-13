// Brian Kerningam's Algorithmn
// Iterate till the given number is greater than 0
//with each ieration perform an and operation with  the number to a number smaller than one
// That is n&(n-1)
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