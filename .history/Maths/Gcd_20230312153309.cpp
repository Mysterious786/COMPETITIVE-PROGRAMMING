//In this algoritmn if a<b then there is a swap of two number automatically
//that is a becomes b and b becomes a as an arguments
//Always take long long int
#include<bits/stdc++.h>
using namespace std;
int findGcd(int a,int b){
    if(b==0) return a;
    return findGcd(b,a%b)
}
int main(){
    int a,b;
    //Here we will always take a<b such that swap happens

    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
   cout<< findGcd(a,b);
}