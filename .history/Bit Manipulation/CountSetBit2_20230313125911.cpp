// Approach is to do an and operation of number with one and check whether its returning one or not.
// If it return 1 then increase count by one
//Otherwise make count remain same
//atlast perform a right shift  operation by 1 to that number

#include<bits/stdc++.h>
using namespace std;
int perform1Operation(int n){
    int res =0;
    while(n>0){
       if(n&1 == 1) res++;
       
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<< perform1Operation(n);
    return 0;
}