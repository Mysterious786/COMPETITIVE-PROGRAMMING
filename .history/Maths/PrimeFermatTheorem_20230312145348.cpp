// Its a algorithmn that takes O(1) AND O(1)

#include<bits/stdc++.h>
using namespace std;
bool checkIsPrime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    else{
        int p = (int) pow(2,n-1)%2;
        if(p==1) return 
    }

}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    checkIsPrime(num)?cout<<"Yes":cout<<"No";
    return 0;
}